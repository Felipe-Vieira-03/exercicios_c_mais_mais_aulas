#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int v=1000;
	int a[v], b[v], c[v], d[v],e[v],cont=1;
	cout<<"Insira a quantidade de valores que os vetores ir�o ter"<<endl;
	cin>>v;
	for (int i=0;i<v;i++){
		cout<<"Insira o "<<i+1<<"� n�mero do vetor A"<<endl;
		cin>>a[i];
	}
	for (int i=0;i<v;i++){
		cout<<"Insira o "<<i+1<<"� n�mero do vetor B"<<endl;
		cin>>b[i];
	}
	for (int i=0;i<v;i++){
		c[i] = a[i]+b[i];
	}
	for (int i=0;i<v;i++){
		d[i]= a[i]-b[i];
	}
	for (int i=0;i<v;i++){
		e[i]= a[i]*b[i];
	}
	cout<<"A soma das listas �: "<<endl;
	for (int i=0;i<v;i++){
		cout<<"|"<<c[i]<<"|"<<endl;
	}
	cout<<"A subtra��o das listas �: "<<endl;
	for (int i=0;i<v;i++){
	cout<<"|"<<d[i]<<"|"<<endl;
	}
	cout<<"O produto escalar das listas �: "<<endl;
	for (int i=0;i<v;i++){
	cout<<"|"<<e[i]<<"|"<<endl;
	}
	
}
