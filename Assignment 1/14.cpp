#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define M 1000000007
using namespace std;

int main() {
   int n, sum = 0 , temp, r, d ; //initialising and declaring variables
   cin >> n ; 
   temp = n;
   while (temp != 0) { //calculating number of digits in n
      d++;
      temp = temp/10;
   }
   temp = n;
   sum = 0;
   while (temp != 0) { //calculating if armstronog or not
      r = temp%10;
      sum += pow(r, d);
      temp = temp/10;
   }
   if (n == sum) // if equal then armstrong number else not
   cout << "ARMSTRONG";
   else
   cout<<"NOT ARMSTRONG";
   return 0;
}
