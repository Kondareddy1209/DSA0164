#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0;
	cout<<"enter the numbers:";
	cin>>n;
	if(n<=0){
		cout<<"number is in positive:";
		return 1;
	}
	cout<<"enter the number:";
	for(int i=1;i<=n;i++){
		int number;
		cin>>number;
		sum+=number;
	}
	cout<<"the sum of first n numbers is:"<<sum<<endl;
	return 0;
}
