#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int a[6], b[6], c[6];
	for (int i=0;i<6;i++){
		cout<<"Insira o "<<i+1<<"º número da lista 1"<<endl;
		cin>>a[i];
	}
	for (int i=0;i<6;i++){
		cout<<"Insira o "<<i+1<<"º número da lista 2"<<endl;
		cin>>b[i];
	}
	for (int i=0;i<6;i++){
		c[i]=a[i]+b[i];	
	}
	cout<<"A soma das listas é: "<<endl;
	for (int i=0;i<6;i++){
	cout<<c[i]<<"|"<<endl;
}
}

