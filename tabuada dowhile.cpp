#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int numero, tabuada, contador = 1;
	cout << "digite o n�mero:";
	cin >> numero;
	do {
		tabuada = contador * numero;
	cout << tabuada << endl;
	contador++;
	}while (contador <= 10);

	
	
	
	
	
	
	return 0;
}
