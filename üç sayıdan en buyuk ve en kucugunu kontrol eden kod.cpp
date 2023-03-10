#include<iostream>
using namespace std;
int main()
{
int x,y,z;
cout<<"birinci sayiyi giriniz"<< endl;
cin>>x;
cout<<"ikinci sayiyi giriniz"<< endl;
cin>>y;
cout<<"ucuncu sayiyi giriniz"<< endl;
cin>>z;

if(x>y&&x>z)
{
	cout<<"enbuyuk:"<< x;
	if(y<z)
	cout<<"enkucuk:"<< y;
	else
	cout<<"enkucuk:"<< z;
}
if(y>z&&y>x)
{
	cout<<"enbuyuk:"<< y;
	if(z<x)
	cout<<"enkucuk:"<< z;
	else
	cout<<"enkucuk:"<< x;
}
 if(z>y&&z>x)
{
cout<<"enbuyuk:"<< z;
if(y<x)
cout<<"enkucuk:"<< y;
else
cout<<"enkucuk:"<< x;
}
}
