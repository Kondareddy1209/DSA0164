#include<iostream>
using namespace std;
class series{
    private:
    int number;
    public:
    void input(){
        cout<<"enter the number:";
        cin>>number;
    }
    void show(){
        int a=0;
        int b=1;
        int c;
        cout<<"Fibonacci series upto:\n "<<number<<"\nterms";
        for(int i=0;i<=number;i++){
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
        }
        cout<<endl;
    }
};
int main(){
    series series;
    series.input();
    series.show();
    return 0;
}