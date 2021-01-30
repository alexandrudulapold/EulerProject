#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<cmath>
using namespace std;
int main()
{

int s1=0, s=0, s2=0, dif=0, i2p;

for(int i=1; i<101; i++)
{s+=i;
	i2p=(int)pow(i,2);
	s1+=i2p;
	s2=(int)pow(s,2);
	dif=s2-s1;
}
cout<<" s="<<s<<"    s1="<<s1<<"    s2 ="<<s2<<"          dif="<<dif<<endl;
return 0;
}
