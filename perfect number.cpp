#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter the number:";
	cin>>n;
	if(n<=0){
		cout<<"number is in positive"<<endl;
		return 0;
	}
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		cout<< n <<" is perfect number"<<endl;
	}
	else{
		cout<< n <<" is not  a perfect number"<<endl;
	}
	return 0;
}