#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
			string name,dob,blood_grp,addr,year_class,mob;
			int *rollno;//declaration of pointer
			int div; 
			student()
			{
				rollno=new int;// reserve single loaction for rollno
				*rollno=div=0;
				name=blood_grp=dob=addr=year_class=mob="";
			}
			~student()
			{
				delete rollno;//dealloaction of rollno
				
			}
			void add_data()
			{
				cout<<"n enter student inforamtiom:";
				cin>>name;
				cout<<"\n enter roll no:";
				cin>>*rollno;
				cout<<"enter year(SE/TE/BE):";
				cin>>year_class;
				cout<<"enter division:";
				cin>>div;
				cout<<"enter dob:";
				cin>>dob;
				cout<<"enter blood group:";
				cin>>blood_grp;
				cout<<"enter mob no:";
				cin>>mob;
				cout<<"enter address:";
				cin>>addr;
				
			}
			void display()
			{
				cout<<"\n name:"<<name;
				cout<<"\n roll no:"<<rollno;
				cout<<"\n year(SE/TE/BE):"<<year_class;
				cout<<"\n division:"<<div;
				cout<<"\n dob:"<<dob;
				cout<<"\n blood group"<<blood_grp;
				cout<<"\n mob no:"<<mob;
				cout<<"\n addressL:"<<addr;
		
				
			}//static member function
			static void header()
			{
				cout<<"\n ____student information system_______";
			}
			
};
int main()
{
	student s1[4];
	int ch=0,count=0;
	do
	{
		cout<<"\n 1.add information:";
		cout<<"\n 2.display information:";
		cout<<"\n 3.exit:";
		cout<<"\n enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				s1[count].add_data();
				count++;
				break;
			case 2:
				for(int j=0;j<count;j++)
				{   student::header();
					s1[j].display();
				}
				break;
			case 3:
				exit(0);
				
		}
	}while(ch!=3);
	return 0;
}




