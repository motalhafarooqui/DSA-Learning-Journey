#include <iostream>
using namespace std;

int main(){
    string s = "Striver";
    int len = s.size();
    cout << len << endl;
    s[len -1] = 'z';
    cout << s;

    return 0;
}