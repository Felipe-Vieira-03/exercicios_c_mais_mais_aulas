#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "portuguese");
	int resp;
	float saldo=0, deposito=0, retirada=0;
do{	
	cout<<"=======OPERAÇÕES POSSÍVEIS======="<<endl; //endl pula linha
	cout<<"1 - Deposito"<<endl;
	cout<<"2- Retirada"<<endl;
	cout<<"3 - Ver Saldo"<<endl;
	cout<<"4 - Sair"<<endl;
	cout<<"=================="<<endl;
	cout<<"Escolha a opção"<<endl;
	cin>>resp;

	//estrutura escolha/caso
switch(resp){
		case 1:
			cout<<"Indique o valor que você quer depositar: "<<endl;
			cin>>deposito;
			saldo = saldo+deposito;
			cout<<"O valor do seu saldo atualizado é: "<<saldo<<endl;
		break;
		case 2:
			cout<<"Indique o valor que você deseja retirar"<<endl;
			cin>>retirada;
		if(retirada<saldo){		
			saldo=saldo-retirada;
		}else{
			cout<<"Digite um valor menor do que seu saldo atual"<<endl;
		}
			cout<<"O seu saldo atual é: "<<saldo<<endl;
			
		break;
		case 3:
			cout<<"O seu saldo é de: "<<saldo<<endl;
		break;
		case 4:
			cout<<"Programa finalizado, Obrigado por utilizar nosso banco!"<<endl;
	
		break;	
		default:
		cout<<"[ERRO] Operação inválida, por favor, escolha uma operação válida"<<endl;
	}
}while (resp!=4);
	return 0;
}
