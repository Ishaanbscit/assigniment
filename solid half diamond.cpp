#include<iostream>
using namespace std;
int n;
int main()
{
	cout<<"enter the value for n";
	cout<<endl;
	cin>>n;
	
	for(int i=0; i<2*n-1; i++)
	{
		int cond=0;
		if(i<n){
			cond=i;
		}
		else{
			cond=n-(i%n)-2;
		}
		//int cond=i < n ? i: n-(i%n) -2; ->terinary operatter
		for(int j=0; j<=cond;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}