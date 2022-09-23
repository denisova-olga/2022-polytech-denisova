#include <iostream>
#include <cmath>
using namespace std; 
int main() 
{
    char op; 
    float n1, n2;
    for(;;)
    {
        cout << "number: "; 
        cin >> n1; 
        cout << $ "; 
        cin >> op; 
        cout << "number: ";
        cin >> n2;
        switch(op) 
        { 
            case '+': cout << n1+n2 << endl; 
            break; 
            case '-': cout << n1-n2 << endl; 
            break; 
            case '*': cout << n1*n2 << endl;
            break; 
            case '/': cout << n1/n2 << endl; 
            break;
            case '^': cout << pow(n1,n2) << endl;
            break; 
        } 
    
    }
return 0;
}
