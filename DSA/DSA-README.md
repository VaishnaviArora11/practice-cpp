# DS:
Store data in the form of Linear or Hierarchial

# ALGORITHM:
efficient operations on data

# ARRAYS:
Its for when we need to store a large number of data under a single variable
Its to prevent storing every single data into ito individual variables as its harder to keep track of them
### Properties:
   1> Only same type of data can be stored together
   2> Are contigous in memory
   3> Are Linear
       If an int array marks starts from 100 for 5 different values will be of 4 bytes each toh first value 100 
       pr then second on 104,third 108, fourth 112 and so on

## Creating Arrays:
For it you need to write: int <name> [<num of elements>] = {<elements sep by commas>}
No in square bracket:
   1> 50 likho but 5 entries: 50 ki space reserved with 5 initial values defined.
   2> No num but 3 in curly: 3 ki space automatically saved

## TO ACCESS DATA IN ARRAY:
We use array index /position. 
It starts from 0 to size -1
          int marks [5] = {50, 43, 26, 36, 75}
          cout << marks [3]       //output: 36
Changing value: 
          marks [4] = 76
Size: sizeof(<name>) tells the total size of memory it occupies in bytes. 
Now if we do sizeof (<name>)/sizeof(int) we will get the actual size of Array (the one in the square bracket)

# PASS BY REFERENCE:
In C++, a refernce is an object or function and its address is the address of the obj or func it refers to
To make changes in a DS, we need to make changes to the address of the DS
We can call an array by mentioning ths starting address of the array
must be careful as they maybe changing the values in the og array as well

# LINEAR SEARCH:
Its an Algorithm
Easiest one 
Checks one value in array then next then next and so on 