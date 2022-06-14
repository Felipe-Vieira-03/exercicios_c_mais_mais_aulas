#include <iostream>
#include <locale>

using namespace std;	

int main (){
	setlocale (LC_ALL,"portuguese");
	int sequencia [5];
	for (int i =0;i<=4;i++){
	cout<<"Insira o "<<i+1<<"º número"<<endl;
	cin>>sequencia[i];
}
	cout<<"Os valores são: "<<endl;
	
	for(int r=4;r>=0;r--){
	cout<<sequencia[r]<<endl;
}
}

