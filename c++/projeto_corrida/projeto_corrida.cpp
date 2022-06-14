#include <iostream>
#include <locale>
using namespace std;

//corrida de automoveis
int main(){
	setlocale(LC_ALL, "portuguese");
	int tempo = 0 ,soma = 0, melhortempo=99999, piortempo=0, volta, nvoltas;
	float media = 0;
	cout<<"qual a quantidade de voltas da corrida?"<<endl;
	cin>>nvoltas;
		
	for (int v=1;v<=nvoltas;v++){
			
	cout<<"Informe o tempo da volta "<<v<<endl;
	cin>>tempo;	
	soma = soma+tempo;
	if (tempo<melhortempo){
		melhortempo=tempo;
		volta = v;
	}
	if (tempo>piortempo){
		piortempo=tempo;
	}
}
	media = soma/nvoltas;
	cout<<"O total dos tempos é "<<soma<<endl;
	cout<<"A média dos tempos foi "<<media<<endl;
	cout<<"O melhor tempo foi "<<melhortempo<<endl;
	cout<<"A volta do melhor tempo foi "<<volta<<endl;
	cout<<"O pior tempo foi "<<piortempo<<endl;	
	return 0;
}
