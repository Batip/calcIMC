#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
/// calculadora IMC
/// declarar 3 variables, peso, altura y el indice, como floats
/// pedir al usuario los 2 datos de peso y altura
/// a partir de estos datos, realizar el calculo
/// devolver el resultado del indice
/// preguntar si el imc cumple cierto parametro y a partir de eso devolver la clasificacion del imc
int main(){
    float peso = 0;
    float altura = 0;
    float imc;

    cout<< "Ingresar el peso:";
    cin>> peso;
    cout<< "Ingresar la altura:";
    cin>> altura;
    imc = peso / pow(altura,2);
    cout << "Su indice de masa corporal es de: " << imc << "km^2" << endl;
    if(imc < 25){
     cout<< "Usted tiene bajo peso";
    }else if(imc > 25 && imc < 30){
     cout<< "Usted tiene un peso normal";
    }else if(imc < 35){
     cout<< "Usted tiene obesidad moderada";
    }else if(imc < 40){
     cout<< "Usted tiene obesidad severa";
    }else{
     cout<< "Usted tiene obesidad morbida";
    }
}
