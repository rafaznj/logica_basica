#include <iostream>
#include <locale.h>
using namespace std;
int main (){
		setlocale(LC_ALL, "");
		int n, cont, f;
	cout << "Digite o n�mero: ";
		cin >> n;
	for (cont = 1 ; cont <= n; cont ++) {
		f = f * cont;	
	}
	cout << "O fatorial �: " << f << endl;
	return 0;
}
