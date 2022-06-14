#include <iostream>
#include <locale>
using namespace std;
//texto explicativo
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	string nome;
	int idade;
	string resp; 
	bool status;
	//mostrar na tela e ler variavel
	cout<<"Informe seu nome \n";
	cin>>nome;
	
	cout<<"Informe a sua idade \n";
	cin>>idade;
	//concatenação
	cout<<"olá "<< nome<<" a sua idade é "<<idade<<"\n";
	
	//estruturas condicionais
	if (idade>=18){
		cout<<"voce é maior de idade \n";
	}else{
		cout<<"voce é menor de idade \n";
	}
	cout<<"voce gostaria de receber as novidades por email?\n";
	cin>>resp;
	 if (resp =="s")||(resp =="S"){
	 	cout<<"iremos te notificar por email ou whatsapp \n";
	 }else{
	 	cout<<"voce não sera notificado pela nossa empresa";
	 }
	
	
	return 0;
	
}
