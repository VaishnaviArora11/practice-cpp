# PRIMITIVE DATA TYPES:
    int age = 25;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = true;
    double price = 100.88;
Type conversion is implicit, for small to big
    char grade = 'a';
    int age = grade;
    cout<<age; -> gives ascii value of a ie 97
Type casting is explicit, for big to small
    float rate = 100.99f;
    int price = int(rate);
    cout<<rate<<"  "<<price;

    int age = 25;
    cout<< age << endl;
     
use cout<< sizeof(age) <<endl; to know the amount of bytes the variable's function can store
variables holding the value of a universal constnt that cant be changed should be in caps for example:
    float PI = 3.14f
in float, add a f or F mandatorily to define it as a float

# INPUT IN C:
    cout<<"Enter your price: ";
    cin>>price;
    cout<<"Entered price: "<<price;
    return 0;
two variables can be seperated by a comma or another line
    int a = 5, b = 6;

# RELATIONAL OPERATORS:
   cout << (3<5) << endl; ->true:1
   cout << (4<3) << endl; ->false:0
   cout << (3<=3) << endl;
   cout << (4<=3) << endl;
   cout << (4==3) << endl;
   cout << (4!=3) << endl; 

# LOGICAL OPERATORS:
### OR is a logical operator denoted by || which is called a pipe
used to return true if at least one of the two given comparisons is true
   cout << ( (3<5) || (5<3) ) << endl;
### AND is a logical operator denoted by && which is called an Ampersand
used to return true only if all the provided statements in comparison are true
   cout << ( (3<5) && (5<3) ) << endl;
   cout << ( (3<5) && (5>3) ) << endl;
### NOT is a logical operator denoted by !
Its used to answer the opposite ie false becomes true and likewise
    cout << !(3<5) << endl;

