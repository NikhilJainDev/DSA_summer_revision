#include<iostream>
using namespace std;
int main()
{
    // Pair Container is By Default Present in c++ 
    pair<int, int> p = {25, 28};

    cout<<" First el of pair is : "<<p.first<<endl;
    cout<<" Second element of pair is : "<<p.second<<endl;

    // Create a pair of different data types 
    pair <string, float> info  =  {" Nikhil Jain ", 78569.56};

    cout<<" Name  is : "<<info.first<<endl;
    cout<<" Salary is : "<<info.second<<endl;
    
    cout<<" --------------------------------------- "<<endl;
    pair < pair<string, int> , pair<float , char> > pr = {{"Bachelor of Technology (B.Tech)", 4}, {84.60, 1}};
    string ans;
    if(pr.second.second == 1){
         ans = "PASS";
    }
    else{
        ans = "NO";
    }
    cout<<" Name of Course : "<<pr.first.first<<endl;
    cout<<" Course Duration : "<<pr.first.second<<endl;
    cout<<" Percentage : "<<pr.second.first<<endl;
    cout<<" Is_Pass "<<ans<<endl;

return 0;
}