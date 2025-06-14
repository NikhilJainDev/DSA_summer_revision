#include<iostream>
#include<vector>
using namespace std; 

// Zopper Interview Problem 

int main(){
    string s = "is2 sentence4 This1 a3";
vector<string> ans(10);
string temp;
int count = 0, index = 0;
while(index < s.size()){
    if(s[index] == ' '){
        // stopping condition 
        int pos = temp[temp.size()-1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        temp.clear();
        count = count + 1;

    }
    else{
        temp = temp + s[index];
    }
    index = index + 1;
}

// Handling the last statement 
 if(!temp.empty()){
        int pos = temp[temp.size()-1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        count = count + 1;
    }




temp.clear();
for(int i=1; i<=count; i++){
    temp = temp + ans[i];
    temp = temp + ' ';
}
temp.pop_back();

cout<<temp;

   
return 0;
}