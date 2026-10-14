//                                        Question 9 : Prime or Not

// Input number 
// Determine prime or not 
// print YES if prime 
// print NO if not


#include <iostream>
using namespace std;

int main (){
    int n, prime = 0;
    cin >> n;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prime += 1;
            break;
        } 
    } 
    if (prime >= 1){
        cout << "NO";
    } else {
        cout << "YES";
    }
}