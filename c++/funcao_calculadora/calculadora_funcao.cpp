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
	cout<<"Insira o primeiro n�mero "<<endl;
	cin>>n1;
	cout<<"Insira o segundo n�mero "<<endl;
	cin>>n2;
	cout<<"Insira qual das op��es voc� quer fazer"<<endl;
	cout<<"======================================"<<endl;
	cout<<"1 - Adi��o"<<endl;
	cout<<"2 - Subtra��o"<<endl;
	cout<<"3 - Multiplica��o"<<endl;
	cout<<"4 - Divis�o"<<endl;
	cin>>op;
	switch (op){
		case 1:
			resultado = soma(n1,n2);			
			cout<<"O resultado da Adi��o � "<<resultado<<endl;
		break;	
		case 2:
			resultado = subtracao(n1,n2);
			cout<<"O resultado da Subtra��o � "<<resultado<<endl;
		break;	
		case 3:
			resultado = multiplicacao(n1,n2);
			cout<<"O resultado da Multiplica��o � "<<resultado<<endl;
		break;	
		case 4:
			resultado = divisao (n1,n2);
			cout<<"O resultado da Divis�o � "<<resultado<<endl;
		break;
		
 }
}
