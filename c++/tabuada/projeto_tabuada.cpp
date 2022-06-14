#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int n1;
	float res;
	cout<<"======TABUADA======"<<endl;
	cout<<"Indique o numero que deseja ver a tabuada"<<endl;
	cin>>n1;
		for (int v=1; v <=10;v++){
			res = n1*v;
			cout<<n1<<"x"<<v<<" :"<<res<<endl;			
		}
	
	
	
	return 0;
}
