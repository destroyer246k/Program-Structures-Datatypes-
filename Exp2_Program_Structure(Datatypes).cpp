// Patel Vishwas
// 24070123072
// A3
#include<iostream>
#include<string> // Include the string library to use string data type
using namespace std;
int main()
{
    // sizeof() is used to find the size of data type in bytes.
    int a;
    cout << "Enter integer number:";
    cin >> a;
    cout << "Integer is "<< a << " and its size is " << sizeof(a) << " Bytes" << endl<< endl; 
    float b;
    cout << "Enter floating number:";
    cin >> b;
    cout << "Floating Number is "<< b << " and its size is " << sizeof(b) << " Bytes" << endl<< endl;
    char c;
    cout << "Enter Character:";
    cin >> c;
    cout << "Character is "<< c << " and its size is " << sizeof(c) << " Bytes " << endl<< endl;
    double e;
    cout << "Enter double int number";
    cin >> e;
    cout << "double int is "<< e << " and its size is " << sizeof(e) << " Bytes " << endl<< endl;
    string f;
    cout << "Enter String ";
    cin >> f;
    cout << "string is "<< f << " and its size is " << sizeof(f) << " Bytes " << endl<< endl;
    bool d;
    cout << "Enter Boolean value:";
    cin >> d;
    cout << "Boolean is "<< d << " and its size is " << sizeof(d) << " Bytes " << endl<< endl;
}
/*
output:
Enter integer number:10
Integer is 10 and its size is 4 Bytes

Enter floating number:3.14
Floating Number is 3.14 and its size is 4 Bytes

Enter Character:A
Character is A and its size is 1 Bytes 

Enter double int number:25.6789
double int is 25.6789 and its size is 8 Bytes 

Enter String Vishwas
string is Vishwas and its size is 32 Bytes 

Enter Boolean value:1
Boolean is 1 and its size is 1 Bytes
*/