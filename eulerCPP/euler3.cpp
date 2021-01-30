#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{

	long long n=sqrt(60085147513);
//	cin>>n;
	for(long long i=0; i<=n; i++)
	{	bool x=0;
		for(long long j=2; j<i; j++)
		{
			if(i%j==0 || 600851475143%i!=0) { x=1; break; }
		}
		if(x==0) cout<<i<<endl;
	}
	return 0;
}

