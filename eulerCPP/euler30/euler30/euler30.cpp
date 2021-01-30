#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int getIntLength(int);

int main()
{

    vector<int> suitableNumbers;

    for (int i = 1000; i < 200000; i++)
    {
        int length = getIntLength(i);

        int numberSum = 0;
        for (int i1 = 0; i1 < length; i1++) 
        {
            int character = (i / (int)pow(10, i1) % 10);
            
            if (character >= 0)
            {
                numberSum += pow(character, 5);
            }
        }

        if (numberSum == i) // daca numarul este egal cu cifrele lui ^5 atunci il adaugam in vector
        {
            suitableNumbers.push_back(i);
            cout << i << endl;
        }
    }

    
    int sum = 0;
    for (int i = 0; i < suitableNumbers.size(); i++)
    {
        sum += suitableNumbers[i];
    }

    cout << "result: " << sum << endl;

    return 0;
}


int getIntLength(int number) 
{
    int count = 0;

    if (number >= 0)
    {
        count++;
        while (true) 
        {
            if ((number / 10) >= 1) 
            {
                number /= 10;
                count++;
            }
            else
            {
                return count;
            }
        }
    }
    return count;
}
