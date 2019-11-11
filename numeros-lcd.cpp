/*
Objetivo: Crear un programa que imprime n�meros en estilo de una pantalla LCD

Entrada: La entrada contiene varias l�neas. Cada l�nea contiene 2 n�meros separados por coma. El primer
n�mero representa el tama�o de la impresi�n (entre 1 y 10 � esta variable se llama �size�). El segundo n�mero
es el n�mero a mostrar en la pantalla. Para terminar, se debe digitar 0,0. Esto terminar� la aplicaci�n.

Salida: Imprimir los n�meros especificados usando el car�cter �-� para los caracteres horizontales, y �|� para
los verticales. Cada d�gito debe ocupar exactamente size+2 columnas y 2*size + 3 filas.
Entre cada impresi�n debe haber una l�nea blanca.

*/

#include<iostream>
#include "digitalnumbers.h"
//#include "digitalnumbers2.h"
using namespace std;

int main() {
	cout << "*********************************************************************" << endl;
	cout << " Programa para generar en pantalla numeros al estilo de pantalla LCD" << endl;
	cout << "*********************************************************************" << endl << endl;
	cout << "Digite un numero:" << endl << "del 1 al 10 antes de la coma" << endl; 
	cout << "despues de la coma no debe exceder los 5 digitos: ";
	cin >> size;
	cout << "\r,";
	cin >> numero;
	cout << endl;
	uno(10);
	cout << endl;
	dos(10);
	cout << endl;
	tres(10);
	cout << endl;
	cuatro(10);
	cout << endl;
	cinco(10);
	cout << endl;
	seis(10);
	cout << endl;
	siete (10);
	cout << endl;
	ocho(10);
	cout << endl;
	nueve(10);
	cout << endl;
	cero(10);
	cout << endl;
	
	return 0;
}


/*

|
|
|*/

