#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "");
	int n1,n2;
	char menu;
	cout << "CALCULADORA" << endl << endl << "+ : SOMA" << endl << "- : SUBTRA��O" << endl  << "/ : DIVIS�O" << endl << "* : MULTIPLICA��O" << endl << endl;
	cout << "DIGITE OS N�MEROS: " << endl;
	cin >> n1 >> n2;
	cout << "" << endl;
	cout << "ESCOLHA A OPERA��O: " << endl;
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
		default : cout <<"OP��O INV�LIDA.";
	}
return 0;
}




