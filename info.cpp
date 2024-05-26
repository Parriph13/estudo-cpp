#include <iostream>
using namespace std;

int main(){
    string name, sex;
    float wage;
    int age;

    cout<<"\nPersonal Date\n";
    cout<<"\nEnter your name: ";
    cin>>name;
    cout<<"\n";
    cout<<"\nEnter your age: ";
    cin>>age;
    cout<<"\n";
    cout<<"\nEnter your salary: ";
    cin>>wage;
    cout<<"\n";
    cout<<"\nType (m) for masculine, or (f) for feminine and.\n";
    cout<<"And press enter to confirm:\n";
    cin>>sex;
    cout<<"\n";

    if(sex == "m"){
        cout<<"\tPersonal Date\n";
        cout<<"Name : "<<name<<"\n";
        cout<<"Age: "<<age<<"\n";
        cout<<"Sex: Masculine";

    } else if(sex == "f"){
        cout<<"\tPersonal Date\n";
        cout<<"Name : "<<name<<"\n";
        cout<<"Salary: "<<wage<<"\n";
        cout<<"Sex: Feminine";
    } else {
        cout<<"invalid value";
    }

    return 0;
}