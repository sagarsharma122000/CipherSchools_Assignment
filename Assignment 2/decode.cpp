#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void printdecode(string st,string out)
{
	if(st.length()==0)
	{
		cout<<out<<endl;
		return;
	}
	
	string fc = st.substr(0,1);
	int fn  = stoi(fc);
	
	if(fn!=0)
	{
		char c = (char)('a'+fn-1);
		printdecode(st.substr(1),out+c);
	}
	
	if(st.length() <=1)
	{
		return;
	}
	 string ftc = st.substr(0,2);
	 int ftn = stoi(ftc);
	 
	 if(ftn<=26)
	 {
	 	char ch = (char)('a'+ftn-1);
	 	printdecode(st.substr(2),out+ch);
	 }
}

int main()
{
	string st;
	cin>>st;
	printdecode(st,"");
}

