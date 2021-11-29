#include "op.h"
#include <iostream>

using namespace std;

int n1, n2;
char op;

void num()
{
    cout << "Enter 1st Number : ";
    cin >> n1;

    cout << "Select Operator (+ - * /) : ";
    cin >> op;

    cout << "Enter 2nd Number : ";
    cin >> n2;
}

void total()
{
    cout << "Total is : " << n1 + n2 << "\n";
}
void sub()
{
    cout << "Sub is : " << n1 - n2 << "\n";
}
void mul()
{
    cout << "Multiplication is : " << n1 * n2 << "\n";
}
void div()
{
    cout << "Division is : " << n1 / n2 << "\n";
}
void endp()
{
    cout << "Thank you for using my cal";
}
void errorp()
{
    cout << "You selected wrong operator";
}
void cal()
{
        switch(op){
        case '+':
            total();
            break;

        case '-':
            sub();
            break;

        case '*':
            mul();
            break;
        case '/':
            div();
            break;

        default:
            if(op == 'F'){
                endp();
            }else{
                errorp();
            }
        }
}
