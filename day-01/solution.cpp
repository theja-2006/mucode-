#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int nums[10],N;
	cout<<"Enter array elements\n:";
	for(int i=0;i<10;i++)
	{
		cin>>nums[i];
	}
	cout<<"Enter index";
	cin>>N;
	for(int j=0;j<=N;j++)
	{
		bool isPrime=true;
		if(nums[j]<=1)
			isPrime=false;
		for(int i=2;i*i<=nums[j];i++)
		{
			if(nums[j]%i==0)
			{
				isPrime=false;
				break;
			}
		}
		if(isPrime)
			cout<<nums[j];
	}
	return 0;
}
