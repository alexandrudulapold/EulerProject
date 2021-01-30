#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    
    vector<string> results;

    for (int a = 2; a <= 100; a++) 
    {
        for (int b = 2; b <= 100; b++)
        {
            string result = to_string(pow(a, b));

            results.push_back(result);

            //cout << result << endl;
        }
    }

    sort(results.begin(), results.end());
    results.erase(unique(results.begin(), results.end()), results.end());

    cout << results.size() << endl;

    return 0;
}