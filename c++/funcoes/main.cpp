#include <iostream>
#include <locale>
#include <math.h>

using namespace std;
//inicio da area de fun��es
//criando a fun��o fatorial
void fatorial(int n){
	int fat=1;
	for (int i=1;i<=n;i++){
	fat = fat *i;
	}
	cout<<"O fatorial de "<<n<<" �: "<<fat<<endl;
	
}

//fun��o que retorna um unico valor
float raiz(int n){
	return sqrt(n);
}

bool validaUsuario(string login, string senha){
	string user = "admin", password="admin123";
	
	if (login == user && senha==password){
		return true;
	}else{
		return false;
	}
}
//fim das fun��es

int main() {
	setlocale(LC_ALL,"portuguese");
	int n=0, fat = 1;
	float r;
	string login,senha;
	
	cout<<"Informe o nome do usuario"<<endl;
	cin>>login;
	cout<<"Informe a senha do usuario"<<endl;
	cin>>senha;
	if (validaUsuario(login,senha) == true){

		
	cout<<"Informe o n�mero"<<endl;
	cin>>n;
	fatorial(n);
	
	cout<<"A raiz quadrada de "<<n<<" � "<<raiz(n);
	//guardar valor da fun��o em uma variavel
	r=raiz(n);
}else{
	cout<<"Usuario ou Senha invalidos!!!!"<<endl;
}

	return 0;
}
