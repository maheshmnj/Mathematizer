# https://m.facebook.com/story.php?story_fbid=2746412395598393&id=100006889785546
# Subscribed by Nitish Kumar

#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n],i,temp,count=0;
cout<<"entr the array elements: ";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\n final array is : ";
while(1)
{
for(i=0;i<n;i++)
{
if(arr[i]==0)
{
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
}
count++;
if(count>n)
{
break;
}
}

for(i=0;i<n;i++)
{
if(arr[i]==0)
{
arr[i-1]=0;
break;
}
}
for(i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
}
