#include <iostream>
#include <locale.h>
using namespace std;
int main ()
{
	int n, cont, t;
	cout << "";
		cin >> n;
	for (cont = 0; cont <= 10; cont ++) {
		t = n * cont;
		cout << t << endl;
	}
}
