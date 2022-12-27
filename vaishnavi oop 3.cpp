#include<iostream>
using namespace std;
class publication
{
	public:
			string tittle;
			int price;
			void add()
			{
				cout<<"\n enter publication information";
				cout<<"\n enter tittle of publication:";
				cin>>tittle;
				cout<<"\n enter the price of publication:";
				cin>>price;
			}
			void display()
			{
				cout<<"\n tittle of publiction:"<<tittle;
				cout<<"\n price of publication:"<<price;
			}
};
class book:public publication
{
	public:
	int page_count;
	
	void add_book()
		{

			try
			{
				add();
				cout<<"\n enter the page count:";
				cin>>page_count;
			
				if(page_count<=0)
				throw page_count;
			} catch(...)
				{
		
					cout<<"invalid page count......";
					page_count=0;
				}
		}
		
	


void display_book()
	{
	
		display();
		cout<<"\n pagecount:"<<page_count;
	}
};
class tape:public publication
{
	public:
			float play_time;
	void add_tape()
	{
	try
		{
		add();
		cout<<"\n enter the play duration of tape:";
		cin>>play_time;
		
		if(play_time<=0)
			throw play_time;
		}  catch(...)
		 {
		
			cout<<"invalid play_time......";
			play_time=0;
	    }
		
	};


void display_tape()
	{
	
		display();
		cout<<"\n play_time:"<<play_time;
	}
};
int main()
{
		book b1[10];
		tape t1[10];
		int ch=0,b_count=0,t_count=0;
			do
			{
				cout<<"\n 1.add inforamtion to books:";
				cout<<"\n 2.add information to tape:";
				cout<<"\n 3.display information to book:";
				cout<<"\n 4.display imformation to book:";
				cout<<"\n 5.exit:";
				cout<<"\n enter choice:";
				cin>>ch;
				
				switch(ch)
				{
					case 1:
							b1[b_count].add_book();
							b_count++;
							break;
					case 2:
							t1[t_count].add_tape();
							t_count++;
							break;
					case 3:
							for(int j=0;j<b_count;j++)
							{
								b1[j].display_book();
							}
							break;
					case 4:
							for(int j=0;j<t_count;j++)
							{
								t1[j].display_tape();
								
							}
					case 5:
							exit(0);
							
							
						
				}
			}while(ch!=5);\
		
}


