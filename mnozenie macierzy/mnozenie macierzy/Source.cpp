#include <iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
{
	ifstream plik1;
	plik1.open("C:\\macierz1.txt", ios::in);										//otwarcie pliku z macierza1

	if (!plik1.good())
	{
		cout << "nie znaleziono pliku" << endl;
		exit(0);
	}
	
	
	ifstream plik2;
	plik2.open("C:\\macierz1.txt", ios::in);										//otwarcie pliku z macierza2

	if (!plik2.good())
	{
		cout << "nie znaleziono pliku" << endl;
		exit(0);
	}
	
	fstream plik3;
	plik3.open("pomocniczy.txt", ios::out || ios::in);

	fstream plik4;
	plik4.open("pomocniczy2.txt", ios::out || ios::in);

	///////////////////////////////////////////////////
	string linia;
	int wiersz = 0;
	while (getline(plik1, linia))
	{
		wiersz++;																// zliczanie wierszy
	}
	///////////////////////////////////////////////////
	plik1.clear();
	plik1.seekg(0, ios::beg);                                             

	int cyfra;
	int il_cyfr = 0;
	while (!plik1.eof())
	{
		plik1 >> cyfra;
		il_cyfr++;
	}
	int kolumny;
	kolumny = il_cyfr / wiersz;
	///////////////////////////////////////////////////
	///////////////////////////////////////////////////
	string linia2;
	int wiersz2 = 0;
	while (getline(plik2, linia))
	{
		wiersz2++;																// zliczanie wierszy
	}
	///////////////////////////////////////////////////
	plik2.clear();
	plik2.seekg(0, ios::beg);

	int cyfra2;
	int il_cyfr2 = 0;
	while (!plik2.eof())
	{
		plik2 >> cyfra;	
		il_cyfr2++;
	}
	int kolumny2;
	kolumny2 = il_cyfr2 / wiersz2;
	plik1.clear();
	plik1.seekg(0, ios::beg);

	plik2.clear();
	plik2.seekg(0, ios::beg);
	int wyni, wynik, m1, m2;

	for (int k = 0; k < wiersz2; k++)
	{
		for (int i = 0; i < kolumny2; i++)
		{
			for (int j = 0; i < il_cyfr2; j++)
			{
				if (j % kolumny2 == 0)
				{
					plik2 >> m2;
					plik1 >> m1;
					wyni = m1*m2;
					wynik = wynik + wyni;
					plik3 << wynik ;
					






				}
				else
				{
					plik2 >> m2;
				}
			}
			plik2.clear();
			plik2.seekg(0, ios::beg);
		}
		plik1.clear();
		plik1.seekg(0, ios::beg);
	}
	plik3.close();
	plik1.close();
	plik2.close(); 
	
	return 0;
}