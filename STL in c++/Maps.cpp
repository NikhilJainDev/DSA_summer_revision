#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;
int main()
{

    // creation of map in STL c++ 
    map<int, int> m;
    m.insert(make_pair(10,110));
    m.insert(make_pair(20,145));
    m.insert(make_pair(40,160));
    m.insert(make_pair(80,155));
    m.insert(make_pair(40,110));   // key is duplicate so it will not insert 


    // printing map in c++ 

    for(auto it : m){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    return 0;

}