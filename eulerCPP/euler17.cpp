#include <iostream>
#include <string>

using namespace std;




string nrtol(int nr)
{
	string snr = to_string(nr);
	int len = snr.length();
	string str;
	
	switch(nr)
	{
		case 1: str = "one"; break;	
		case 2: str = "two"; break;
		case 3: str = "three"; break;
		case 4: str = "four"; break;
		case 5: str = "five"; break;
		case 6: str = "six"; break;
		case 7: str = "seven"; break;
		case 8: str = "eight"; break;
		case 9: str = "nine"; break;
		case 10: str = "ten"; break;
		case 11: str = "eleven"; break;
		case 12: str = "twelve"; break;
		case 13: str = "thirteen"; break;
		case 14: str = "fourteen"; break;
		case 15: str = "fifteen"; break;
		case 16: str = "sixteen"; break;
		case 17: str = "seventeen"; break;
		case 18: str = "eighteen"; break;
		case 19: str = "nineteen"; break;
		case 20: str = "twenty"; break;
		case 30: str = "thirty"; break;
		case 40: str = "forty"; break;
		case 50: str = "fifty"; break;
		case 60: str = "sixty"; break;
		case 70: str = "seventy"; break;
		case 80: str = "eighty"; break;
		case 90: str = "ninety"; break;
		case 100: str = "onehundred"; break;
		
		
		default: 
		{
			if (nr < 100) 
			{
				switch(int(nr/10%10))
				{
					case 2: str = "twenty"; break;
					case 3: str = "thirty"; break;
					case 4: str = "forty"; break;
					case 5: str = "fifty"; break;
					case 6: str = "sixty"; break;
					case 7: str = "seventy"; break;
					case 8: str = "eighty"; break;
					case 9: str = "ninety"; break;	
				}
				switch(int(nr%10))
				{
					case 1: str += "one"; break;	
					case 2: str += "two"; break;
					case 3: str += "three"; break;
					case 4: str += "four"; break;
					case 5: str += "five"; break;
					case 6: str += "six"; break;
					case 7: str += "seven"; break;
					case 8: str += "eight"; break;
					case 9: str += "nine"; break;		
				}
			}
			else if (nr < 1000)
			{
					if(nr % 100 == 0)
					{
						switch(int(nr/100%10))
						{
							case 1: str += "onehundred"; break;	
							case 2: str += "twohundred"; break;
							case 3: str += "threehundred"; break;
							case 4: str += "fourhundred"; break;
							case 5: str += "fivehundred"; break;
							case 6: str += "sixhundred"; break;
							case 7: str += "sevenhundred"; break;
							case 8: str += "eighthundred"; break;
							case 9: str += "ninehundred"; break;
						}
					}
					else
					{
						switch(int(nr/100%10))
						{
							case 1: str += "onehundredand"; break;	
							case 2: str += "twohundredand"; break;
							case 3: str += "threehundredand"; break;
							case 4: str += "fourhundredand"; break;
							case 5: str += "fivehundredand"; break;
							case 6: str += "sixhundredand"; break;
							case 7: str += "sevenhundredand"; break;
							case 8: str += "eighthundredand"; break;
							case 9: str += "ninehundredand"; break;
						}
					}		
				
				bool x = 0;
				switch(int(nr/10%10))
				{
				
					case 0: break;
					case 1:
					{ 
					x = 1;
						switch(int(nr%100))
						{
							case 10: str += "ten"; break;
							case 11: str += "eleven"; break;
							case 12: str += "twelve"; break;
							case 13: str += "thirteen"; break;
							case 14: str += "fourteen"; break;
							case 15: str += "fifteen"; break;
							case 16: str += "sixteen"; break;
							case 17: str += "seventeen"; break;
							case 18: str += "eighteen"; break;
							case 19: str += "nineteen"; break;
						}
					break;
					}
					case 2: str += "twenty"; break;
					case 3: str += "thirty"; break;
					case 4: str += "forty"; break;
					case 5: str += "fifty"; break;
					case 6: str += "sixty"; break;
					case 7: str += "seventy"; break;
					case 8: str += "eighty"; break;
					case 9: str += "ninety"; break;	
				}
				if (x == 0)
				{
					switch(int(nr%10))
					{
						case 1: str += "one"; break;	
						case 2: str += "two"; break;
						case 3: str += "three"; break;
						case 4: str += "four"; break;
						case 5: str += "five"; break;
						case 6: str += "six"; break;
						case 7: str += "seven"; break;
						case 8: str += "eight"; break;
						case 9: str += "nine"; break;		
					}
				}
			}
		}	
	}
	
	
	return str;
}



int main()
{
int sum = 0;
string s;
	for (int i = 1; i < 1000; i++)
	{
		s=nrtol(i);
		cout<<i<<" = "<<s<<endl;
		sum+=s.length();
	}
	s="onethousand";
	cout<<1000<<" = "<<s<<endl;
	sum+=s.length();
	
	cout<<sum<<endl;
	
return 0;
}

//	switch(snr[1])
//	{
//		case '1':
//			if(len == 1) str="one";
//			else if (len == 2) 
//			{
//				if(nr == 10) str="ten";
//				else if(nr == 11) str="eleven";
//				else if(nr == 11) str="twelve";
//			}
//		case '2':
//			if() 
//	}
