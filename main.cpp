//Author:
#include<iostream>

using namespace std;

int main()
{

char edge;

  cout<<"What character do you want to know about?\n";
  cin>>edge;

    if(edge>='A' && edge<='Z')
    {

  //when user's entry is between A-Z...
  cout<<edge<<" is an upper case letter!\n";
}else if (edge>='a' && edge<='z')
{

  //when user's entry is between a-z...
  cout<<edge<<" is a lower case letter!\n";
}else
{
  //in all other cases...
  cout<<edge<<"?! Pssh. What are you talking about?\n";
 }

  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int)edge<<endl;


  return 0;
}
