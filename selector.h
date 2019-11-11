#include<iostream>
using namespace std;
int size;

int selector(int mostrar) {
	switch (mostrar) {
		case 0:
			cero(size);
			break;
		case 1:
			uno(size);
			break;
		case 2:
			dos(size);
			break;
		case 3:
			tres(size);
			break;
		case 4:
			cuatro(size);
			break;
		case 5:
			cinco(size);
			break;
		case 6:
			seis(size);
			break;
		case 7:
			siete(size);
			break;
		case 8:
			ocho(size);
			break;
		case 9:
			nueve(size);
			break;
		default:
			break;
	}
	return 0;
}
