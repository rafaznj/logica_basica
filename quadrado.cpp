#include <iostream>
#include <locale.h>
using namespace std;

int main() {
int lado;
cout <<"";
cin >> lado;
for (int j = 1; j <= lado; j++){
	for (int i = 1; i <= lado; i ++)
	cout << "*";
	cout << "\n";
}
return 0;
}
