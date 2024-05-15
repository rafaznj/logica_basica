#include <iostream>
#include <locale.h>
using namespace std;
int main () {
	int lista, n, cont, menor, maior; 
	cout << "Digite o tamanho da lista: ";
	cin >> lista;
	maior = 0;
	menor = 100;
	for (int i = 1; i <= lista; i ++) {
        int n;
        cout << "Digite o numero " << i << ": ";
        cin >> n;
        if (n < menor) {
            menor = n;
        }
        else if (n > maior) {
		maior = n;
		}
        
    }
    cout << "menor: " << menor;
    cout << "maior: " << maior;
return 0;
}
