#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void processInsert(string& data)
{
  string key, value;
  int pos, diff;
  pos=data.find(' ',7);
  diff=pos-7;
  key=data.substr(7,diff);
  value=data.substr(pos+1);
  cout<<key<<" "<<value<<endl;
}

void processCommand()
{
  string command, line, key;
  while(getline(cin,line))
	{
  	if(line.substr(0,6)=="insert")
  	{
    	processInsert(line);
  	}
		
	}  
}


void mainLoop()
{
  processCommand();
}

int main()
{
	mainLoop();
}
