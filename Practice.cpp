//         int age = 25;
//         cout<< age << endl;
//use cout<< sizeof(age) <<endl; to know the amount of bytes the variable's function can store
//variables holding the value of a universal constnt that cant be changed should be in caps for example:
// float PI = 3.14f
//in float, add a f or F mandatorily to define it as a float

//PRIMITIVE DATA TYPES:
//    int age = 25;
//    char grade = 'A';
//    float PI = 3.14f;
//    bool isSafe = true;
//    double price = 100.88;
//Type conversion is implicit, for small to big
//    char grade = 'a';
//    int age = grade;
//    cout<<age; -> gives ascii value of a ie 97
//Type casting is explicit, for big to small
//    float rate = 100.99f;
//    int price = int(rate);
//    cout<<rate<<"  "<<price;

//INPUT IN C:
//    cout<<"Enter your price: ";
//    cin>>price;
//    cout<<"Entered price: "<<price;
//    return 0;
//two variables can be seperated by a comma or another line
//    int a = 5, b = 6;

//RELATIONAL OPERATORS:
//    cout << (3<5) << endl; ->true:1
//    cout << (4<3) << endl; ->false:0
//    cout << (3<=3) << endl;
//    cout << (4<=3) << endl;
//    cout << (4==3) << endl;
//    cout << (4!=3) << endl; 

//LOGICAL OPERATORS:
//OR is a logical operator denoted by || which is called a pipe
// used to return true if at least one of the two given comparisons is true
//    cout << ( (3<5) || (5<3) ) << endl;
//AND is a logical operator denoted by && which is called an Ampersand
// used to return true only if all the provided statements in comparison are true
//    cout << ( (3<5) && (5<3) ) << endl;
//    cout << ( (3<5) && (5>3) ) << endl;
//NOT is a logical operator denoted by !
// Its used to answer the opposite ie false becomes true and likewise
//     cout << !(3<5) << endl;

//UNARY OPERAOTORS:
// need only one variable
// mainly used in loops
// a++ and ++a are different
//  a++ means phle kaam fir update
//  also called post increment operators
//     int main(){
//     int a = 10;                     
//     int b = a++;
//     cout<<b<<endl;    -> 10
//     cout<<a<<endl;    -> 11
//  ++a means phle update fir kaam 
//  also called pre increment operator
//     int main(){
//     int a = 10;                     
//     int b = ++a;
//     cout<<b<<endl;    -> 11
//     cout<<a<<endl;    -> 11
// similarly are a-- and --a 
// called pre decrement and post decrement operators

//CONDITIONAL STATEMENTS:
//IF is used to return a value only if the given statement provided is entirely true
// You can remove the curly braces if there is only an if condition and the thing in the statement is only one
// However, curly braces is a sign of good coder toh lgana chahiye
//     int n = 45;
//     if (n<=0){
//        cout<<"Positive"<<endl;
//     }
//ELSE statement is used to return a value if the if condition is false
// can be used from next line but good coders: start from the same line the curly braces of if condition ends
//     int n = 45;
//     if (n>=0){
//        cout<<"Positive"<<endl;
//     } else {
//         cout<<"Negative"<<endl;
//     }
//ELSE IF/ELIF is if there are more than two conditions
// No limit on nujber of elif stetments

//TERINARY OPERATORS:
// 3 statements in one
// used instead of if else conditions but only if the statement is single lined
// format: condition ? st1 (executed if condition is true) : st2 (executed if condition is false)
//     int n = -45;
//     cout<<(n>=0 ? "Positive" : "Negative");

//LOOPS:
//WHILE loops work until the condition is true
//FOR loops can do everything while loop can, just the notation is different
// for(initialisation; condition; updation){    }
//DO WHILE loop:
//     do{
//        work
//     } while(condition);
// difference between while and do while loop is that in while loop, it doesnt work if the condition is false
// meanwhile in do-while loop, even if the condition is false, the loop works at least once since the condition is checked after the loop 
// has been run

//break is a keyword where the loop breaks as soon as the loop reaches the condition specified
//     while(i <= n){
//        cout<<i<<endl;
//        i += 1;
//        if(n == 6){
//           break;
//        }

//NESTED LOOPS:
// writing a loop inside of other loop
// very helpful in patterns 
// if used a variable in a loop already, use other variable in the nested ones 

//FUNCTIONS:
// If we want something done repetitively, we use fnc
//      <returntype> <functionname> (){
//      }
// return type are such as int, char etc
// those who have return 0, write void
// call it like this in the main fnc: <functionanme>():;
//      void printHello(){
//           cout<<"Hello";
//           return 0;
//      }  
// or if we put a certain value in the return, it will print hello first and then return an int value
//       int printHello(){
//           cout<<"Hello";
//           return 2;
//       }
//       int main(){
//           int x = printHello();
//           cout<<"x is : "<<x;
//           return 0;
//       }
// you can also write paramenters in the bracket


#include <iostream>
using namespace std;

int sum(int a, int b){
        int sum = a + b;
        return sum;
    }
int main(){
    int a, b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Sum is : "<<sum(a,b);
    return 0;
}
