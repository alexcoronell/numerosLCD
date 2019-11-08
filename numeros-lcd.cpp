/*
Objetivo: Crear un programa que imprime números en estilo de una pantalla LCD

Entrada: La entrada contiene varias líneas. Cada línea contiene 2 números separados por coma. El primer
número representa el tamaño de la impresión (entre 1 y 10 – esta variable se llama “size”). El segundo número
es el número a mostrar en la pantalla. Para terminar, se debe digitar 0,0. Esto terminará la aplicación.

Salida: Imprimir los números especificados usando el carácter “-“ para los caracteres horizontales, y “|” para
los verticales. Cada dígito debe ocupar exactamente size+2 columnas y 2*size + 3 filas.
Entre cada impresión debe haber una línea blanca.

*/

#include<iostream>
using namespace std;

int size;
int numero, i;

// Area de funciones
//
int uno () {
	switch (size) {
		1:
			// C = 5  f = 5
			cout << "   | " << endl;
			cout << "   | " << endl;
			cout << "   | " << endl;
			cout << "   | " << endl;
			cout << "   | " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << "     | " << endl; //1
			cout << "     | " << endl; //2
			cout << "     | " << endl; //3
			cout << "     | " << endl; //4
			cout << "     | " << endl; //5
			cout << "     | " << endl; //6
			cout << "     | " << endl; //7
			cout << "     | " << endl; //8
			cout << "     | " << endl; //9
			break;
		4:
			// C = 8  f = 11
			cout << "      | " << endl; //1
			cout << "      | " << endl; //2
			cout << "      | " << endl; //3
			cout << "      | " << endl; //4
			cout << "      | " << endl; //5
			cout << "      | " << endl; //6
			cout << "      | " << endl; //7
			cout << "      | " << endl; //8
			cout << "      | " << endl; //9
			cout << "      | " << endl; //10
			cout << "      | " << endl; //11
			break;
		5:
			// C = 9  f = 13
			cout << "       | " << endl; //1
			cout << "       | " << endl; //2
			cout << "       | " << endl; //3
			cout << "       | " << endl; //4
			cout << "       | " << endl; //5
			cout << "       | " << endl; //6
			cout << "       | " << endl; //7
			cout << "       | " << endl; //8
			cout << "       | " << endl; //9
			cout << "       | " << endl; //10
			cout << "       | " << endl; //11
			cout << "       | " << endl; //12
			cout << "       | " << endl; //13
			break;
		6:
			// C = 10  f = 15
			cout << "        | " << endl; //1
			cout << "        | " << endl; //2
			cout << "        | " << endl; //3
			cout << "        | " << endl; //4
			cout << "        | " << endl; //5
			cout << "        | " << endl; //6
			cout << "        | " << endl; //7
			cout << "        | " << endl; //8
			cout << "        | " << endl; //9
			cout << "        | " << endl; //10
			cout << "        | " << endl; //11
			cout << "        | " << endl; //12
			cout << "        | " << endl; //13
			cout << "        | " << endl; //14
			cout << "        | " << endl; //15
			break;
		7:
			// C = 11  f = 17
			cout << "         | " << endl; //1
			cout << "         | " << endl; //2
			cout << "         | " << endl; //3
			cout << "         | " << endl; //4
			cout << "         | " << endl; //5
			cout << "         | " << endl; //6
			cout << "         | " << endl; //7
			cout << "         | " << endl; //8
			cout << "         | " << endl; //9
			cout << "         | " << endl; //10
			cout << "         | " << endl; //11
			cout << "         | " << endl; //12
			cout << "         | " << endl; //13
			cout << "         | " << endl; //14
			cout << "         | " << endl; //15
			cout << "         | " << endl; //16
			cout << "         | " << endl; //17
			break;
		8:
			// C = 12  f = 19
			cout << "          | " << endl; //1
			cout << "          | " << endl; //2
			cout << "          | " << endl; //3
			cout << "          | " << endl; //4
			cout << "          | " << endl; //5
			cout << "          | " << endl; //6
			cout << "          | " << endl; //7
			cout << "          | " << endl; //8
			cout << "          | " << endl; //9
			cout << "          | " << endl; //10
			cout << "          | " << endl; //11
			cout << "          | " << endl; //12
			cout << "          | " << endl; //13
			cout << "          | " << endl; //14
			cout << "          | " << endl; //15
			cout << "          | " << endl; //16
			cout << "          | " << endl; //17
			cout << "          | " << endl; //18
			cout << "          | " << endl; //19
			break;
		9:
			// C = 13  f = 21
			cout << "           | " << endl; //1
			cout << "           | " << endl; //2
			cout << "           | " << endl; //3
			cout << "           | " << endl; //4
			cout << "           | " << endl; //5
			cout << "           | " << endl; //6
			cout << "           | " << endl; //7
			cout << "           | " << endl; //8
			cout << "           | " << endl; //9
			cout << "           | " << endl; //10
			cout << "           | " << endl; //11
			cout << "           | " << endl; //12
			cout << "           | " << endl; //13
			cout << "           | " << endl; //14
			cout << "           | " << endl; //15
			cout << "           | " << endl; //16
			cout << "           | " << endl; //17
			cout << "           | " << endl; //18
			cout << "           | " << endl; //19
			cout << "           | " << endl; //20
			cout << "           | " << endl; //21
			break;
		10:
			// C = 14  f = 23
			cout << "            | " << endl; //1
			cout << "            | " << endl; //2
			cout << "            | " << endl; //3
			cout << "            | " << endl; //4
			cout << "            | " << endl; //5
			cout << "            | " << endl; //6
			cout << "            | " << endl; //7
			cout << "            | " << endl; //8
			cout << "            | " << endl; //9
			cout << "            | " << endl; //10
			cout << "            | " << endl; //11
			cout << "            | " << endl; //12
			cout << "            | " << endl; //13
			cout << "            | " << endl; //14
			cout << "            | " << endl; //15
			cout << "            | " << endl; //16
			cout << "            | " << endl; //17
			cout << "            | " << endl; //18
			cout << "            | " << endl; //19
			cout << "            | " << endl; //20
			cout << "            | " << endl; //21
			break;		
	}
	return 0;
}