# UNARY OPERAOTORS:
need only one variable
mainly used in loops
a++ and ++a are different
 a++ means phle kaam fir update
 also called post increment operators
    int main(){
    int a = 10;                     
    int b = a++;
    cout<<b<<endl;    -> 10
    cout<<a<<endl;    -> 11
 ++a means phle update fir kaam 
 also called pre increment operator
    int main(){
    int a = 10;                     
    int b = ++a;
    cout<<b<<endl;    -> 11
    cout<<a<<endl;    -> 11
similarly are a-- and --a 
called pre decrement and post decrement operators

# CONDITIONAL STATEMENTS:
### IF is used to return a value only if the given statement provided is entirely true
You can remove the curly braces if there is only an if condition and the thing in the statement is only one
However, curly braces is a sign of good coder toh lgana chahiye
    int n = 45;
    if (n<=0){
       cout<<"Positive"<<endl;
    }
### ELSE statement is used to return a value if the if condition is false
can be used from next line but good coders: start from the same line the curly braces of if condition ends
    int n = 45;
    if (n>=0){
       cout<<"Positive"<<endl;
    } else {
        cout<<"Negative"<<endl;
    }
### ELSE IF/ELIF is if there are more than two conditions
No limit on number of elif stetments

# TERINARY OPERATORS:
3 statements in one
used instead of if else conditions but only if the statement is single lined
format: condition ? st1 (executed if condition is true) : st2 (executed if condition is false)
    int n = -45;
    cout<<(n>=0 ? "Positive" : "Negative");

# LOOPS:
WHILE loops work until the condition is true
FOR loops can do everything while loop can, just the notation is different
for(initialisation; condition; updation){    }
DO WHILE loop:
    do{
       work
    } while(condition);
difference between while and do while loop is that in while loop, it doesnt work if the condition is false
meanwhile in do-while loop, even if the condition is false, the loop works at least once since the condition is checked after the loop 
has been run

# BREAK : 
break is a keyword where the loop breaks as soon as the loop reaches the condition specified
    while(i <= n){
       cout<<i<<endl;
       i += 1;
       if(n == 6){
          break;
       }

# NESTED LOOPS:
writing a loop inside of other loop
very helpful in patterns 
if used a variable in a loop already, use other variable in the nested ones 

# FUNCTIONS:
If we want something done repetitively, we use fnc
     <returntype> <functionname> (){
     }
return type are such as int, char etc
those who have return 0, write void
call it like this in the main fnc: <functionanme>():;
     void printHello(){
          cout<<"Hello";
          return 0;
     }  
or if we put a certain value in the return, it will print hello first and then return an int value
      int printHello(){
          cout<<"Hello";
          return 2;
      }
      int main(){
          int x = printHello();
          cout<<"x is : "<<x;
          return 0;
      }
you can also write paramenters in the bracket

# BINARY :
Binary is base 2, Hexadecimal is base 16 and Octal is base 8
## Decimal to Binary is calculated by:
  1> Divide the number by 2, keep the remainder safe
  2> Write the qoutient below divide it the same way until 0 obt
  3> the number of qoutient written backwards is the binary form
## Binary to Decimal is calculated by :
  1> Right to left, Multiply the number by 2 ki power, 
  2> increase the power by one 
  3> add the numbers obt
Note: 1 + 1 in binary is = 10 not 2

# TWOS COMPLIMENT:
Its for negative numbers
To calculate a negative numbers binary storage:
  1> Find the binary number of the number
  2> Add a prefix of 0 before it (1 if negative, 0 if positive)
  3> Find ones compliment : jo zero h voh one ho jayega and vice versa
  4> Binary addition it with 1
The zero or one Prefix is called the Most Significant Bit (MSB)
Example :
         Lets take -25
         binary form = 11001
         prefix - 011001
         one compliment - 100110
         binary addition = 100111

# BITWISE OPERATORS : & : (and)
0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1
         int a = 4;
         int b = 8;
         cout<<(a & b)        OUTPUT - 0
because :
4 is 100, 8 ia 1000
add an extra 0 before 1 in 4 and binary add binary 4 and binary 8
0100 + 1000 = 0000

# BITWISE OPERATORS : | : (or) 
0 | 0 = 0
0 | 1 = 1
1 | 0 = 1
1 | 1 = 1

# BITWISE OPERATORS : ^ : (Xor or Exclusively or)
0 ^ 0 = 0
0 ^ 1 = 1
1 ^ 0 = 1
1 ^ 1 = 0
0 for non same bit numbers and 1 for same

# BITWISE OPERATORS : << : (Left shift operator)
in x << y, the binary numbers of x are shifted by y places to the left, and a zero is added to the rightmost side of the leftover spaces
Final ans will be x *
BITWISE OPERATORS : >> : (Right shift operator)
in x << y, the binary numbers of x are shifted by y places to the right, and a zero is added to the leftmost side of the leftover spaces
last digit is removed since there are no spaces there

# OPERATOR PRIORITY :
1. unary operators like a! , a++ , a-- RtoL
2. * / % LtoR
3. + - LtoR
4. relational LtoR
5. == != LtoR
6. && LtoR
7. || LtoR
8. = RtoL

# SCOPE:
Its an area where a varaiable can be accessed or used
## Local Variables :
   1> If else, functions, Block of code like {}
   2> Not accessible out of this
## Gloabal Variable :
   1> writing a variable outside allthe functions inc main
   2> can be accessed everywhere

# DATA TYPE MODIFIERS:
change meaning of data types
### long:
   1> gives an extra 4 bytes
   2> long int, long double
   4> int range = -2^31 to 2^31 - 1 
   5> long int range = 2^63 to 2^63 - 1
### short:
   1> decreases by 2 bytes
   2> short int
### long long:
   1> increases by different capacities in various systems
   2> long long int
### signed:
   1> int by default signed  
   1> it means it can store both positive and negative
### unsigned:
   1> its when you only want positive values to be added
   1> unigned int x = y
   1> cout of -10 will be 4294967286 because 2s compliment because binary to decimal as it takes it as a positive num

