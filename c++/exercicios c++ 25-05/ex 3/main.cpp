#include <iostream>
#include <locale>

using namespace std;

int main (){
	setlocale(LC_ALL, "portuguese");
	int v[8] = {70,80,90,100,110,120,130,140}, num;
	bool exist = false;
	
	cout<<"Pesquise um n�mero"<<endl;
	cin>>num;
	
	for (int i=0;i<=8;i++){
		if (num == v[i]){
			cout<<"O n�mero pesquisado est� incluso!"<<endl;
			exist=true;
		}	
	}
		if (!exist){
		cout<<"o n�mero n�o est� incluso"<<endl;
		}
}


