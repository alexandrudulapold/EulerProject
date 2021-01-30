#include <iostream>
#include <iomanip>
#include "C:\\Users\\katariz\\Desktop\\C++_\\bigint.cpp"

using namespace std; 

Int factorial(Int nr)
{
	Int f=1;
	Int c=0;
	for(Int i=1; i<=nr; i++)
	{
		
		f*=i;
//		while(f>100000000000) {f/=10; c++;}
	}
//	cout<<"        c="<<c<<endl;
	return f;
}

Int functia(Int n)
{
//	long double fn=factorial(n);
//	long double fnn=factorial(n+n);

	
	return (factorial(n+n)/(factorial(n)*factorial(n)));	
}
// (m+n)!/(m!n!)
int main()
{
	ios_base :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   	
//Your code starts here.
   	
	Int n=20;
	
	n=functia(n);

cout << setiosflags(ios::fixed) <<setprecision(64) << n << endl;




//	std::cout<<n<<std::endl;
//	printf("%f",n);


//FILE *f;
//
//f=fopen("euler15_text.txt","w+");
//
//fprintf(f,"%f",n);
	
return 0;
}

