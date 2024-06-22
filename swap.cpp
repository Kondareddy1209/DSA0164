#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void swapByreference(int  &a ,int &b){
     int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    cout<<"Before swap:x="<<a<<",y="<<b<<endl;
    swap(a, b);
    cout<<"After the swap:x="<<a<<",y="<<b<<endl;
    swapByreference(a,b);
    cout<<"After the swap:x="<<a<<",y="<<b<<endl;
    return 0;
}