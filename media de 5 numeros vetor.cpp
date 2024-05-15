#include <iostream>
#include <locale.h>
using namespace std;
int main (){
	setlocale (LC_ALL, "");
	int num[5];
	int soma, media = 0;
	for (int i = 0; i < 5; i++){
	cout << "DIGITE UM NÚMERO:";
	cin >> num[i];
	soma = soma + num [i];
	}
	media = soma / 5;
	cout << media;
 	return 0;
}
