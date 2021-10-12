#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i,j,loc,temp;
	for(i=0;i<10;i++)
	{
		cout<<"enter a number"<<endl;
		cin>>a[i];
	}
	for(i=0;i<9;i++)
	{
		loc=i;
		for(j=i+1;j<10;j++)
		{
			if(a[loc]>a[j])
			{
			
				loc=j;
	        }  
		}
			if(loc!=i)
			{	
		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
	}
	}
		cout<<"sorted array is"<<endl;
	for(i=0;i<10;i++)
	{
	
		cout<<a[i]<<" ";
	}
}
