#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define M 1000000007
using namespace std;


int main()
{
    char c;
    float num1, num2;
    cout << "Enter +, -, *, /";
    cin >> c ;
    cout << "Enter two numbers";
    cin >> num1 >> num2;

    switch(c) //calculating as per the operater entered 
    {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            //if invalid input
            cout << "Invalid Input";
            break;
    }

    return 0;
}
