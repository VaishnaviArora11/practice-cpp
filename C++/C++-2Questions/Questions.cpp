

//NUMBER OF STARS = NUMBER OF LINES PATTERN:
//     int main(){
//         int x;
//         cout<<"Enter a number : ";
//         cin>>x;
//         for(int i = 1; i <= x; i++){
//             int m = 1;
//             while(m <= x){
//             cout<<"* ";
//             m++;
//             }
//         cout<<endl;
//         }
//     }

//SQUARE PATTERN: NUMBERS TILL N IN N LINES:
// int main(){
//     int x;
//     cout<<"Enter the number : ";
//     cin>>x;
//     for(int i = 1; i <= x; i++){
//         for(int m = 1; m <= x; m++){
//             cout<<m<<" ";
//         }
//         cout<<endl;
//     }
// }


//SQUARE PATTER 2: MAX NUMBERS IN ONE LINE MULTIPLE OF N, LINES TILL N SQUARED:
// int main(){
//     int x, m = 1;
//     int n = 1;
//     cout<<"Enter the number : ";
//     cin>>x;
//     for(int i = 1; i <= x; i++){ //i=1
//         while(m <= x*n && n <= x){ //m=2
//             cout<<m<<" ";
//             m++;
//         }
//         n++;
//         cout<<endl;
//     }
//     };
  
//TRIANGLE PATTERN: NUMBER OF STARS IN LINE = LINE NUMBER:
// int main(){
//     int x; 
//     cout<<"Enter a number : ";
//     cin>>x;
//     int y = x + 1;
//     for(int i = 1; i < y; i++){ 
//         for (int n = 1; n <= i; n++){ 
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// };

//TRIANGLE PATTERN WITH NUMBERS:
// int main(){
//     int x; 
//     cout<<"Enter a number : ";
//     cin>>x; 
//     for(int i = 1; i <= x; i++){ 
//         int n = 1;
//         while(n <= i){
//             cout<<i<<" ";
//             n++;
//         }
//         cout<<endl;
//     }
// };

//TRIANGLE PATTERN: INCREASING WITH NO OF CHARACTERS 1121231234
// int main(){
//     int x, j; 
//     cout<<"Enter a number : ";
//     cin>>x; 
//     for(int i = 1; i <= x; i++){
//         int n = 1;
//         for(int j = 1; j <= i; j++){
//             cout<<n<<" ";
//             n++;
//         }
//         cout<<endl;
//     }
// }

//REVERSE TRIANGLE PATTERN:
// int main(){
//     int x, j; 
//     cout<<"Enter a number : ";
//     cin>>x; 
//     for(int i = 1; i <= x; i++){
//         int n = i;
//         for(int j = 1; j <= i; j++){
//             cout<<n<<" ";
//             n = n - 1;
//         }
//         cout<<endl;
//     }
// }

//INVERTED TRIANGLE:
// int main(){
//     int x; 
//     cout<<"Enter a number : ";
//     cin>>x; 
//     int y = x;
//     for(int i = 1; i <= x; i++){ //i is rows
//         int num = i;
//         for(int j = 0; j < i; j++){ //j is spaces
//             cout<<" ";
//             }
//         for(int v = 1; v <= x - i + 1; v++){ //v is rep numb
//             cout<<num;
//         }
//         cout<<endl;
//     } 
// }


//FLOYDS TRIANGLE PATTERN:
// int main(){
//     int x; 
//     cout<<"Enter a number : ";
//     cin>>x; 
//     int n = 1;
//     for(int i = 1; i <= x; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<n<<" ";
//             n++;
//         }
//         cout<<endl;
//     }
// }

//PYRAMID:   1  121 12321 1234321:
// int main(){
//     int x;
//     cout<<"Enter a number : ";
//     cin>>x;
//     for(int i = 1; i <= x; i++){ //rows
//         int n = 1;
//         for(int j = 1; j <= x - i; j++){ //spaces
//             cout<<" ";
//         }
//         for(int k = 1; k <= i; k++){
//                 cout<<n;
//                 n++;
//             }
//         n--;
//         for(int l = 1; l < i; l++){
//                 n--;
//                 cout<<n;
//             }
//         cout<<endl;
//     }
// }

