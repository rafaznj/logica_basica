#include <iostream>
#include <locale.h>
using namespace std;
int main (){
		setlocale(LC_ALL, "");
		int n, cont, f;
	cout << "Digite o número: ";
		cin >> n;
	for (cont = 1 ; cont <= n; cont ++) {
		f = f * cont;	
	}
	cout << "O fatorial é: " << f << endl;
	return 0;
}
