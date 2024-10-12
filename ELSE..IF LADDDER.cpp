#include<iostream>
using namespace std;
int main(){
int mark;
cout<<"enter your mark"<<endl;
cin>>mark;
if(mark>=70&&mark<100)
{
	cout<<"A"<<endl;
}
 else if
(mark>=60&&mark<69)
{
	cout<<"B"<<endl;
}
 else if(mark>=50&&mark<59)
{
	cout<<"C"<<endl;
}
 else if(mark>=40&&mark<49)
{
	cout<<"D"<<endl;
}
else if(mark>=0&&mark<39)
{
	cout<<"E"<<endl;
}
else(mark>=100&&mark<0);
{
	cout<<"invalid mark"<<endl;
}
return 0;
}