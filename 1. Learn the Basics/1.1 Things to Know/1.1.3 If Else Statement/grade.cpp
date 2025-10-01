#include <iostream>
using namespace std;

/*A school has following rules for grading system:
a. Below 25 – F
b. 25 to 44 – E
c. 45 to 49 – D
d. 50 to 59 – C
e. 60 to 79 – B
f. 80 to 100 – A

Ask user to enter marks and print the corresponding grade.
*/

int main(){
    int marks;
    char grade;
    cin >> marks;
    if (marks < 25)
    {
        grade = 'F';
    }
    else if (marks < 45)
    {
        grade = 'E';
    }
    else if (marks < 50)
    {
        grade = 'D';
    }
    else if (marks < 60)
    {
        grade = 'C';
    }
    else if (marks < 80)
    {
        grade = 'B';
    }
    else if (marks < 101)
    {
        grade = 'A';
    }
   
    cout << "Your grade on marks " << marks << " is " << grade;
    
    
    return 0;
}