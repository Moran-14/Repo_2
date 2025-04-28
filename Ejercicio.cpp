#include <iostream>

using namespace std;

int main(){

    int edad = 0;

    cout << "¿Cual es tu edad?";
    cin >> edad;

    //Evaluamos la edad para ver cuanto tendria que pagar o si tendria que pagar
    if(edad < 5){
        cout << "¡Entras gratis!";
    }
    else if(edad == 5 ){
        cout << "Tienes que oagar $5";
        
    }
    if (edad < 12){
        cout << "Tienes que oagar $5";
    }
    else{
        cout << "Tienes que pagar $10";
     }
    return 0;
}