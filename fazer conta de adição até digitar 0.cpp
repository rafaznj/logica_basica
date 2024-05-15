#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int num1, num2, t = 1;
	do{
		cout << "Digite o primeiro número: " << endl;
		cin >> num1;
		cout << "Digite o segundo número: " << endl;
		cin >> num2;
		cout << "A soma de " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		cout << "Quer continuar? \n1 - Sim | 2 - Não" << endl;
		cin >> t;
	 }
	while (t == 1);
	return 0;
}

