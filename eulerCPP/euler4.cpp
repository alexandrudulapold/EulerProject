#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
int r, l, l2=0, max, maxi, maxj;
int k;
for(int i=100; i<1000; i++)
{
	for(int j=100; j<1000; j++)
{r=i*j; k=4;
////////////////////////////////////////////
for(; k<=7; k++)
{
if(r/(int)pow(10,k)!=0) { l=k+1; }
else break;
}
////////////////////////////////////////////
//int V[l], Vi[l], 
int ld=l/2;
vector <int> V(l);
vector <int> Vi(l);

for(int f=0, ff=l-1; f<l; f++, ff--)
{
	V[f]=r/(int)pow(10,ff)%10;	
}

for(int f=0, ff=0; f<l; f++, ff++)
{
	Vi[f]=r/(int)pow(10,ff)%10;	

}
l2=0;
for(int q=0; q<ld; q++)
{
	if(V[q]==Vi[q]) { l2++; }
	else break;
	if( l2==ld && max<r ) { max=r;  maxi=i; maxj=j; break; }
}
}
}
cout<<max<<endl;
cout<<"i*j:   "<<maxi<<'*'<<maxj<<endl;

return 0;
}