int dos () {
	switch (size) {
		1:
			// C = 5  f = 5
			cout << "  -  " << endl;
			cout << "   | " << endl;
			cout << "  -  " << endl;
			cout << " |   " << endl;
			cout << "  -  " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << "  --  " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "  --  " << endl;
			cout << " |    " << endl;
			cout << " |    " << endl;
			cout << "  --  " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << "  ---  " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "  ---  " << endl; 
			cout << " |     " << endl; 
			cout << " |     " << endl; 
			cout << " |     " << endl; 
			cout << "  ---  " << endl; 
			break;
		4:
			// C = 8  f = 11
			cout << "  ----  " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl; 
			cout << "  ----  " << endl; 
			cout << " |      " << endl; 
			cout << " |      " << endl; 
			cout << " |      " << endl; 
			cout << " |      " << endl; 
			cout << "  ----  " << endl; 
			break;
		5:
			// C = 9  f = 13
			cout << "  -----  " << endl;
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "  -----  " << endl;
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << "  -----  " << endl;
			break;
		6:
			// C = 10  f = 15
			cout << "  ------  " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "  ------  " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << "  ------  " << endl; 
			break;
		7:
			// C = 11  f = 17
			cout << "  -------  " << endl; 
			cout << "         | " << endl; //2
			cout << "         | " << endl; //3
			cout << "         | " << endl; //4
			cout << "         | " << endl; //5
			cout << "         | " << endl; //6
			cout << "         | " << endl; //7
			cout << "         | " << endl; //8
			cout << "  -------  " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << "  -------  " << endl; 
			break;
		8:
			// C = 12  f = 19
			cout << "  --------  " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "  --------  " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << "  --------  " << endl; 
			break;
		9:
			// C = 13  f = 21
			cout << "  ---------  " << endl; 
			cout << "           | " << endl; //2
			cout << "           | " << endl; //3
			cout << "           | " << endl; //4
			cout << "           | " << endl; //5
			cout << "           | " << endl; //6
			cout << "           | " << endl; //7
			cout << "           | " << endl; //8
			cout << "           | " << endl; //9
			cout << "           | " << endl; //10
			cout << "  ---------  " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << "  ---------  " << endl; 
			break;
		10:
			// C = 14  f = 23
			cout << "  ----------  " << endl; 
			cout << "            | " << endl; //2
			cout << "            | " << endl; //3
			cout << "            | " << endl; //4
			cout << "            | " << endl; //5
			cout << "            | " << endl; //6
			cout << "            | " << endl; //7
			cout << "            | " << endl; //8
			cout << "            | " << endl; //9
			cout << "            | " << endl; //10
			cout << "  ----------  " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << "  ----------  " << endl; 
			break;		
	}
		return 0;
}

