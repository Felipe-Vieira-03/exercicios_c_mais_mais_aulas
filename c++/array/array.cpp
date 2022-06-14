#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale(LC_ALL,"portuguese");
	float notas[3],media,cont2=0,media2;
	int cont = 1;
	while (cont<=3){
	cout<<"Notas do aluno "<<cont<<endl;
	cout<<"Informe a primeira nota"<<endl;
	cin>>notas[0];
	cout<<"informe a segunda nota"<<endl;
	cin>>notas[1];
	cout<<"Informe a terceira nota"<<endl;
	cin>>notas[2];
	
	media=(notas[0]+notas[1]+notas[2])/3;
	cout<<"A média é: "<<media<<endl;
	cont++;
	cont2=cont2+media;	
}
	media2=cont2/3;
	cout<<"A média da sala é "<<media2;
}
