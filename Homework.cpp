//BUILD A CALCULATOR THAT PERFORMS: sum, product, diff, division, modulo::
// Pseudocode:
//  1. Define a and b
//  2. input a and b
//  3. performs all operations one by one
//  4. Print all results
// Code:
//     int a, b;
//     cout<<"Enter a : ";
//     cin>>a;

//     cout<<"Enter b : ";
//     cin>>b;
//     int sum, difference, multiply, divide, modulo;
//     sum = a + b;
//     difference = a - b;
//     multiply = a * b;
//     divide = a / b;
//     modulo = a % b;

//     cout<<"Sum is: "<<sum<<endl;
//     cout<<"Difference is: "<<difference<<endl;
//     cout<<"Multipled is: "<<multiply<<endl;
//     cout<<"Divided is: "<<divide<<endl;
//     cout<<"Modulo is: "<<modulo<<endl;
//     return 0;


//SUM OF ALL ODD USING WHILE LOOP:
// Pseudocode:
// Code:
//     int main(){
//         int n;
//         int i = 1;
//         int sum = 0;
//         cout<<"Enter a number for odd sum : ";
//         cin>>n;
//     while(i <= n){
//         if(i % 2 != 0){
//              sum += i;
//     };
//         i++;
//     }
//        cout<<"The Total Sum is : "<<sum<<endl;
//        return 0;
//     }

//SUM OF ALL NUMBERS DIVISBLE BY 3:
// int main(){
//     int x;
//     cout<<"Enter a number: ";
//     cin>>x;
//     int sum = 0;
//     for (int i = 1; i <= x; i++){
//         if (i%3==0){
//             sum+=i;
//             cout<<i<<" : "<<sum<<endl;
//         }
//     }
//     cout<<"Total Sum till "<<x<<" is :"<<sum;
// }

//FACTORIAL OF A NUMBER N:
// int main(){
//     int x;
//     int fact = 1;
//     cout<<"Enter a number you want the factorial of : ";
//     cin>>x;
//     for(int i = 1; i <= x; i++){
//         fact = fact*i;
//     }
//     cout<<"factorial of the number "<<x<<" is : "<<fact;
// }

//TRIANGLE PATTERN: ALPHABET INCREASING WITH LINE ABBCCCDDDD
// int main(){
//     int x, j; 
//     cout<<"Enter a number : ";
//     cin>>x; 
//     for(int i = 1; i <= x; i++){ 
//         int j = 1;
//         char n = 65 + i - 1;
//         while(j <= i){
//             cout<<n<<" ";
//             j++;
//         }
//         cout<<endl;
//     }
// };

//ALPHABET REVERSE TRIANGLE: ABACBADCBA
// int main(){
//     int x; 
//     cout<<"Enter a number : ";
//     cin>>x; 
//     for(int i = 1; i <= x; i++){
//         char n = 'A' + i - 1;
//         for(int j = 1; j <= i; j++){
//             cout<<n<<" ";
//             n = n - 1;
//         }
//         cout<<endl;
//     }
// }

//FLOYDS TRIANGLE ALPHABET VERSION:
// int main(){
//     int x, i; 
//     cout<<"Enter a number : ";
//     cin>>x; 
//     char n = 65;
//     for(int i = 1; i <= x; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<n<<" ";
//             n++;
//         }
//         cout<<endl;
//     }
// }

//FUNCTION FOR FIBONACCI:



#include <iostream>
using namespace std;

int fibbo(int x){
    int a = 0;
    int b = 1;
    int fib = 0; 
    cout<<a<<", ";
    for(int i = 1; i < x; i++){
        fib = a + b;
        cout<<fib<<", ";
        a = b;
        b = fib;
    }
    return a;
}
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int fibbonacci = fibbo(x);
    cout<<fibbonacci;
}



