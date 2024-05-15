#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale (LC_ALL, "");
    int tamanholado;
    cout << "Digite o tamanho do lado do quadrado 1 - 20: ";
    cin >> tamanholado;
if (tamanholado >= 1 && tamanholado <= 20 )
      for (int i = 1; i <= tamanholado; i++) { // este é feito de cada vez
        for (int j = 1; j <= tamanholado; j++) { // este é feito totalmente
            cout << "* ";
        }
        cout << endl;
    }
else
cout << "O tamanho do lado do quadrado não corresponde de 1 - 20";
    return 0;
}
