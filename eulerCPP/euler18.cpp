#include <iostream>
#include <string>
using namespace std;

int main()
{
string s = 
"75,"
"95 64,"
"17 47 82,"
"18 35 87 10,"
"20 04 82 47 65,"
"19 01 23 75 03 34,"
"88 02 77 73 07 63 67,"
"99 65 04 28 06 16 70 92,"
"41 41 26 56 83 40 80 70 33,"
"41 48 72 33 47 32 37 16 94 29,"
"53 71 44 65 25 43 91 52 97 51 14,"
"70 11 33 28 77 73 17 78 39 68 17 57,"
"91 71 52 38 17 14 91 43 58 50 27 29 48,"
"63 66 04 68 89 53 67 30 73 16 69 87 40 31,"
"04 62 98 27 23 09 70 98 73 93 38 53 60 04 23,";

 int temp, i=0, j=0, Mi=0, Mj=0;
 int M[15][15];
 while(i<s.length())
 {
 	temp = ((int)s[i]-48)*10; i++;
 	temp += ((int)s[i]-48); i++;
 	M[Mi][Mj] = temp; Mj++;
 	
 	if(s[i]==',') { Mj=0; Mi++; }
 	
 	i++;
 }
 
 int current=0;
 int max=0;
 

current += M[0][0];
 	for(int i2=0; i2<2; i2++)
    {
    	current += M[1][i2];
 		for(int i3=0; i3<2; i3++)
    	{
    		current += M[2][i3+i2];
 			for(int i4=0; i4<2; i4++)
 			{
 				current += M[3][i4+i3+i2];
 				for(int i5=0; i5<2; i5++)
 				{
 					current += M[4][i5+i4+i3+i2];
 					for(int i6=0; i6<2; i6++)
 				 	{
 				 		current += M[5][i6+i5+i4+i3+i2];
 				 		for(int i7=0; i7<2; i7++)
 				 		{
 				 			current += M[6][i7+i6+i5+i4+i3+i2];
 				 			for(int i8=0; i8<2; i8++)
 				 			{
 				 				current += M[7][i8+i7+i6+i5+i4+i3+i2];
 				 				 for(int i9=0; i9<2; i9++)
								 {
								 	current += M[8][i9+i8+i7+i6+i5+i4+i3+i2];
								 	for(int i10=0; i10<2; i10++)
								    {
								    	current += M[9][i10+i9+i8+i7+i6+i5+i4+i3+i2];
								 		for(int i11=0; i11<2; i11++)
								    	{
								    		current += M[10][i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
								 			for(int i12=0; i12<2; i12++)
								 			{
								 				current += M[11][i12+i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
								 				for(int i13=0; i13<2; i13++)
								 				{
								 					current += M[12][i13+i12+i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
								 					for(int i14=0; i14<2; i14++)
								 				 	{
								 				 		current += M[13][i14+i13+i12+i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
								 				 		for(int i15=0; i15<2; i15++)
								 				 		{
								 				 			current += M[14][i15+i14+i13+i12+i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
								 				 			if(max<current) max = current;
															current -= M[14][i15+i14+i13+i12+i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
														}
														current -= M[13][i14+i13+i12+i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
													}
													current -= M[12][i13+i12+i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
												}
												current -= M[11][i12+i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
											}
											current -= M[10][i11+i10+i9+i8+i7+i6+i5+i4+i3+i2];
										}
										current -= M[9][i10+i9+i8+i7+i6+i5+i4+i3+i2];
									}
									current -= M[8][i9+i8+i7+i6+i5+i4+i3+i2];
								 }
								 current -= M[7][i8+i7+i6+i5+i4+i3+i2];
							}
							current -= M[6][i7+i6+i5+i4+i3+i2];
						}
						current -= M[5][i6+i5+i4+i3+i2];
					}
					current -= M[4][i5+i4+i3+i2];
				}
				current -= M[3][i4+i3+i2];
			}
			current -= M[2][i3+i2];
		}
		current -= M[1][i2];
	}
 
cout<<max; 
 
return 0;
}
