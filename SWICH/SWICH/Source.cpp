#include <iostream>
#include "Header.h"
using namespace std;


int main()
{
	pobierz_zadanie();

		switch (zadanie)
	{
		case(1):
			cout << "dodawanie";
			break;
		case(2):
			cout << "odejmowanie";
			break;
		case(3) :
			cout << "mnozenie";
			break;
		case(4) :
			cout << "transponowanie";
			break;

		default:
			cout << "podano nieprawid³owy numer zadania\n Koncze program";
			break;
	}
		return 0;
}






