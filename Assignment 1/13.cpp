#include <bits/stdc++.h>
#include<math.h>
#define ll unsigned long long int
#define M 1000000007
using namespace std;

void rev(string s, int start , int end) {
    int n = end - start + 1; 
    for (int i = 0; i < n / 2; i++) { // reversing the substring
        swap(s[i + start], s[n - i - 1 + start]); 
    }	
    for (int i = 0; i < s.length(); i++) {  // printing the result
        cout << s[i] ;
    }	

}
int main()
{
    string s ; //declaring and scanning variables
    int start, end ;
	cin >> s ;
	cin >> start >> end ; //starting and ending indices of the string to be reversed
    rev(s, start, end); //function to reverse the substring
    return 0;
}

