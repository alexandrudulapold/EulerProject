#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<cmath>
using namespace std;
int main()
{
int n=20;
int co=0;
for(int i=n;  ; i+=n)
{co=0;
	
	for(int c=1; c<n+1; c++ )
	{
		if(i%c==0) { co++; }
		else break;
	}
if(co==n) { cout<<i<<endl; break; }

}



return 0;
}
