#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double n,square_root;
	cout<<"enter the number:";
	cin>>n;
	if (n>0){
		square_root=sqrt(n);
		cout<<"the square root of "<<n<<"is:"<<square_root<<endl;
	}else{
		cout<<"square root is not possible for "<<n<<endl;
	}
	return 0;
}