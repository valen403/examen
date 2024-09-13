#include <iostream>

using namespace std;

void Ano_Bisiesto () {
    int Ano;
    cout << "ingrese un ano";
    cin >>Ano;
if(Ano % 4){
    cout << " no es ano es bisiesto\n";

}


else {
    cout << "es ano bisiesto\n";
}


}
void Tabla_del_Reves(){
int numero;
cout << "ingrese un numero\n";
cin >>numero;

for ( int i = 10; i>= 1; i--){
     cout << numero <<"x" <<i << "=" <<numero * i << endl;
}

}
void Fizzbuzz(){
int Numero;
cout << "ingrese un numero";
cin>> Numero;
for (int i=1; i<=Numero; i++)
    if (i % 3){
        cout << i << "buzz";

    }
  else if (i % 5){
    cout << i <<"fizz";
  }
  else if (i % 3 && i % 5){
    cout << i ;
  }
else {
    cout << i << "fizzbuuz\n";
}




}


int main (){
int opciones;
 do{
     cout<< "menu\n";
    cout << "1. ano bisiesto\n";
   cout <<  "2. tabla de multiplicar\n";
   cout << "3. limite de numeros\n";
    cout << "4. salir\n";
    cout << "eligue una opcion\n";
   cin  >> opciones;
    switch(opciones){
    case 1:
  Ano_Bisiesto();

        break;
    case 2:
        Tabla_del_Reves();
    break;
    case 3:
        Fizzbuzz();
        break;
    case 4:
        cout << "salir";

        break;
    default:
        cout << "opcion no valida";

    }
 }
    while (opciones != 4);




return 0;}
