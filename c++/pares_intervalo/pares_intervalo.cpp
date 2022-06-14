#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale (LC_ALL,"portuguese ");
	int menor_num, maior_num;
	cout<<"Indique o menor número desse intervalo"<<endl;
	cin>>menor_num;
	cout<<"Indique o maior número desse intervalo"<<endl;
	cin>>maior_num;
		for (int v=menor_num; v<=maior_num;v++){
			 if (v%2 == 0)
				cout<<v<<endl;			
		}
	
return 0;
}
