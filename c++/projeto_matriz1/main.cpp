#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	int aluno, j=0;
	float notas [3][5];
	
	for (int i=0;i<3;i++){
		cout<<"Informe o RA do aluno "<<i+1<<endl;
		cin>>notas[i][0];
		cout<<"Informe a primeira nota do aluno "<<i+1<<endl;
		cin>>notas[i][1];
		
		cout<<"Informe a segunda nota do aluno "<<i+1<<endl;
		cin>>notas[i][2];
		
		cout<<"Informe a terceira nota do aluno "<<i+1<<endl;
		cin>>notas[i][3];
		
		
		notas[i][4]= (notas[i][1]+notas[i][2]+notas[i][3])/3;
		cout<<"A média do aluno é "<< notas[i][4]<<endl;
		
		if (notas[i][4]>=5){
			cout<<"O aluno está aprovado"<<endl;
			j++;
		}
		
		
		cout<<"========================================"<<endl;
	}
	cout<<"A quantidade de alunos aprovados é: "<<j<<endl;
	return 0;
}
