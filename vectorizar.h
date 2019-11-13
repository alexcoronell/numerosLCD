#include<iostream>
using namespace std;

int numero;
int vectorizado[5];

int vectorizar(int numero) {
	vectorizado[0] = (numero/10000);
	vectorizado[1] = ((numero%10000)/1000);
	vectorizado[2] = ((numero%1000)/100);
	vectorizado[3] = ((numero%100)/10);
	vectorizado[4] = (numero%10);
	cout << endl;

	return 0;
}
