#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	typedef map<string,int>maptype;
	maptype populationmap;//crate a empty class
	
	populationmap.insert(pair<string,int>("maharastra",1234557));
	populationmap.insert(pair<string,int>("rajasthan",1234590));
	populationmap.insert(pair<string,int>("ghjrat",5634557));
	populationmap.insert(pair<string,int>("bhutan",1256557));
	populationmap.insert(pair<string,int>("punjab",1234677));
	populationmap.insert(pair<string,int>("madhya pradesh",1234557));
	
	maptype::iterator iter;
	
	cout<<"\n size of population:"<<populationmap.size()<<"\n";
	
	string state_name;
	cout<<"\n enter name of the state:";
	cin>>state_name;
	
	iter=populationmap.find(state_name);
	if(iter !=populationmap.end())
		cout<<state_name<< "a population is"<<iter->second;
	else 
		cout<<" key is not in populationmap"<<"\n";
	
	populationmap.clear();
}


