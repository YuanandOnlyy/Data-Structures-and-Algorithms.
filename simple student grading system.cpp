#include <iostream>
using namespace std;

int main(){
    int ex1;
    int ex2;
    int ex3;
    float ave;
    float sum;
    cout<<"Enter the score for exam 1:";
    cin>>ex1;
    cout<<"Enter the score for exam 2:";
    cin>>ex2;
    cout<<"Enter the score for exam 3:";
    cin>>ex3;

    sum=ex1+ex2+ex3;
    ave=sum/3;
    cout<<"Average Score:"<<ave<<endl;

    if (ave >= 70){
        cout<<"Result:Passed!";
    }
    else{
        cout<<"Result:Failed!";
    }
}
