#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
int main()
{
	
	int a=0,s=0;
	
	for(int i=0; i<1000; i++)
	{
		if(i%3==0||i%5==0) {s+=i; cout<<"i="<<i<<endl;}
	}
	cout<<"s="<<s<<endl;
	
	return 0;
}

