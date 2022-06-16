#include <iostream>
#include <locale>

using namespace std;
int soma(int n1,int n2){
	int soma;
	soma = n1+n2;
	return soma;
}
int subtracao(int n1,int n2){
	int subtracao;
	subtracao = n1-n2;
	return subtracao;
}
int multiplicacao(int n1,int n2){
	float multiplicacao;
	multiplicacao = n1*n2;
	return multiplicacao;
}
float divisao(int n1,int n2){
	float divisao;
	divisao = n1/n2;
	return divisao;
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2,op;
	float resultado;
	cout<<"Insira o primeiro número "<<endl;
	cin>>n1;
	cout<<"Insira o segundo número "<<endl;
	cin>>n2;
	cout<<"Insira qual das opções você quer fazer"<<endl;
	cout<<"======================================"<<endl;
	cout<<"1 - Adição"<<endl;
	cout<<"2 - Subtração"<<endl;
	cout<<"3 - Multiplicação"<<endl;
	cout<<"4 - Divisão"<<endl;
	cin>>op;
	switch (op){
		case 1:
			resultado = soma(n1,n2);			
			cout<<"O resultado da Adição é "<<resultado<<endl;
		break;	
		case 2:
			resultado = subtracao(n1,n2);
			cout<<"O resultado da Subtração é "<<resultado<<endl;
		break;	
		case 3:
			resultado = multiplicacao(n1,n2);
			cout<<"O resultado da Multiplicação é "<<resultado<<endl;
		break;	
		case 4:
			resultado = divisao (n1,n2);
			cout<<"O resultado da Divisão é "<<resultado<<endl;
		break;
		
 }
}
