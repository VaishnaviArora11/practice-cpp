//                                        Question 8 : Sum of Odd Number 1 to N 

// Input marks 
// Grade on the basis :
//      Marks Range         Grade
//       90-100               A 
//       80-90                B 
//       0-80                 C
// Print the grades 


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