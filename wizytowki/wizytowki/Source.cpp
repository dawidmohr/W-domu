#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string imie, nazwisko;
int nr_telefonu;

int main()

{
	cout << "podaj Imie";
	cin >> imie;
	cout << "podaj nazwisko";
	cin >> nazwisko;
	cout << " podaj nr_telefonu";
	cin >> nr_telefonu;

	fstream plik;
	plik.open("wizytowka.txt", ios::out);

	plik << imie << imie << endl;
	plik << nazwisko << nazwisko << endl;
	plik << nr_telefonu << endl;

	return 0;
}