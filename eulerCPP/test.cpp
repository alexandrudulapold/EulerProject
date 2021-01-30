#include <iostream>
#include <string>

using namespace std;

int main()
{
	string v = "afdq";
	
	if(v[0] != 'a')
		cout<<v;
	
	return 0;
}









/*int main() {
   int n = 100;
   long long int sum = 1;
   for (int i = 2; i <= n; i++) {
      if (n % i == 0) {
         int isPrime = 1;
         for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
               isPrime = 0;
               break;
            }
         }
         if (isPrime) 
		 {
            sum+=i;
         }
      }
   }
   cout<<"sum="<<sum<<endl;
   return 0;
}*/
