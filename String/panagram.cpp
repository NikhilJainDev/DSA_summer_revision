#include<iostream>
#include<vector>
using namespace std;

bool isPanagram(string str){
    vector<int> arr(26,0);
    for(int i=0; i<str.size(); i++){
        int index = str[i] - 'a';
        arr[index] = 1;
    }

    // check Panagram condition 
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 0){
            return false;
        }
    }
    return true;
}

int main(){

    string str = "the quick brown fox jumps over the lazy dog";
    string str2 = "hello all my name is nikhil jain";
    cout<< isPanagram(str); cout<<endl;
    cout<<isPanagram(str2);

    return 0;
}