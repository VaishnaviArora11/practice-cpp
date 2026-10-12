//                                        Question 5 : Uppercase-Lowercase 

// Input character
// Check whether its uc or lc using if else 


#include <iostream>
using namespace std;

int main(){
    char letter;
    cin >> letter;
    if (letter >= 65 && letter <= 90){
        cout << "Uppercase";
    } else if (letter >= 97 && letter <= 122){
        cout << "Lowercase";
    }
}