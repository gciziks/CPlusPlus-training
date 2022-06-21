#include <iostream>

using namespace std;
int main(){
    float num1;
    float num2;
    float result;
    char oper;
    cout << "Type first number:";
    cin >> num1;
    cout << "Type operator:";
    cin >> oper;
    cout << "Type second number:";
    cin >> num2;


    if(oper == '+'){
        result = num1 + num2;
    }
    else if(oper == '-'){
        result = num1 - num2;
    }
    else if(oper == 'X' || oper == 'x'){
        result = num1 * num2;
    }
    else if(oper == '/'){
        result = num1 / num2;
    }
    else{
        cout << "Operation not supported";
        return 0;
    }
    cout << "Result:" << result;


    return 0;

}
