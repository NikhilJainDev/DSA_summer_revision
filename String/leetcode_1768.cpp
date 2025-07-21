#include<iostream>
#include<cstring>
using namespace std;

string mergeAlternate(string str1, string str2){
     string result = "";
        int i = 0, j = 0;
        while (i < str1.length() && j < str2.length()) {
            result = result + str1[i];
            i = i + 1;
            result = result + str2[j];
            j = j + 1;
        }
// Append the Remaining part (if any) of string 1 

while(i< str1.length()){
    result = result + str1[i];
    i = i + 1;
}

// Append the Remaining part (if any) of string 2

while(j < str2.length()){
    result = result + str2[j];
    j = j + 1;
}

return result;
    }


int main(){
    string str1 = "ab";
    string str2 = "pqrs";
    cout << mergeAlternate(str1, str2);
    return 0;
}