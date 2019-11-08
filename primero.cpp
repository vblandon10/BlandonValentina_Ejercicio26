#include <iostream>
using namespace std;

int main (int argc, char **argv) {
   double* lista  = NULL; 
   int n_side;
   int i;

   n_side = atoi(argv[1]);

   lista  = new double[n_side];
   
   cout << "Lista Factorial"<< endl;
   lista[0] = 1;
   cout << lista[0] << endl;
   for (i=1;i<n_side;i++){
     lista[i] = lista[i-1] * i;
     cout << lista[i] << endl;
   }
   
   delete [] lista;
   return 0;
}