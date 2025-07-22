# Program-Structures-Datatypes
Aim: To study and implement C++ Program Structure (Data Types).
    
Tools: GNU g++ compiler for local and code editor or Online C++ Compiler.

# Theory

## Integer (int)
The user is prompted for an **integer**, which is printed along with its size in bytes using the `sizeof()` operator. The size of an integer is **4 bytes**, representing whole numbers without decimals.

## Floating-point (float)
The program accepts a **float input** (decimal number), prints the value, and its memory size. The size of a float is **4 bytes**, suitable for representing numbers with fractional parts but with limited precision.

## Character (char)
The program reads a **single character** from user input, prints it, and displays its size. A character occupies **1 byte**, sufficient to store an ASCII character.

## Double (double)
The user is prompted to input a **double-precision floating-point number**, which is then printed with its size. A double occupies **8 bytes**, allowing for a wider range and more precision than a float.

## String (string)
The program accepts a **word as a string** (note: `cin` reads until the first space), prints the string, and shows its memory size. `sizeof(string)` returns the fixed size of the **string object itself, which is 24 bytes**, not the length of the string content.

## Boolean (bool)
The program accepts a **boolean input** (where 0 = false, 1 = true), displays the value, and prints the size of the boolean type, which is **1 byte**.
## Key Concept

- **sizeof() Operator**: Determines the memory (in bytes) each data type occupies.
- **Data Representation**: Demonstrates how different C++ data types store data and how much memory they require.
- **User Interaction**: For every data type, the program prompts the user, reads input using `cin`, then displays the entered value and its memory size.


Program Explaination:                      
The program includes #include<iostream>  for input/output operations and then #include<string>  to demonstrate the string data type. The using namespace std; statement allows the use of cout, cin, string, etc. without using std:: beforehand.                

Program Flow
In the main() function, the program illustrates the declaration, input, and size of various C++ data types:
Algorithm:
1. Start the program.            
2. Declare an integer variable a.
- Prompt: Enter integer number            
- Input: Read value into a            
- Output: Display value of a and its size using sizeof(a)            
3. Declare a float variable b.                
- Prompt: Enter floating number            
- Input: Read value into b                
- Output: Display value of b and its size using sizeof(b)            
4. Declare a character variable c.                
- Prompt: Enter Character            
- Input: Read value into c            
- Output: Display value of c and its size using sizeof(c)        
5. Declare a double variable e.                
- Prompt: Enter double int number                    
- Input: Read value into e                        
- Output: Display value of e and its size using sizeof(e)                    
6. Declare a string variable f.                            
- Prompt: Enter String                                    
- Input: Read value into f                                    
- Output: Display value of f and its size using sizeof(f)                            
7. Declare a boolean variable d.            
- Prompt: Enter Boolean value                
- Input: Read value into                
- Output: Display value of d and its size using sizeof(d)                    
8. End the program.                

Conclusion:
The program ends after showing all the values and their memory sizes. This helps users learn how to practically use datatypes in C++, but it also introduces the idea of memory allocation for datatypes. This is essential in understanding data storage and management in programming.
