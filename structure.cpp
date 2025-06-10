#include<iostream>
#include<algorithm>
using namespace std;

// Defining Structure 

// struct Student_Info{

//     string student_name;
//     string Reg_no;
//     string is_BackLog;
//     float matric_percent;

//     void SetData(){
       
//         cout<<" Enter the Name of Student : "<<" ";
//         getline(cin, student_name);
//         cout<<" Enter Registration Number : "<<" ";
//         cin>>Reg_no;
//         cout<<" Is Any Backlog ( Yes / No )"<<" ";
//         cin>>is_BackLog;
//         cout<<" Matric Percentage : "<<" ";
//         cin>>matric_percent;
    
//     }  

// };

// Defining a Small Structure or Union 

struct Info{

    string name; // 8 byte
    int age; // 4 byte
    float salary; // 4 byte
    char grader; // 1 byte
};

union Data
{
     string name; // 8 byte
    int age; // 4 byte
    float salary; // 4 byte
    char grader; // 1 byte
    double mobile_number; // 8 byte  
};



int main(){
    // Main Function 

//    struct Student_Info Si;
//    Si.SetData();
//    cout<<" ------------------- Student Information --------------------- "<<endl;
//    cout<<" Name of Student is : "<<Si.student_name<<endl;
//    cout<<" Registration No : "<<Si.Reg_no<<endl;
//    cout<<" Is Backlog : "<<Si.is_BackLog<<endl;
//    cout<<" Matric Percentage : "<<Si.matric_percent<<endl;
//    cout<<" ------------------------------------------------------------- "<<endl;

cout<<sizeof(Info)<<endl;
cout<<sizeof(Data)<<endl;
 
    return 0;
}