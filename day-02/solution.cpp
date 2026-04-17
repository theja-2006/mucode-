#include<iostream>
using namespace std;
int main()
{
int size,N;
cout<<"Enter size of array:\n";
cin>>size;
int nums[size];
cout<<"Enter array elements\n:";
	for(int i=0;i<size;i++)
	{
		cin>>nums[i];
	}
	cout<<"Enter index";
	cin>>N;
	if(N==0 || N>=size)
	{
	        cout<<"enter valid index";
	        return 0;
	}
	int l=nums[0],s=-1;
	for(int i=1;i<=N;i++)
	{
	    if(nums[i]>l && nums[i]!=l)
	    {
	        s=l;
	        l=nums[i];
	    }
	}
cout<<s;
return 0;
}
