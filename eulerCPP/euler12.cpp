#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<cmath>
using namespace std;

/*	era in loc de for
if(nr%2==0)
{	
  for(int k=1; k<(nr/2)+1; k++)
  {
  if(nr%k==0) { c++; }
  }
}

else
{}
*/	

int main()
{
bool x=0;
unsigned long long int nr=0; 
int c;
int j=1;

for(int i=1; ; i++) 
{
c=1;
nr+=j;


if(nr%2==0)
{
  for(int k=1; k<(nr/2)+2; k++)
  {
  if(nr%k==0) { c++; }
  }


	          //  cout<<i<<"|   "<<nr<<"   "<<c<<endl;
	if(c>500) {cout<<"\nnr = "<<nr<<endl; cout<<"i = "<<i<<endl; cout<<"c = "<<c<<endl; break; }
}
	j++;
}

return 0;
}

//21384
