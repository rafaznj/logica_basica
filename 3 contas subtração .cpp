#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	setlocale (LC_ALL, "");
	int n1, n2, resul;
	for (int cont = 1; cont <= 3; cont ++){
		cout << "Digite os números:";
		cin >> n1 >> n2;
		if (n1 > n2)
		resul = n1 - n2;
		else if (n2 > n1)
		resul = n2 - n1;
		cout << "=" << resul << endl;
	}
	return 0;
}
