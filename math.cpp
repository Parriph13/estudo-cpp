#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float n1, n2, res;
    char op;

    cout<<"\tCalcule\n";
    
    cout<<"Enter the first namber: \n";
    cin>>n1;

    cout<<"Enter the second namber: \n";
    cin>>n2;
    cout<<"Enter the operator: \n";
    cin>>op;
    

    switch (op) {
        case '+':
            cout<<"Result: \n"<<n1 + n2<<"\n";
            cout<<"\nCalculation: "<<n1<<" + "<<n2<<" = "<<n1 + n2;
            break;
        case '-':
            cout<<"Result: \n"<<n1 - n2<<"\n";
            cout<<"\nCalculation: "<<n1<<" - "<<n2<<" = "<<n1 - n2;
            break;
        case '*':
            cout<<"Result: \n"<<n1 * n2<<"\n";
            cout<<"\nCalculation: "<<n1<<" x "<<n2<<" = "<<n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                cout<<"Result: \n"<<n1 / n2<<"\n";
                cout<<"\nCalculation: "<<n1<<" / "<<n2<<" = "<<n1 / n2;
            } else 
                cout<<"\nFailed operation";
            break;
        case '%':
            res = fmod(n1, n2);
            cout<<"Result: "<<res<<"\n";
            cout<<"\nCalculation: "<<n1<<" % "<<n2<<" = "<<res;
            break;
        case '^':
            res = pow(n1, n2);
            cout<<"Result: "<<res<<"\n";
            cout<<"\nCalculation: "<<n1<<" ^ "<<n2<<" = "<<res;
            break;
        default:
            cout<<"\nInvalid value\n";
            break;
        
    }

    return 0;       


}

