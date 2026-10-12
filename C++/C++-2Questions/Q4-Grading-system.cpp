//                                        Question 4 : Grading System  

// Input marks 
// Grade on the basis :
//      Marks Range         Grade
//       90-100               A 
//       80-90                B 
//       0-80                 C
// Print the grades 


#include <iostream>
using namespace std;

int main(){
    int marks;
    cin >> marks;
    if (90 <= marks && marks <= 100){
        cout << "A";
    } else if (80 <= marks && marks <= 90){
        cout << "B";
    } else {
        cout << "C";
    }
}