#include <iostream>

using namespace std;

void unpointedSum(int x){

    x = x + 1;
}

void pointedSum(int *x){

    *x = *x + 1;
}

int main(){
    int a = 4;
    unpointedSum(a);
    cout << "Unpointed: " << a << endl;
    pointedSum(&a);
    cout << "Pointed: " << a << endl;

    return 0;
}
