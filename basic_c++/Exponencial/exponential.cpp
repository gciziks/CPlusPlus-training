#include <iostream>

using namespace std;

int power(int value){
    int total = 1;
    for(int x=1;x<=value;x++){
        total *= x;
    }
    return total;
}

int main(){
    int value;
    cout << "Get exponential for:";
    cin >> value;
    cout << "Value: " << power(value);
    return 0;
}
