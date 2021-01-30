#include <iostream>
#include <string>
#include <cmath>
#include "D:\\bigint.cpp"

using namespace std;

Int factorialf(int nr)
{
	Int x = nr;
	for(int i = 2; i < nr; i++)
	{
		x *= i;
	}
	return x;
}

int main()
{
 int numar = 100; 
 Int str;
 
 str = factorialf(numar);
 int strl=1;
 
 Int temp = str;
 while(1)
 {
 	if(temp / 10 > 0) { strl++; temp/=10; }
 	else break;
 }
 
 Int sum = 0;
 
 for(int i = 0; i < strl; i++)
 {
 	Int p = (Int)pow((Int)10,(Int)i);
 	sum += str / p % 10;
// 	cout<<p<<endl;
 }
 
 cout<<sum<<endl;
 	
return 0;
}
