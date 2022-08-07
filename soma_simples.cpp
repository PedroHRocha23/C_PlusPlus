#include <iostream>

using namespace std;

int soma(int num1,int num2){
    int resultado = num1 + num2;
    return resultado;
}


int main(void){
    int num1, num2, x;
    cin >> num1;
    cin >> num2;
    x = soma(num1,num2);
    cout << "X = " << x;
}