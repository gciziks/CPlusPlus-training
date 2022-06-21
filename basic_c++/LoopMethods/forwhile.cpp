#include <iostream>

using namespace std;
int main(){

    int index = 0;
    while(index<=10){
        cout << "-";
        index++;
    }
    cout << "\n\n";
    for(int x=0;x<=10;x++){
        for(int y=0;y<=x;y++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
