#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int cont = 0;
	do{
		cout<<cont<<endl;
		cont++;	
	} while (cont<=10);
}

