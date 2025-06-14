// Here we have to check that two stings are anagrams or not 
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
bool isAnagaram(string a , string b){
    if(a.length() != b.length()){
        return false;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if( a == b){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<< isAnagaram("silent", "listen");
}