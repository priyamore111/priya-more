#include<iostream>
using namespace std;
template<typename t>
void sort(t a[],int n)
{
	int pos_min,i;
	t temp;
	for(int i=0;i<n-1;i++)
	{
		pos_min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[pos_min])
				pos_min=j;
		}
			temp=a[i];
			a[i]=a[pos_min];
			a[pos_min]=temp;
		}
		cout<<"\n sorted element are:";
		for(i=0;i<n;i++)
			cout<<"\t"<<a[i];
}
int main()
{
	int n,i,ch;
	int a[10];
	float b[10];
	
	do
	{
		cout<<"\n selection sort using function template";
		cout<<"\n 1.sort interger number:";
		cout<<"\n 2.sort float number:";
		cout<<"\n 3.exit";
		cout<<"\n enter your choice:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
					cout<<"\n sorting integer number";
					cout<<"\n enter the number wanted to sort:";
					cin>>n;
					for(i=0;i<n;i++)
						cin>>a[i];
					sort<int>(a,n);
					break;
			case 2:
					cout<<"\n sorting floating number";
					cout<<"\n enter the number wanted to sort:";
					cin>>n;
					for(i=0;i<n;i++)
						cin>>b[i];
					sort<float>(b,n);
					break;
			case 3:
					exit(0);
				
		}
	}while(ch!=3);
	return 0;

}
