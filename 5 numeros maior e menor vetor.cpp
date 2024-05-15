#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int num[5];
	int maior, menor;
	cout << "Digite o número:";
	cin >> num[0];
	maior = num[0];
	menor = num[0];
	for(int i = 1; i < 5; i++) {
     cout << "Digite o número:";
     cin >> num[i];
      if (num[i] > maior) {
      	maior = num[i];
	  }
	  else if (num[i] < menor) {
	  	menor = num[i];
	  }
    }
	   
	   cout << "MAIOR: " << maior << endl;
	   cout << "MENOR: " << menor << endl; 
return 0;	 
} 
