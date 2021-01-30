#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
long long int s=5;  //sum=5 pentru ca incepem [de la 5 cilcu de ma jos (inloc de 2)]
bool x=0;
int n=2000000;

for(int i=5; i<n; i+=2)
{
x=0;
	for(int j=3; j<=(int)sqrt(i); j+=2)
	{	
		if(i%j==0) {x=1; break;}
	}
	if(x==0)  {s+=i; /*cout<<"i="<<i<<"     s="<<s<<endl;*/}
}
cout<<s<<endl;
return 0;
}
