#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	string trab[5][2];
	
	for(int i=0;i<5;i++){
		cout<<"Informe o c�digo do funcion�rio"<<endl;
		cin>>trab[i][0];
		cout<<"Informe o nome do funcion�rio"<<endl;
		cin>>trab[i][1];
	}
	for (int i=0;i<5;i++){
		cout<<"======================================="<<endl;
		cout<<"Empregado: "<<i+1<<endl;
		cout<<"C�digo: "<<trab[i][0]<<endl;
		cout<<"Nome: "<<trab[i][1]<<endl;
	}
	cout<<"======================================="<<endl;
	return 0;
}
