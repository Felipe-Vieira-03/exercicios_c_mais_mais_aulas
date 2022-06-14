#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	int v[8] = {70,80,90,100,110,120,130,140}, num;
	bool exist = false;
	
	cout<<"Pesquise um número"<<endl;
	cin>>num;
	
	for (int i=0;i<=8;i++){
		if (num == v[i]){
			cout<<"O número pesquisado está incluso!"<<endl;
			exist=true;
		}	
	}
		if (!exist){
		cout<<"o número não está incluso"<<endl;
		}
}


