#include "iostream"
using namespace std;

int main(){
	
system ("color f6");

int contar = 0;
float x, mas, suma = 0;

	cout<<"Ingrese numeros para sacarles el promedio para terminar escriba 0:\n"<<endl;
	
	do {
	cout<<("x= ");
	cin>> x;
	suma = suma + x;
	contar++;}


	while (x != 0);
	mas = suma/(contar - 1);
	cout<<"\nLa suma es: "<<mas<<endl;
	
system("pause");
}
