#include <iostream>
#include<fstream>
using namespace std;

int main (int argc, char **argv) {
  double* lista1  = NULL; 
  double* lista2  = NULL; 
  double* lista3  = NULL; 

  string nombre1 = argv[1];
  string nombre2 = argv[2];

  ifstream archivo1(nombre1);
  ifstream archivo2(nombre2);
  int n_side1 = 0, n_side2 = 0;
  int numero;
  while(archivo1 >> numero) n_side1++;
  while(archivo2 >> numero) n_side2++;

  archivo1.close();
  archivo2.close();

  archivo1.open(nombre1);
  archivo2.open(nombre2);

  lista1  = new double[n_side1];
  cout << "lista1" << endl;
  for(int i=0; i<n_side1; i++) {
    archivo1 >> numero;
    lista1[i] = numero;
    cout << lista1[i] << endl;
  }

  lista2  = new double[n_side2];
  cout << "lista2" << endl;
  for(int i=0; i<n_side2; i++) {
    archivo2 >> numero;
    lista2[i] = numero;
    cout << lista2[i] << endl;
  }

  archivo1.close();
  archivo2.close();

  int n_side3 = n_side1+n_side2-1;
  lista3  = new double[n_side3];
  for(int i=0; i<n_side3; i++) {
    lista3[i] = 0;
  }
  for(int i=0; i<n_side1; i++) {
    for(int j=0; j<n_side2; j++) {
      lista3[i+j] += lista1[i] * lista2[j];
    }
  }

  cout << "lista3 (multiplicacion) " << endl;
  for(int i=0; i<n_side3; i++) {
    cout << lista3[i] << endl;
  }

  delete [] lista1;
  delete [] lista2;
  delete [] lista3;

  return 0;
}