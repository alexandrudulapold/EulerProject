#include <iostream>
using namespace std;

int main()
{
int c, cmax=0;
long long int elem=2, i, maxelem=0;

do
{
i=elem;
c=1;
//       cout<<"------------\ni="<<i<<endl;
	while(i!=1)
	{ c++;
		if(i%2==0) { i/=2; }
		
		  else   { i=i*3+1; }
		  //cout<<" "<<i;
	}
if(c>cmax) { cmax=c; maxelem=elem; }
//   	cout<<"\n  c="<<c<<endl;
elem++;
}while(elem<1000000);
cout<<cmax<<"\n"<<maxelem<<endl;

return 0;
}
