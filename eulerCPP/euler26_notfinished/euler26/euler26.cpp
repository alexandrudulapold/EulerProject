
// C# - https://stackoverflow.com/questions/1546113/double-to-string-conversion-without-scientific-notation
// C++ - https://stackoverflow.com/questions/35724411/double-to-stdstring-with-dynamic-precisicion-without-trailing-zeros

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int repetitiveNumbersCount(string);
int repetitiveNumbersCounts(int, vector<int>);

int main()
{
	cout << setprecision(1000);


	/*double arr[] = {
	((double)1 / 12),
	((double)1 / 13),
	((double)1 / 3),
	((double)1 / 22)
	};

	////////////////////
	stringstream st;
	st.precision(1000);
	st << arr[3];
	string s1 = st.str();
	cout << s1 << endl;

	////////////////////

	cout << repetitiveNumbersCount(s1) << endl;*/


	int maxRepetNrs = 0;
	int dWithMaxRepetNrs = 0;

	for (int d = 1; d < 1000; d++) {
		stringstream ss;
		ss.precision(1000);
		ss << (1 / (double)d);
		string str = ss.str();

		int rnc = repetitiveNumbersCount(str);

		if (d == 839) {
			cout << str << endl;
		}

		if (maxRepetNrs < rnc) {
			maxRepetNrs = rnc;
			dWithMaxRepetNrs = d;
		}
	}

	cout << "Max repetitive numbers: " << maxRepetNrs << endl;
	cout << "d with max repetitive numbers: " << dWithMaxRepetNrs << endl;

	return 0;
}

int repetitiveNumbersCount(string strNr) {
	vector<int> nr;

	for (int i = 2; i < strNr.length(); i++) {
		nr.push_back(int(strNr[i]) - 48);
		//cout << nr[i - 2];
	}

	/*
	vector<int> repetitiveNr;
	if (nr.size() > 0) {
		repetitiveNr.push_back(nr[0]);
	}
*/

	

	for (int i = 0; i < nr.size(); i++) {

		// cazul cand este doar o cifra repetitiva
		if ((i != (nr.size() - 1)) && nr[i] == nr[i + 1]) { // daca cifra trecuta, urmatoarea si mai urmatoarea sunt egale
			if ((i != (nr.size() - 2)) && nr[i] == nr[i + 2]) { // cu i atunci returnam 1 pentru ca este doar o 
				if ((i != (nr.size() - 3)) && nr[i] == nr[i + 3]) { // cifra repetitiva (speram)
					if ((i != (nr.size() - 4)) && nr[i] == nr[i + 4]) { 
						return 1;
					}
				}
			}
		}


		if (i != (nr.size() - 1)) {
				for (int i1 = i+1; i1 < nr.size(); i1++) {
						if (nr[i] == nr[i1]) {

				
				
						}
				}
		}

		

		// in orice caz adaugam nr[i] in cifre repetitive si vom afla daca se repeta mai departe
		//repetitiveNr.push_back(nr[i]);

	}
	return 0;
}




				/* while(true) cu iNext - automatizeaza asta \/
				
				if ((i != (nr.size() - 1)) && (i1 != (repetitiveNr.size() - 1)) && nr[i + 1] == repetitiveNr[i1 + 1]) {
					if ((i != (nr.size() - 2)) && (i1 != (repetitiveNr.size() - 2)) && nr[i + 2] == repetitiveNr[i1 + 2]) {
						if ((i != (nr.size() - 3)) && (i1 != (repetitiveNr.size() - 3)) && nr[i + 3] == repetitiveNr[i1 + 3]) {
							int cifreRep;
							cifreRep = repetitiveNr.size() - i1;
							return cifreRep;
						}
					}
				}*/


				/*int iWhile = 0;
								int iNext = 1;
								while (true) {
									if ((i != (nr.size() - iNext)) && (i1 != (repetitiveNr.size() - iNext)) && nr[i + iNext] == repetitiveNr[i1 + iNext]) {
										iNext++;
										continue;
									}
									else {
										int cifreRep;
										cifreRep = repetitiveNr.size() - i1;

										if (cifreRep > maxNrRep) {
											maxNrRep = cifreRep;

											if (maxNrRep > maxMaxNrRep) {
												maxMaxNrRep = maxNrRep;
											}
										}
									}
									if (iWhile == nr.size() - 1) {
										break;
									}
									iWhile++;
								}
								repetitiveNr.clear();
								if (nr.size() > 0) {
									maxNrRep = 0;
									repetitiveNr.push_back(nr[0]);
								}*/