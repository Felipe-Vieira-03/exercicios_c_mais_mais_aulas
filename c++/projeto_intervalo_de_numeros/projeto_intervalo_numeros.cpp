#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int menor_num, maior_num;
	cout<<"======INTERVALO DE N�MEROS======"<<endl;
	cout<<"Indique o numero que deseja ver o intervalo dos numeros"<<endl;
	cout<<"Indique o menor n�mero desse intervalo"<<endl;
	cin>>menor_num;
	cout<<"Indique o maior n�mero desse intervalo"<<endl;
	cin>>maior_num;
		for (int v=menor_num; v <=maior_num;v++){
			cout<<v<<endl;			
		
	
	
}
	return 0;
}
