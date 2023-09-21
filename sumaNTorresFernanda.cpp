//programa: sumaNTorresFernanda.cpp
//autor: Torres Fernanda
//fecha: 2023-09-15
//descripcion: suma varios numeros
#include<iostream>
using namespace std;
int main()
{
        int i=0, l;
        float x, s=0;
        cout<<"Ingrese cantidades de numeros:";
        cin>>l;       
	do{
                cout<<"Ingrese x:"; cin>>x;                   
         i=i+1;
         s=s+x;
        }while(i<l);
        cout<<"La suma es:"<<s<<endl;                          
	return(0);
}                                                     
