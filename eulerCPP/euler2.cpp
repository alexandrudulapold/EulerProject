#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main()
{
	int a=1,b=1,s=0;
	
	do	{
		b+=a;
		a=b-a;
		cout<<a<<"   "<<b<<endl;
		if(a%2==0) {s+=a;}
		}while(b<4000000);
	
	cout<<"s="<<s<<endl;
	
	return 0;
}

