#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int calories;
    int fat;

    cout << "How many calories does the food have? " << "\n";
    cin >> calories;
    if (calories > 0) {
         cout << "How many fat grams does the food have? " << "\n";
         cin >> fat;
        if (fat == calories){
            cout << "Invalid data." << "\n";
            return 0;
        }
        else if (fat > 0){
            double total  = (fat * 9.0) / calories;
            double percentage = total  * 100;
            cout << "The percentage of calories from fat is " << fixed << setprecision(1) << percentage << "%." << "\n";
            if (percentage < 30) {
                cout << "The food is low in fat." << "\n";
            } else{
                cout << "The food is NOT low in fat." << "\n";
            }
        }
        else {
             cout << "Invalid data." << "\n";
        }
        
    }
    else {
             cout << "Invalid data." << "\n";
        } 
    
return 0;
}
