#include <iostream>
#include <vector>

using namespace std;

int divsum(int nr)
{
	int sum = 1;

	if (nr > 1)
	{
		if (nr % 2 == 0)
		{
			for (int i = 2; i <= nr / 2; i++)
			{
				if (nr % i == 0)
					sum += i;
			}
		}
		else
		{
			for (int i = 3; i < nr / 2; i += 2)
			{
				if (nr % i == 0)
					sum += i;
			}
		}
	}

	else if (nr < 1)
		return 0;

	return sum;
}

int nrtype(int nr)
{
	/*
		0 - недостаточное  / deficient
		1 - идеальное      / perfect
		2 - избыточное     / abundant
	*/

	int divsumnr = divsum(nr);

	if (divsumnr < nr)
	{
		return 0;
	}

	else if (divsumnr > nr)
	{
		return 2;
	}

	return 1;
}


//// MAIN ////

int main()
{
	vector <int> abundNumbers;

	for (int i = 1; i <= 20161; i++)
	{
		if (nrtype(i) == 2)
			abundNumbers.push_back(i);
	}



	int sum = 0;

	for (int nri = 1; nri <= 20161; nri++)
	{// bool-ul controleaza daca nri a trecut prin toate numerele abundante (nra prescurtat)
		bool sumAbund = false;
		for (int i1 = 0; i1 < abundNumbers.size(); i1++)
		{
			int abund1 = abundNumbers[i1];

			for (int i2 = 0; i2 < abundNumbers.size(); i2++)
			{
				int abund2 = abundNumbers[i2];

				if (nri != abund1 + abund2)
				{// daca suma la acesti doi abundanti este mai mare ca nri atunci a1++ iar a2=0
					if (abund1 + abund2 > nri) break;
				}

				else
				{// daca nr == a1+a2 atunci el este sumAbund (face break si trece la urmatorul nr)
					sumAbund = true;
					break;
				}
			}

			// daca nri a fost suma a 2 nra atunci face break si merge la urmatorul nri (++)
			if (sumAbund) break;
		}
		// daca nri a trecut prin toate nra si nu afost putut fi facut din suma lor atunci sum+=nri
		if (!sumAbund)
		{
			sum += nri;
		}
	}


	cout << "\n\n\n" << sum << endl;

	return 0;
}
