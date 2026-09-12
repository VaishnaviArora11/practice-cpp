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
// int fibbo(int x){
//     int a = 0;
//     int b = 1;
//     int fib = 0; 
//     cout<<a<<", ";
//     for(int i = 1; i < x; i++){
//         fib = a + b;
//         cout<<fib<<", ";
//         a = b;
//         b = fib;
//     }
//     return a;
// }
// int main(){
//     int x;
//     cout<<"Enter a number : ";
//     cin>>x;
//     int fibbonacci = fibbo(x);
//     cout<<fibbonacci;
// }

//WAF SUM ALL ELEMENTS IN AN ARRAY:
// int sum(int arr[], int size){
//     int y = size - 1;
//     int sumab = 0;
//     for(int i = 0; i <= (size - 1); i++){
//         int a = arr[y];
//         sumab += a;
//         y--;
//     }
//     return sumab;
// }
// int main(){
//     int arr[]={4, 2, 7, 8, 1, 2, 5};
//     int size = sizeof (arr) / sizeof (int);
//     cout<<sum(arr, size);
// }

//WAF MINIMUM IN A FUNCTION:
// int min(int arr[], int size){
//     int y = size - 1;
//     int min = INT_MAX;
//     for(int i = 0; i < size; i++){
//         if (arr[i] < min){
//             min = arr[i];
//         }      
//     }
//     return min;
// }
// int main(){
//     int arr[]={4, 2, 7, 8, 1, 2, 5};
//     int size = sizeof (arr) / sizeof (int);
//     cout<<min(arr, size);
// }

//WAF TO SWAP MIN AND MAX IN AN ARRAY :
// int mini(int arr[], int size){
//     int min = INT_MAX;
//     int minIndex;
//     for(int i = 0; i < size; i++){
//         if (arr[i] < min){
//             min = arr[i];
//             minIndex = i;
//         }      
//     }
//     return minIndex;
// }
// int maxi(int arr[], int size){
//     int y = size - 1;
//     int max = INT_MIN;
//     int maxIndex;
//     for(int i = 0; i < size; i++){
//         if (arr[i] > max){
//             max = arr[i];
//             maxIndex = i;
//         }      
//     }
//     return maxIndex;
// }
// int main(){
//     int arr[]={4, 2, 7, 8, 1, 2, 5};
//     int size = sizeof (arr) / sizeof (int);
//     int maximum = maxi(arr, size);
//     int minimum = mini(arr, size);
//     swap(arr[maximum], arr[minimum]);
//     cout<<"New Array is : ";
//     for (int i = 1; i <= size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

//WAF TO PRINT UNIQUE NUMBERS IN AN ARRAY
// void unq(int arr[], int size){  
//     for (int i = 0; i < size; i++){ //number individual check
//         int rep = 0;
//         int num = 0;
//         while (num < size){  //number jo i h usse sbke saath check
//             if (arr[i] == arr[num]){
//                 rep++;
//             };
//             num++;
//         }  
//         if (rep == 1){
//             cout << arr[i] <<" ";
//         }
//     }
// }

// int main(){
//     int arr[] = {4, 2, 3, 4, 7, 8, 9, 9, 7, 6, 5};
//     int size = sizeof (arr) / sizeof (int);
//     unq(arr, size);
// }


#include <iostream>
using namespace std;

