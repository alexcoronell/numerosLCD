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
#include<conio.h>
#include "digitalnumbers.h"
#include "vectorizar.h"
#include "selector.h"

using namespace std;

int index;

int main() {
	cout << "*********************************************************************" << endl;
	cout << " Programa para generar en pantalla numeros al estilo de pantalla LCD" << endl;
	cout << "*********************************************************************" << endl << endl;
	cout << "Presione cualquier tecla para continuar";
	getch();
	inicio:
	do {
		system ("cls");
		cout << "Introduzca el tama�o con un numero entre 1 y 10 ( 0 pasa Salir del Programa). Presione ENTER: ";
		cin >> size;
		if (size == 0) {
			system ("cls");
			cout << "Introduzca 0 para confirmar salida del programa: " << size << ",";
			cin >> numero;
			if (numero == 0) {
				cout << "Saliendo del programa" << endl << endl;
				exit(-1);
			} else {
				cout << "\nEl programa iniciar� nuevamente";
				goto inicio;
			}
		}
	} while (size > 10 || size < 1 );
			
	do {
		system ("cls");
		cout << "Introduzca el numero que aparecer� en pantalla y presione ENTER," << endl << "debe ser entre 10000 y 99999: " << size << ",";
		cin >> numero;
	} while (numero > 99999 || numero < 10000 );
	
	system ("cls");

//cout << vectorizado[0] << endl;
vectorizar(numero);

selector(vectorizado[0]);
selector(vectorizado[1]);
selector(vectorizado[2]);
selector(vectorizado[3]);
selector(vectorizado[4]);

cout << endl;
for (index = 1; index <= 60; index ++ ) {
	cout << "-";	
}
cout << endl << "Presione cualquier tecla para continuar";
getch();
goto inicio;
	return 0;
}