//MINIMUM OF 2 NUMBERS:
// int min(int a, int b){
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     if(a>b){
//         cout<<a<<" is greater than "<<b;
//         return a;
//     } else {
//         cout<<b<<" is greater than "<<a;
//         return b;
//     }
// }
// int main(){
//     int a, b;
//     int printMinimum = min(a,b);
// }

//SUM TILL N:
// int sum(int n){
//     cout<<"Enter a number n : ";
//     cin>>n;
//     int sum_Of_n = 0;
//     for(int i = 1; i <= n; i++){
//         sum_Of_n = sum_Of_n + i;
//     }
//     cout<<"The sum till "<<n<<" is : "<<sum_Of_n;
//     return sum_Of_n;
// }
// int main(){
//     int n;
//     int totalSum = sum(n);
// }

//FACTORIAL TILL N:
// int facto(int n){
//     cout<<"Enter a number : ";
//     cin>>n;
//     int product = 1;
//     for(int i = 1; i <= n; i++){
//         product = product * i;
//     }
//     cout<<"The Product is : "<<product;
//     return product;
// }
// int main(){
//     int n;
//     int factorial = facto(n);
// }

//SUM OF DIGITS OF A NUMBER:
// int main(){
//     int x;
//     cout<<"Enter a number : ";
//     cin>>x;
//     int sum = 0;
//     while(x > 0){
//         int remain = x % 10;
//         sum = sum + remain;
//         x = x / 10;
//     }
//     cout<<sum;
// }

//DECIMAL TO BINARY :
// int main(){
//     int decNum;
//     cout<<"Enter the desired number : ";
//     cin>>decNum;
//     int qoutient;
//     int digit = 1;
//     int sum = 0;
//     while (decNum > 0){
//         int rem = decNum % 2;
//         decNum = decNum / 2;
//         sum = sum + (rem * digit);
//         digit = digit * 10;
//     }
//     cout<<sum;
// }

//BINARY TO DECIMAL:
// int main(){
//     int binNum, digit;
//     cout<<"Enter a number : ";
//     cin>>binNum;
//     int numBin;
//     int power = 1;
//     int sum = 0;
//     while(binNum > 0){
//        digit = binNum % 10;
//        numBin = digit * power;
//        sum = sum + numBin;
//        power = power * 2;
//        binNum = binNum / 10;
//     }
//     cout<<sum;
// }
 
//LOOP TO PRINT ALL MARKS IN AN ARRAY: 
// int main(){
//     int marks[5] = {50, 45, 60, 75, 90};
//     int size = sizeof(marks) / sizeof(int);
//     for(int i = 0; i < size; i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }

//INPUT MARKS IN AN ARRAY:
// int main() {
//     int size;
//     cout << "Enter the number of children : " << endl;
//     cin>>size;
//     int marks[size];
//     for(int i = 0; i < size + 1; i++){
//         cout<<"Enter marks : "<<endl;
//         cin>>marks[i];
//     }
//     return 0;
// }

//SMALLEST VALUE IN AN ARRAY:
// int main(){
//     int marks[5] = {50, 45, 60, 75, 90};
//     int size = sizeof(marks) / sizeof (int);
//     int smallest = INT_MAX;
//     for(int i = 1; i < size; i++){
//         if(marks[i] < smallest){
//             smallest = marks[i];
//         }
//     }
//     cout<<smallest;
// }

//NOTE:
// Use #include <climits> for the INT_MAX to work and compile

//SMALLEST VALUE IN ARRAY KA INDEX:
// int main(){
//     int marks[5] = {50, 45, 60, 75, 90};
//     int size = sizeof(marks) / sizeof (int);
//     int smallest = INT_MAX;
//     int smallestIndex = 0;
//     for(int i = 0; i < size; i++){
//         if(marks[i] < smallest){
//             smallest = marks[i];
//             smallestIndex = i;
//         }
//     }
//     cout<<smallestIndex;
// }

//LINEAR SEARCH IN ARRAY : NUM ENTERED KA INDEX :
// Normal:
// int main(){
//     int x;
//     int marks[5] = {50, 45, 60, 75, 90};
//     int size = sizeof(marks) / sizeof (int);
//     cout<<"Enter the number you want to find : ";
//     cin>>x;
//     int numindx;
//     for(int i = 0; i < size; i++){
//         if(marks[i] == x){
//             numindx = i;
//         }
//     }
//     cout<<numindx;
// }
// Linear Search:
// int linearSearch (int marks[], int size, int x){
//     for(int i = 0; i < size; i++){
//         if(marks[i] == x){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int x;
//     int marks[5] = {50, 45, 60, 75, 90};
//     int size = sizeof(marks) / sizeof (int);
//     cout<<"Enter the number you want to find : ";
//     cin>>x;
//     cout << linearSearch(marks, size, x);
//     return 0;
// }

//REVERSE AN ARRAY (OG< NOT COPY)
// 2 pointer approach: Normal :
// int main(){
//     int arr[]={4, 2, 7, 8, 1, 2, 5};
//     int size = sizeof (arr) / sizeof (int);
//     int x = size - 1;
//     for(int i = 0; i <= x; i++){
//         swap(arr[i], arr[x]);
//         x--;
//     }
//     for(int y = 0; y <= (size - 1); y++){
//         cout<<arr[y];
//     }
// }
// Function : 
//  int sum(int arr[], int size){
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









#include <iostream>
using namespace std;

void interse(int arr1[], int size1, int arr2[], int size2){ //i > arr1 idx; y > arr2 idx
    for(int i = 0; i < size1; i++){
        for(int y = 0; y < size2; y++){
            if (arr1[i] == arr2[y]){
                cout << arr1[i] << " ";
            }
        }
    }
}
int main(){
    int arr1[] = {3, 6, 9, 12, 15, 18, 21};
    int size1 = sizeof (arr1) / sizeof (int);
    int arr2[] = {2, 4, 6, 8, 10, 12, 14};
    int size2 = sizeof (arr2) / sizeof (int);
    interse(arr1, size1, arr2, size2);
}