#include <iostream>

using namespace std;

int sumdivisors(int nr)
{
	int sum = 0;
	
	if(nr%2 != 0)
	{
		for(int i = 1; i < (nr/2)+1; i+=2)
		{
			if(nr%i == 0) 
				sum += i;
		}
	}
	else
	{
		for(int i = 1; i < (nr/2)+1; i++)
		{
			if(nr%i == 0) 
				sum += i;
		}
	}
	
	return sum;
}


int main()
{
 
 int sumtot = 0;
 
 for(int i = 1; i < 10000; i++)
 {
 	int temp = sumdivisors(i);
 	int sdtemp = sumdivisors(temp);
 	
 	//daca a praverit odata nu o sa mai pravereasca (despre temp>i)
 	if(sdtemp == i && temp > i)
 		sumtot += i + temp;
 }
 
 cout<<sumtot;
 
return 0;
}
