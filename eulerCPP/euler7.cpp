#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<cmath>
using namespace std;
int main()
{
// j=2 pt ca i=5    2,3 = nr prime && <5
int j=2, ij;
for(int i=5; j<10001; i+=2)
{
bool x=0;
// l=3 dar nu 2 pt ca l+=2
	for(int l=3; l<=(int)sqrt(i); l+=2)
	{
	if(i%l==0) { x=1; break; }
	}
	
if(x==0) { j++; ij=i; }

}
cout<<"j="<<j<<"   i="<<ij<<endl;

return 0;
}
