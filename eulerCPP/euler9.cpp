#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
int a, a2, b, b2, c, c2;
int s=0;


for(int i=1; i<1000; i++)
{
	for(int j=i+1; j<1000; j++)
	{
		b=j, a=i;
		a2=pow(a,2);
		b2=pow(b,2);
		c2=a2+b2; 
		c=sqrt(c2);
		
		if(!( c<b || c*c!=c2)) 
		{cout<<"a="<<a<<"    b="<<b<<"   c="<<c<<endl;
		if(a+b+c==1000) { s=a*b*c; break; }
		}
	}
	if(s!=0) break;
}
cout<<s<<endl;

return 0;
}
