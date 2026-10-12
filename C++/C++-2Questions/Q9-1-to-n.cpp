//                                        Question 9 : Print 1 to n using do-while

// Input n
// Print it using do-while loop this time


#include <iostream>
using namespace std;

int main (){
    int n, sum = 0;
    cin >> n;
    int i = 1;
    do {
        sum += i;
        i++;
    } while (i <= n);
    cout << sum;
}