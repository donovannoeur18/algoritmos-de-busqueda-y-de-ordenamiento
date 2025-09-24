#include <iostream>
using namespace std;

int fibonacci(int a){
    if(a <= 2){
        return 1;
    }
    return fibonacci(a - 1) + fibonacci(a - 2);
}

int main(){
    int num;
    cout << "ingresa un numero " << endl;
    cin >> num;
    cout << fibonacci(num) << endl;
    return 0;
}
/*nota, esta funcion solo funciona hasta el numero 46 de la sucesion*/