int tres () {
		switch (size) {
		1:
			// C = 5  f = 5
			cout << "  -  " << endl;
			cout << "   | " << endl;
			cout << "  -  " << endl;
			cout << "   | " << endl;
			cout << "  -  " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << "  --  " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "  --  " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "  --  " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << "  ---  " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "  ---  " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "  ---  " << endl; 
			break;
		4:
			// C = 8  f = 11
			cout << "  ----  " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl; 
			cout << "  ----  " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl; 
			cout << "  ----  " << endl; 
			break;
		5:
			// C = 9  f = 13
			cout << "  -----  " << endl;
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "  -----  " << endl;
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "  -----  " << endl;
			break;
		6:
			// C = 10  f = 15
			cout << "  ------  " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "  ------  " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "  ------  " << endl; 
			break;
		7:
			// C = 11  f = 17
			cout << "  -------  " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "  -------  " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "  -------  " << endl; 
			break;
		8:
			// C = 12  f = 19
			cout << "  --------  " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "  --------  " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "  --------  " << endl; 
			break;
		9:
			// C = 13  f = 21
			cout << "  ---------  " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl;
			cout << "           | " << endl;
			cout << "           | " << endl; 
			cout << "  ---------  " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl;
			cout << "           | " << endl;
			cout << "           | " << endl; 
			cout << "  ---------  " << endl; 
			break;
		10:
			// C = 14  f = 23
			cout << "  ----------  " << endl; 
			cout << "            | " << endl;
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "  ----------  " << endl; 
			cout << "            | " << endl;
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "  ----------  " << endl; 
			break;		
	}
	return 0;
}

int cuatro() {
	switch (size) {
		1:
			// C = 5  f = 5
			cout << " | | " << endl;
			cout << " | | " << endl;
			cout << "  -  " << endl;
			cout << "   | " << endl;
			cout << "   | " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << "  --  " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << "  ---  " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			break;
		4:
			// C = 8  f = 11
			cout << " |    | " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl; 
			cout << "  ----  " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl; 
			cout << "      | " << endl; 
			break;
		5:
			// C = 9  f = 13
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << "  -----  " << endl;
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			break;
		6:
			// C = 10  f = 15
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << "  ------  " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			break;
		7:
			// C = 11  f = 17
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << "  -------  " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			break;
		8:
			// C = 12  f = 19
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << "  --------  " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			break;
		9:
			// C = 13  f = 21
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl;
			cout << " |         | " << endl;
			cout << " |         | " << endl; 
			cout << "  ---------  " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl;
			cout << "           | " << endl;
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			break;
		10:
			// C = 14  f = 23
			cout << " |          | " << endl;
			cout << " |          | " << endl;
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << "  ----------  " << endl; 
			cout << "            | " << endl;
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl;
			break;		
	}
	return 0;
}

