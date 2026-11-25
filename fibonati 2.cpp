# include <iostream>
using namespace std;
int main(){
	int a=0,b=1,c,num;
	cout<<"Enter number \n";
	cin>>num;
	for(int i=0;i<num;i++){
		c=a+b;
		a=b;
		b=c;
		cout<<c;
	}
return 0;
}