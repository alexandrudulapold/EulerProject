#include <iostream>
#include <string>

using namespace std;

int factorial(int nr) {
	int tot = nr;
	for (int i = 2; i < nr; i++) {
		tot *= i;
	}
	return tot;
}

int main()
{
	//string numbers = "012";
	//int lastNr = int(numbers[numbers.length() - 1]) - 48;

	int numbersArr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int counter = 0;

	for (int i1 = 7; i1 < 10; i1++)
	{
		for (int i = 8; i < 10; i++)
		{
			int temp1 = numbersArr[8];
			cout << numbersArr[8] << numbersArr[9] << endl;
			numbersArr[8] = numbersArr[9];
			numbersArr[9] = temp1;
		}
	}
	



	return 0;
}
