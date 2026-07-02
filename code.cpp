#include <bits/stdc++.h>
using namespace std;

int main() {
    string s , t;
    
    cin>>s>>t;
    
   




    for (char &c : s) {
        
         c = tolower(c);
   
    }
       for (char &n : t) {
        
         n = tolower(n) ;
   
    }
    if (s == t)
        cout << 0;
    else if (s < t)
        cout << -1;
    else
        cout << 1;
    
  




    return 0;
}