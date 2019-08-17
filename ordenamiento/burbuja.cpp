#include<iostream>

using namespace std;

int main(){
	int TAM;
	int auxiliar;
	cout<<"Cuantos numeros vas a introducir?\n";
	cin>>TAM;
	int arreglo[TAM];
	
	for(int i = 0 ; i < TAM ; i++){
		cout<<"Introduce el numero "<<i+1<<endl;
		cin>>arreglo[i];
	} 
	
	//ordenar ascendentemente nuestro arreglo
	for (int i=0; i<TAM; i++){
		for (int j=0 ; j<TAM - 1; j++){
			if (arreglo[j] > arreglo[j+1]){
			auxiliar= arreglo[j];
 			arreglo[j] = arreglo[j+1];
 			arreglo[j+1] = auxiliar;
 			
			}
		}
	}
	//fin del algoritmo
	
	for(int i = 0 ; i < TAM ; i++){
		cout<<arreglo[i]<<" ";
	} 

}
