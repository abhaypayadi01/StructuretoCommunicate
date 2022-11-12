#include <iostream>
#include "read.h"

using namespace std;



int main()
{
    
    state s1;
    cout << "Enter Full c: ";
    cin.get(s1.c, 5);
    cout << "Enter a: ";
    cin >> s1.a;
    cout << "Enter b: ";
    cin >> s1.b;
     display(s1);

    

    return 0;
}