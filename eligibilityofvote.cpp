#include <iostream>
using namespace std;

int main() {
    int age=0;
    cout<<"enter the age of the voter: ";
    cin>>age;
    if(age>=18){
        cout<<"you are eligible to vote";
    }
else{
    cout<<"sorry,you are eligible to vote after "<<18-age<<" years";
}
    return 0;
}
