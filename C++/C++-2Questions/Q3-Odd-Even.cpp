//                                        Question 3 : Check Odd-Even  

// Input a number 
// Use if-else to check whether it is odd or even
// Print Even or Odd


#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a % 2 == 0){
        cout << "Even";
    } else {
        cout << "Odd";
    }
}