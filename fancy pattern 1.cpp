#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	if(n>9)
	{
		cout<<"please enter the valid number for pattern which is less than ya equal to nine";
		return 0;
	}
	
	for(int i=0; i<n; i++){
		int start_num_index = 8-i;
		int num = i+1;
		int count_num =num;
		for(int j=0; j<=17; j++)
		{
			if(j==start_num_index && count_num > 0){
			
			cout<<num;
			start_num_index+=2;
			count_num--;
		}
		else{
			cout<<"*";
		}
	}
	cout<<endl;
}
return 0;
}