int cinco() {
	switch (size) {
		1:
			// C = 5  f = 5
			cout << "  -  " << endl;
			cout << " |   " << endl;
			cout << "  -  " << endl;
			cout << "   | " << endl;
			cout << "  -  " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << "  --  " << endl;
			cout << " |    " << endl;
			cout << " |    " << endl;
			cout << "  --  " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "  --  " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << "  ---  " << endl; 
			cout << " |     " << endl; 
			cout << " |     " << endl; 
			cout << " |     " << endl; 
			cout << "  ---  " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "  ---  " << endl; 
			break;
		4:
			// C = 8  f = 11
			cout << "  ----  " << endl; 
			cout << " |      " << endl; 
			cout << " |      " << endl; 
			cout << " |      " << endl; 
			cout << " |      " << endl; 
			cout << "  ----  " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl; 
			cout << "  ----  " << endl; 
			break;
		5:
			// C = 9  f = 13
			cout << "  -----  " << endl;
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << "  -----  " << endl;
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "  -----  " << endl;
			break;
		6:
			// C = 10  f = 15
			cout << "  ------  " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << "  ------  " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "  ------  " << endl; 
			break;
		7:
			// C = 11  f = 17
			cout << "  -------  " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << "  -------  " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "  -------  " << endl; 
			break;
		8:
			// C = 12  f = 19
			cout << "  --------  " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << "  --------  " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "  --------  " << endl; 
			break;
		9:
			// C = 13  f = 21
			cout << "  ---------  " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl;
			cout << " |           " << endl;
			cout << " |           " << endl; 
			cout << "  ---------  " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl;
			cout << "           | " << endl;
			cout << "           | " << endl; 
			cout << "  ---------  " << endl; 
			break;
		10:
			// C = 14  f = 23
			cout << "  ----------  " << endl; 
			cout << " |            " << endl;
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << "  ----------  " << endl; 
			cout << "            | " << endl;
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "  ----------  " << endl; 
			break;		
	}
	return 0;
}

int seis() {
		switch (size) {
		1:
			// C = 5  f = 5
			cout << "  -  " << endl;
			cout << " |   " << endl;
			cout << "  -  " << endl;
			cout << " | | " << endl;
			cout << "  -  " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << "  --  " << endl;
			cout << " |    " << endl;
			cout << " |    " << endl;
			cout << "  --  " << endl;
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << "  --  " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << "  ---  " << endl; 
			cout << " |     " << endl; 
			cout << " |     " << endl; 
			cout << " |     " << endl; 
			cout << "  ---  " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << "  ---  " << endl; 
			break;
		4:
			// C = 8  f = 11
			cout << "  ----  " << endl; 
			cout << " |      " << endl; 
			cout << " |      " << endl; 
			cout << " |      " << endl; 
			cout << " |      " << endl; 
			cout << "  ----  " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl;
			cout << " |    | " << endl;
			cout << " |    | " << endl; 
			cout << "  ----  " << endl; 
			break;
		5:
			// C = 9  f = 13
			cout << "  -----  " << endl;
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << " |       " << endl; 
			cout << "  -----  " << endl;
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << "  -----  " << endl;
			break;
		6:
			// C = 10  f = 15
			cout << "  ------  " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << " |        " << endl; 
			cout << "  ------  " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << "  ------  " << endl; 
			break;
		7:
			// C = 11  f = 17
			cout << "  -------  " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << " |         " << endl; 
			cout << "  -------  " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << "  -------  " << endl; 
			break;
		8:
			// C = 12  f = 19
			cout << "  --------  " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << " |          " << endl; 
			cout << "  --------  " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << "  --------  " << endl; 
			break;
		9:
			// C = 13  f = 21
			cout << "  ---------  " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl; 
			cout << " |           " << endl;
			cout << " |           " << endl;
			cout << " |           " << endl; 
			cout << "  ---------  " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl;
			cout << " |         | " << endl;
			cout << " |         | " << endl; 
			cout << "  ---------  " << endl; 
			break;
		10:
			// C = 14  f = 23
			cout << "  ----------  " << endl; 
			cout << " |            " << endl;
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << " |            " << endl; 
			cout << "  ----------  " << endl; 
			cout << " |          | " << endl;
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << "  ----------  " << endl; 
			break;		
	}
	return 0;
}

