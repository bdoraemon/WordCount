#include<iostream>
#include<fstream>
#include <sstream>
#include<string>
using namespace std;
int main()
{
	ifstream File;
	stringstream buf;
	string data;
	char put[3];
	char ch[100];
	cin>>put;
	cin>>ch;
	File.open(ch);
	buf << File.rdbuf(); 
	data=buf.str();
	int i;
	int count;
	if(put[1]=='c')
	{
		count=0;
		for(i=0;;i++)
		{
			if(data[i]=='\0')
			break;
			count++;
		}
			cout<<"×Ö·ûÊý£º"<<count<<endl;
	}
	else
	{
		count=1;
		for(i=0;;i++)
		{
			if(data[i]=='\0')
			break;
			if(data[i]==' '||data[i]==',')
			count++;
		}
			cout<<"µ¥´ÊÊý£º"<<count<<endl;
	}

	File.close();
	return 0;
 } 
