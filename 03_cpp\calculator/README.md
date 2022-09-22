#include <iostream>
using namespace std; 
int main() 
{
    char op; 
    float n1, n2; 
    cout << " + or - or * or / ?"; 
    cin >> op; 
    cout << "two numbers: "; 
    cin >> n1 >> n2; 
    switch(op) 
    { 
        case '+': cout << n1+n2; 
        break; 
        case '-': cout << n1-n2; 
        break; 
        case '*': cout << n1*n2;
        break; 
        case '/': cout << n1/n2; 
        break; 
        default:  
        cout <"we have a little problem"; 
        break; 
    } 
return 0;
}