int siete() {
		switch (size) {
		1:
			// C = 5  f = 5
			cout << " --  " << endl;
			cout << "   | " << endl;
			cout << "   | " << endl;
			cout << "   | " << endl;
			cout << "   | " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << " ---  " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << " ----  " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			break;
		4:
			// C = 8  f = 11
			cout << " -----  " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl; 
			cout << "      | " << endl; 
			break;
		5:
			// C = 9  f = 13
			cout << " ------  " << endl;
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			break;
		6:
			// C = 10  f = 15
			cout << " -------  " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			break;
		7:
			// C = 11  f = 17
			cout << " --------  " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			break;
		8:
			// C = 12  f = 19
			cout << " ---------  " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			break;
		9:
			// C = 13  f = 21
			cout << " ----------  " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl;
			cout << "           | " << endl;
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl;
			cout << "           | " << endl;
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			break;
		10:
			// C = 14  f = 23
			cout << " -----------  " << endl; 
			cout << "            | " << endl;
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl;
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			break;		
	}
	return 0;
}

int ocho() {
	switch (size) {
		1:
			// C = 5  f = 5
			cout << "  -  " << endl;
			cout << " | | " << endl;
			cout << "  -  " << endl;
			cout << " | | " << endl;
			cout << "  -  " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << "  --  " << endl;
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << "  --  " << endl;
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << "  --  " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << "  ---  " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << "  ---  " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << "  ---  " << endl; 
			break;
		4:
			// C = 8  f = 11
			cout << "  ----  " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl;
			cout << " |    | " << endl;
			cout << " |    | " << endl; 
			cout << "  ----  " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl;
			cout << " |    | " << endl;
			cout << " |    | " << endl; 
			cout << "  ----  " << endl; 
			break;
		5:
			// C = 9  f = 13
			cout << "  -----  " << endl;
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << "  -----  " << endl;
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << "  -----  " << endl;
			break;
		6:
			// C = 10  f = 15
			cout << "  ------  " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << "  ------  " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << "  ------  " << endl; 
			break;
		7:
			// C = 11  f = 17
			cout << "  -------  " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << "  -------  " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << "  -------  " << endl; 
			break;
		8:
			// C = 12  f = 19
			cout << "  --------  " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << "  --------  " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << "  --------  " << endl; 
			break;
		9:
			// C = 13  f = 21
			cout << "  ---------  " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl;
			cout << " |         | " << endl;
			cout << " |         | " << endl; 
			cout << "  ---------  " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl;
			cout << " |         | " << endl;
			cout << " |         | " << endl; 
			cout << "  ---------  " << endl; 
			break;
		10:
			// C = 14  f = 23
			cout << "  ----------  " << endl; 
			cout << " |          | " << endl;
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << "  ----------  " << endl; 
			cout << " |          | " << endl;
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << "  ----------  " << endl; 
			break;		
	}
	return 0;
}

