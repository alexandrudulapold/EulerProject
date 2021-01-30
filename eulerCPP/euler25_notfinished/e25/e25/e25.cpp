#include <iostream>
#include <string>
#include <vector>


using namespace std;
int numberLength(long);

int main()
{
    bool foundNr = false;
    vector<int> nr1{ 1 };
    vector<int> nr2{ 1 };

    int nrIndex = 2;

    while (!foundNr) 
    {
        vector<int> lastNr1 = nr1;

        //nr1 += nr2;
        for (int i = 0; i < nr1.size(); i++)
        {
            if (nr2.size() > i)
            {
                nr1[i] += nr2[i];
            }
            
            
            if (nr1[i] > 9)
            {
                if (i == nr1.size() - 1) // daca e ultima iteratie
                {
                    nr1.push_back(nr1[i] % 10);
                    nr1[i] /= (int)10;
                }
                else
                {
                    nr1[i + 1] += (nr1[i] % 10);
                    nr1[i] /= (int)10;
                }
            }
        }

        nr2 = lastNr1;

        if (nr1.size() == 3)
        {
            foundNr = true;
        }

        nrIndex++;
    }

    cout << nrIndex << endl;

    return 0;
}








int numberLength(long nr)
{
    return to_string(nr).length();
}

