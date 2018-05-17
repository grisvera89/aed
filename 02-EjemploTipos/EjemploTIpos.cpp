/*Tipo de Valores
Trabajo Practico 2
Grisel Noelia Vera
20180425
*/

#include<iostream>
#include<cassert>
#include<math.h>

using namespace std;

int main(){

const bool noche=false;
const double numdecimal=66.6;
const unsigned int numpositivo=366;
const int tres=3;
const char simbolo='%';
const string abecedario="abcdefghijklmnñopqrstuvwxyz";

assert(noche==false);
assert(numdecimal>66.59);
assert(simbolo!='$');
assert((numpositivo%tres)<abecedario.length());
assert(numpositivo*tres!=pow(numpositivo,3));
}
