#include <iostream>
#include <fstream>
using namespace std;

const int N=100;

int main()
{
    int A[N];
    int primero=0;
    int ultimo=N-1;
    int medio;
    int n,n1,AUX1,i;
    int contador=0;
    char r;
    //abro archivo
    ofstream datos;
  string nombreArchivo;
  cout<<"INGRESA EL NOMBRE DEL ARCHIVO: ";
  cin.ignore();
  getline(cin,nombreArchivo);
  datos.open(nombreArchivo.c_str(),ios::app);
  do
  {
    cout<<"Ingrese tamanio del vector: ";
    cin>>n1;
    for(int i=0;i<n1;i++)
  {
    cout<<"Ingresa un numero positivo de la posición ["<<i<<"] : ";
    cin>>A[primero];
    datos<<"["<<A[primero]<<"]";
  }
  cout<<"Ingrese elemento a buscar: ";
  cin>>n;
  datos<<"\nElemento a buscar es: ";
  datos<<n;
    while(A[primero]!=n && contador<n1)
    {   
      
    medio = primero + ((n-A[primero])*(ultimo-primero))/(A[ultimo]-A[primero]);
    
    if(A[medio]<n)
          primero = medio+1;
          
    else if(A[medio]>n)
    
          ultimo = medio-1;
    else
          primero = medio;
      
      contador++ ; 
      break;
    }

    if(A[primero]==n)
    {
        cout<<"\nELEMENTO ENCONTRADO";
        datos<<"\nELEMENTO ENCONTRADO";
    }
    else
    {
        cout<<"\nELEMENTO NO ENCONTRADO";
        datos<<"\nELEMENTO ENCONTRADO\n";
    }
}while(r=='s');
datos.close();

    return 0;
}

