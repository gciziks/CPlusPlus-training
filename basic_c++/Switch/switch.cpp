#include <iostream>

using namespace std;

string getDayOfWeek(int dayNumber){
    string dayName;
    switch(dayNumber){

        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturnday";
            break;
        default:
            dayName = "Invalid input";
            break;
    }
    return dayName;


}

int main(){
    int dayN;
    string dayStr;
    cout << "Input Day Number: ";
    cin >> dayN;
    dayStr = getDayOfWeek(dayN);
    cout << "Day number: "<< dayN << "\nDay string: " << dayStr;
    return 0;
}