int nueve() {
	switch (size) {
		1:
			// C = 5  f = 5
			cout << "  -  " << endl;
			cout << " | | " << endl;
			cout << "  -  " << endl;
			cout << "   | " << endl;
			cout << "  -  " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << "  --  " << endl;
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << "  --  " << endl;
			cout << "    | " << endl;
			cout << "    | " << endl;
			cout << "  --  " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << "  ---  " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << "  ---  " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "     | " << endl; 
			cout << "  ---  " << endl; 
			break;
		4:
			// C = 8  f = 11
			cout << "  ----  " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl;
			cout << " |    | " << endl;
			cout << " |    | " << endl; 
			cout << "  ----  " << endl; 
			cout << "      | " << endl; 
			cout << "      | " << endl;
			cout << "      | " << endl;
			cout << "      | " << endl; 
			cout << "  ----  " << endl; 
			break;
		5:
			// C = 9  f = 13
			cout << "  -----  " << endl;
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << "  -----  " << endl;
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "       | " << endl; 
			cout << "  -----  " << endl;
			break;
		6:
			// C = 10  f = 15
			cout << "  ------  " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << "  ------  " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "        | " << endl; 
			cout << "  ------  " << endl; 
			break;
		7:
			// C = 11  f = 17
			cout << "  -------  " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << "  -------  " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "         | " << endl; 
			cout << "  -------  " << endl; 
			break;
		8:
			// C = 12  f = 19
			cout << "  --------  " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << "  --------  " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "          | " << endl; 
			cout << "  --------  " << endl; 
			break;
		9:
			// C = 13  f = 21
			cout << "  ---------  " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl;
			cout << " |         | " << endl;
			cout << " |         | " << endl; 
			cout << "  ---------  " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl; 
			cout << "           | " << endl;
			cout << "           | " << endl;
			cout << "           | " << endl; 
			cout << "  ---------  " << endl; 
			break;
		10:
			// C = 14  f = 23
			cout << "  ----------  " << endl; 
			cout << " |          | " << endl;
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << "  ----------  " << endl; 
			cout << "            | " << endl;
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "            | " << endl; 
			cout << "  ----------  " << endl; 
			break;		
	}
	return 0;
}

int cero() {
	1:
			// C = 5  f = 5
			cout << "  -  " << endl;
			cout << " | | " << endl;
			cout << " | | " << endl;
			cout << " | | " << endl;
			cout << "  -  " << endl;
			break;
		2:
			// C = 6  f = 7
			cout << "  --  " << endl;
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << " |  | " << endl;
			cout << "  --  " << endl;
			break;
		3:
			// C = 7  f = 9
			cout << "  ---  " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << " |   | " << endl; 
			cout << "  ---  " << endl; 
			break;
		4:
			// C = 8  f = 11
			cout << "  ----  " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl;
			cout << " |    | " << endl;
			cout << " |    | " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl; 
			cout << " |    | " << endl;
			cout << " |    | " << endl;
			cout << " |    | " << endl; 
			cout << "  ----  " << endl; 
			break;
		5:
			// C = 9  f = 13
			cout << "  -----  " << endl;
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << " |     | " << endl; 
			cout << "  -----  " << endl;
			break;
		6:
			// C = 10  f = 15
			cout << "  ------  " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << " |      | " << endl; 
			cout << "  ------  " << endl; 
			break;
		7:
			// C = 11  f = 17
			cout << "  -------  " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << " |       | " << endl; 
			cout << "  -------  " << endl; 
			break;
		8:
			// C = 12  f = 19
			cout << "  --------  " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << " |        | " << endl; 
			cout << "  --------  " << endl; 
			break;
		9:
			// C = 13  f = 21
			cout << "  ---------  " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl;
			cout << " |         | " << endl;
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl; 
			cout << " |         | " << endl;
			cout << " |         | " << endl;
			cout << " |         | " << endl; 
			cout << "  ---------  " << endl; 
			break;
		10:
			// C = 14  f = 23
			cout << "  ----------  " << endl; 
			cout << " |          | " << endl;
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl;
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << " |          | " << endl; 
			cout << "  ----------  " << endl; 
			break;		
	}
	return 0;
}


int main() {
	cout << "*********************************************************************" << endl;
	cout << " Programa para generar en pantalla numeros al estilo de pantalla LCD" << endl;
	cout << "*********************************************************************" << endl << endl;
	uno();
	cout << endl;
	dos();
	cout << endl;
	tres();
	cout << endl;
	cuatro();
	cout << endl;
	cinco();
	cout << endl;
	seis();
	cout << endl;
	siete();
	cout << endl;
	ocho();
	cout << endl;
	nueve();
	cout << endl;
	cero();
	cout << endl;
	
	return 0;
}


/*

|
|
|*/

