// https://www.facebook.com/permalink.php?story_fbid=2806378226310731&id=100008157437260
// Subscribed by isux gaming

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,b,area,peri;
	cin>>l>>b;
	area=l*b;
	peri=2*(l+b);
	if(area>peri)
	{
		cout<<"Area"<<endl;
		cout<<area<<endl;
	}
	else if(peri>area)
	{
		cout<<"Peri"<<endl;
		cout<<peri<<endl;
	}

	else
	{
		cout<<"Eq"<<endl;
		cout<<area<<endl;
	}
	
	return 0;
}
