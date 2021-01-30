#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int AlphabetOrderChar(char c)
{
	c = tolower(c);
	switch (c)
	{
	case 'a': return 1; break;   case 'b': return 2; break;   case 'c': return 3; break;
	case 'd': return 4; break;   case 'e': return 5; break;   case 'f': return 6; break;
	case 'g': return 7; break;   case 'h': return 8; break;   case 'i': return 9; break;
	case 'j': return 10; break;  case 'k': return 11; break;  case 'l': return 12; break;
	case 'm': return 13; break;  case 'n': return 14; break;  case 'o': return 15; break;
	case 'p': return 16; break;  case 'q': return 17; break;  case 'r': return 18; break;
	case 's': return 19; break;  case 't': return 20; break;  case 'u': return 21; break;
	case 'v': return 22; break;  case 'w': return 23; break;  case 'x': return 24; break;
	case 'y': return 25; break;  case 'z': return 26; break;
	default: return 0;
	}
}

int AlphabetOrderStringSum(string s)
{
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
		sum += AlphabetOrderChar(s[i]);

	return sum;
}


int main()
{
	FILE* fnames;
	fopen_s(&fnames, "D:\\euler\\euler22\\names.txt", "r");

	string strfile; // save-uim tot fisierul in string-ul "strfile"
	do
	{
		strfile += (char)getc(fnames);

	} while (!feof(fnames));


	vector<string> names;
	vector<int> scorename;

	string tempname = "";
	for (int i = 1; i < strfile.length(); i++)
	{
		// daca simbolul nu e " nici ',' atunci adaugam simbolul in nume
		if ((strfile[i] != '\"') && (strfile[i] != ','))
		{
			tempname += strfile[i];
		}
		else
		{
			if ((strfile[i + 1] != ',') && (strfile[i - 1] != ','))
			{
				names.push_back(tempname);
				tempname = "";
			}
		}
	}

	sort(names.begin(), names.end());

	unsigned long sumtot = 0;
	int iteratornames = 1;
	for (string name : names)
	{
		long tempsum = 0;
		tempsum = AlphabetOrderStringSum(name);
		tempsum *= iteratornames;

		sumtot += tempsum;
		//cout << sumtot << "\t i=" << tempsum << "\t i=" << iteratornames << "\t name=" << name << endl;

		iteratornames++;
	}

	cout << sumtot << endl;
	
	return 0;
}