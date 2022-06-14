#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	string resp="S";
	int n1,n2,n3;
	
	while (resp == "SIM" || resp =="sim" || resp =="S" || resp =="s"  || resp =="Sim"){	
	cout<< "insira o valor do primeiro número"<<endl;
	cin>>n1;
	cout<<"insira o valor do segundo número"<<endl;
	cin>>n2;
	cout<<"insira o valor do terceiro número"<<endl;
	cin>>n3;
	if (n1>=n2+n3 || n2>=n1+n3 || n3 >= n1+n2){
		cout<<"não é possivel formar um triangulo com esses valores"<<endl;
	}else{
	
	if (n1 == n2 and n1 == n3 and n3 == n2){
	cout<<"o triangulo é equilátero"<<endl;
}else{
	if (n1==n2 and n1!= n3 || n1 != n2 and n3==n2) {
		cout<<"o triangulo é isóceles";
	}else{
			if (n1 != n2 && n1 !=n3 && n3 != n2){
	cout<<"o triangulo é escaleno"<<endl;
	}
 }
 }
}
	cout<<"deseja utilziar nossa calculadora de triangulos?"<<endl;
		cin>>(resp);
}
}

