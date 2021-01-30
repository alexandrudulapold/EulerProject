#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

string nr = to_string(pow(2,1000));
int sum = 0;

for(int i = 0; i < nr.length(); i++)
{
	if (nr[i] == '.') { break; }
	
	sum += int(nr[i])-48;
}


cout << sum << endl;

return 0;
}

