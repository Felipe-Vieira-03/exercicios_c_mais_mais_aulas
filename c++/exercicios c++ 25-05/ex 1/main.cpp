#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int num [4], soma, cont;
	for (int i=0; i<=3;i++){
	cout<<"Informe o "<<i+1<<"º valor"<<endl;
	cin>>num[i];
	
	soma= soma + num[i];
}

	cout<<"A soma dos valores é: "<<soma<<endl;
	 
}

