//The C++ program to print digits in left align right angle triangle .
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"The number of rows you want : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int num =1;
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
    return 0;
}