#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	for (int cont = 0; cont<=10;cont++){
		cout<<cont<<endl;
	}
}
