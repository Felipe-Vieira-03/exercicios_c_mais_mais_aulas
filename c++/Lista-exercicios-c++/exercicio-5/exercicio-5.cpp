#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int resp,valor;
	cout<<"========QUAL O SEU DESTINO?========"<<endl;
	cout<<"1 - Regi�o Norte (APENAS IDA)"<<endl;
	cout<<"2 - Regi�o Nordeste (APENAS IDA)"<<endl;
	cout<<"3 - Regi�o Centro-Oeste (APENAS IDA)"<<endl;
	cout<<"4 - Regi�o Sul (APENAS IDA)"<<endl;
	cout<<"5 - Regi�o Norte (IDA E VOLTA)"<<endl;
	cout<<"6 - Regi�o Nordeste (IDA E VOLTA)"<<endl;
	cout<<"7 - Regi�o Centro-Oeste (IDA E VOLTA)"<<endl;
	cout<<"8 - Regi�o Sul (IDA E VOLTA)"<<endl;
	cin>>resp;
	
switch (resp){

	case 1:
		valor=500;	
	break;
	case 2:
		valor=350;
	break;
	case 3:
		valor=350;
	break;
	case 4:
		valor=300;
	break;
	case 5:
		valor=900;	
	break;
	case 6:
		valor=650;
	break;
	case 7:
		valor=600;
	break;
	case 8:
		valor=550;
	break;		
	}
	cout<<"O valor da sua passagem ficou em: "<<valor<<",00R$!"<<endl;

}

