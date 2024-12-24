#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"ENTER AGE : ";
    cin>>age;
    if (age<18){
        cout<<"Not eligibe for job";
    }
    else if (age<=54){
        cout<<"Eligibe for job";
    }
    else if(age<=57){
        cout<<"Eligible for job, but retirement soon";
    }
    else{
        cout<<"Not Eligible";
    }
    return 0;
}