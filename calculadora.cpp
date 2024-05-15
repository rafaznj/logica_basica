#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "");
	int n1,n2;
	char menu;
	cout << "CALCULADORA" << endl << endl << "+ : SOMA" << endl << "- : SUBTRAÇÃO" << endl  << "/ : DIVISÃO" << endl << "* : MULTIPLICAÇÃO" << endl << endl;
	cout << "DIGITE OS NÚMEROS: " << endl;
	cin >> n1 >> n2;
	cout << "" << endl;
	cout << "ESCOLHA A OPERAÇÃO: " << endl;
	cin >> menu;
	cout << "" << endl;
	switch (menu)
	{
		case '+' : cout << "RESULTADO: " << n1 + n2  ; break;
		case '*' : cout << "RESULTADO: " << n1 * n2  ; break;
		case '/' : cout << "RESULTADO: " << n1 / n2  ; break;
		case '-' : cout << "RESULTADO: ";
		if (n1 > n2)
		cout << n1 - n2;
		else if (n2 > n1)
		 cout << n2 - n1;
		 break;
		default : cout <<"OPÇÃO INVÁLIDA.";
	}
return 0;
}




