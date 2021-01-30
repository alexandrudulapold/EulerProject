#include <iostream>
#include "C:\\Users\\katariz\\Desktop\\C++_\\bigint.cpp"

using namespace std;


int main()
{
long long int n=20; // n X n grid
n+=2;
long long int M[n][n];
	
for(int i=0; i<n; i++)
{
	for(int j=0; j<n; j++)
	{
	M[i][j]=1;
	if(i==n-1 || j==n-1) { M[i][j]=0; }
	}	
}
M[n-2][0]=2;
M[n-2][n-2]=3;	


for(int i=0; i<n; i++)
{
	for(int j=0; j<n; j++)
	{
	if(M[i][j]<10) cout<<M[i][j]<<"  ";	
	else cout<<M[i][j]<<" ";	
	}	
 cout<<endl;
}
unsigned long long int c4=0;
Int c=0;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool broke=0;
long long int si=0,sj=0, sx;	
long long int x=0,y=0, dely=-1, sdely=-1, sdelx=n-2, delx;
while(1)
{
	
	x=0;y=0;
	sx=-1;
	sdelx=n-2;
  while(1)
  {

  	
	 if(M[y][x+1]==1) { x++; }
	 else if(M[y][x+1]!=1)	
	 { 	

		if(M[y+1][x]!=0) 
		{ 
		  if(sx!=x) { si=y; sj=x; sx=sj; } 
		  y++; 
		  if(M[y][x]==2) { c++; broke=1; break; }
		  if(M[y][x]==3)  { if(sx==0) {si=y; sj=x; sx=sj;} break; }
		  }
		  if(M[y][x+1]==3) { break; }
		}//cout<<"x="<<x<<"  y="<<y<<"  sj="<<sj<<"  si="<<si<<endl;cout<<endl; 
		   
  } 

if(broke==1) {break;}

 c++;
 if(c>1000000) { c4++; c=0; }
 M[si][sj]=0; 
 if(sj==1) {dely=si;}
 if(sj!=sdelx || si!=delx) 
 {
  for(long long int i1=si+1; i1<n-2; i1++)
	{
		for(long long int i=sj; i<n-1; i++)
		{
		 M[i1][i]=1;
		}
	}
	sdelx=x; delx=y;
 }	
 	if(dely>sdely) 
		{
			for(long long int i1=dely+1; i1<n-2; i1++)
			{
				for(long long int i=0; i<n-1; i++)
				{
				 M[i1][i]=1;
				}
			}
			if(dely>sdely) {sdely=dely;}
		}  
		  
// 									cout<<endl; 
//								  for(int i=0; i<n; i++)
//								{
//									for(int j=0; j<n; j++)
//									{
//									if(M[i][j]<10) cout<<M[i][j]<<"  ";	
//									else cout<<M[i][j]<<" ";	
//									}	
//								 cout<<endl;
//								
//								} cout<<"c="<<c<<endl;cout<<"x="<<x<<"  y="<<y<<"  sj="<<sj<<"  si="<<si<<endl;cout<<endl; 
}

	
cout<<"\n\n\n\n----------"<<c<<"-----------"<<endl; 

	
	
return 0;
}

