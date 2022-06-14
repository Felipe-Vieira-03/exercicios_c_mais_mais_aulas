#include <iostream>
#include <locale>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "portuguese");
	int op,n1,n2,resultado;
do{	
	cout<<"=======MENU======="<<endl; //endl pula linha
	cout<<"1 - soma"<<endl;
	cout<<"2- subtração"<<endl;
	cout<<"3 - multiplicação"<<endl;
	cout<<"4 - divisão"<<endl;
	cout<<"5 - sair"<<endl;
	cout<<"=================="<<endl;
	cout<<"Escolha a opção"<<endl;
	cin>>op;

	//estrutura escolha/caso
switch(op){
		case 1:
			cout<<"Digite o primeiro número"<<endl;
			cin>>n1;
			cout<<"Digite o segundo número"<<endl;
			cin>>n2;
			resultado = n1+n2;
			cout<<"o resultado é "<<resultado<<"!"<<endl;
		break;
		case 2:
			cout<<"Digite o primeiro número"<<endl;
			cin>>n1;
			cout<<"Digite o segundo número"<<endl;
			cin>>n2;
			resultado = n1-n2;
			cout<<"o resultado é "<<resultado<<"!"<<endl;
		break;
		case 3:
			cout<<"Digite o primeiro número"<<endl;
			cin>>n1;
			cout<<"Digite o segundo número"<<endl;
			cin>>n2;
			resultado= n1*n2;
			cout<<"o resultado é "<<resultado<<"!"<<endl;
		break;
		case 4:
			cout<<"Digite o primeiro número"<<endl;
			cin>>n1;
			cout<<"Digite o segundo número"<<endl;
			cin>>n2;
			resultado=n1/n2;
			cout<<"o resultado é "<<resultado<<"!"<<endl;
		break;	
		case 5:
			cout<<"Fim do programa"<<endl;
		break;
		default:
		cout<<"Opção inválida, por favor, escolha uma opção válida"<<endl;
	}
}while (op!=5);
	return 0;
}
