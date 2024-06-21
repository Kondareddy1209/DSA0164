#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double n,cube_root;
	cout<<"enter the number:";
	cin>>n;
	if (n>0){
		cube_root=cbrt(n);
		cout<<"the cube root of "<<n<<"is:"<<cube_root<<endl;
	}else{
		cout<<"cube root is not possible for "<<n<<endl;
	}
	return 0;
}