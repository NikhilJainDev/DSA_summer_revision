// longest palindrome of a string 
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{

    string s = "aabbcbadad";
    int ans = 0;
    vector<int> alpha(26,0);
    for(int i= 0; i<s.size(); i++){
        int idx = s[i] - 'a';
        alpha[idx] = alpha[idx] + 1;
    }

    for(int i=0; i<alpha.size(); i++){
        if(alpha[i] % 2 == 0){
            ans = ans + alpha[i];
        }
       else{
         ans = ans + alpha[i] - 1;
       }
    }

    ans = ans + 1;

    cout<<" Longest Palindrome of size is : "<<(ans)<<endl;



return 0;
}