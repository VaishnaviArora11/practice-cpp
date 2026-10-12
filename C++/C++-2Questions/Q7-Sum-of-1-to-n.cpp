//                                        Question 7 : Sum of 1 to n  

// Input n from user
// Print sum of odd numbers 1 to n using for loop


#include <iostream>
using namespace std;

int main (){
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if (i % 2 == 1){
            sum += i;
        }
    }
    cout << sum;
}