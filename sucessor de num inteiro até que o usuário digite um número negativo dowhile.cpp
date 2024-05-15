#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int num;
	do{
		cout << "Digite o número: " << endl;
		cin >> num;
		if (num > 0)
		    cout << "O sucessor é: " << num + 1 << endl;
		else 
		  cout << "Número negativo.";    
	}
	while (num > 0);
	return 0;
}

