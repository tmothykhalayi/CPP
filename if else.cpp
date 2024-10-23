#include <iostream>
using namespace std;
int main()
{
int money;
cout<<"how much money you have:"<<endl;
cin>>money;
if(money>=1000)
{
	cout<<"money i have:"<<money<<endl;
	cout<<"lets have coffee in nairobi:"<<endl;
}
else if(money>=700)
{
cout<<"money i have:"<<money<<endl;
	cout<<"lets have coffee in kiambu:"<<endl;	
}
else if(money>=500)
{
cout<<"money i have:"<<money<<endl;
	cout<<"lets have coffee in eldoret:"<<endl;	
}
else if(money>=100)
{
	cout<<"lets have bread and buy tea at home:"<<endl;	
}
else
{
	cout<<"lets have tea:"<<endl;	
}
cout<<"lets go home:";
return 0;
}