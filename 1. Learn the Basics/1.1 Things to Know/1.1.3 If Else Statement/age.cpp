#include <iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if (age>17)
    {
        cout << "You are an adult.";
    }
    else if (age<18 && age>12)
    {
        cout << "You are a teenager." ;
    }
    
    else
    {
        cout << "You are not an adult neither a teenager.";
    }

    return 0;
}