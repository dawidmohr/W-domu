#include <iostream>

int main()
{
	int ** tablica = new int *[3];

	tablica[0] = new int[3];   // wska�nik tablica[0] wskazuje na now� tablic�
	tablica[1] = new int[3];   // wska�nik tablica[1] wskazuje na now� tablic�
	tablica[2] = new int[3];   // wska�nik tablica[2] wskazuje na now� tablic�

	tablica[2][2] = 123;
	cout << tablica[2][2];

	// zwalniamy pamiec
	delete[] tablica[0];
	delete[] tablica[1];
	delete[] tablica[2];
	delete[] tablica;

	return 0;
}