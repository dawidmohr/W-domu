#include <iostream>

int main()
{
	int ** tablica = new int *[3];

	tablica[0] = new int[3];   // wskaŸnik tablica[0] wskazuje na now¹ tablicê
	tablica[1] = new int[3];   // wskaŸnik tablica[1] wskazuje na now¹ tablicê
	tablica[2] = new int[3];   // wskaŸnik tablica[2] wskazuje na now¹ tablicê

	tablica[2][2] = 123;
	cout << tablica[2][2];

	// zwalniamy pamiec
	delete[] tablica[0];
	delete[] tablica[1];
	delete[] tablica[2];
	delete[] tablica;

	return 0;
}