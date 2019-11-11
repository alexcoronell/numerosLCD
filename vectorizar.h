#include<iostream>
using namespace std;

int numero;
int vectorizado[5];
int decenamil, unidadmil, centena, decena, unidad;

int vectorizar(int numero) {
	vectorizado[0] = (numero/10000);
	vectorizado[1] = ((numero%10000)/1000);
	vectorizado[2] = ((numero%1000)/100);
	vectorizado[3] = ((numero%100)/10);
	vectorizado[4] = (numero%10);
	//unidadmil = ((numero%10000)*1000);
	cout << endl;

	decenamil = vectorizado[0];
	unidadmil = vectorizado[1];
	centena = vectorizado[2];
	decena = vectorizado[3];
	unidad = vectorizado[4];

	
	return 0;
}
