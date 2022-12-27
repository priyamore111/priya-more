#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class student
{
	public:
			string name;
			int rollno;
			
			void add_info()
			{
				fstream fs;
				fs.open("vaishnavi.txt",ios::app);
				if(!fs)
					cout<<"file creation failed........";
				else
				{
					//cout<<"file is created....";
					cout<<"\n enter name:";
					cin>>name;
					cout<<"\n enter roll no:";
					cin>>rollno;
					fs<<name<<" ";
					fs<<rollno<<"\n";
					fs.close();
				}
			}
			void display_info()
			{
				fstream fs;
				fs.open("vaishnavi.txt",ios::in);//opening file in inputmode
				if(!fs)
					cout<<"no such file......";
				else
					{
						while(!fs.eof())//read till end of the file
						{
							fs>>name;
							fs>>rollno;
							cout<<name<<" ";
							cout<<rollno;
							cout<<"\n";
						}
						fs.close();
					}
						
				
					
				
			}

};
int main()
{
	int ch;
	student s;
	fstream fs;
	
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
					s.add_info();
					break;
			case 2:
					s.display_info();
					break;
			case 3:
					exit(0);
		}
	}while(ch!=3);
	return 0;
}
					
					

	

