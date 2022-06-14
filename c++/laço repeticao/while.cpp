#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int cont= 0;
	while (cont<=10){
		cout<<cont<<endl;
		cont++;
	}
}

