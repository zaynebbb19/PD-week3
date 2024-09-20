#include<iostream>
using namespace std;
main()
{
int numb;
int mod1;
int mod2;
int mod3;
int mod4;
int numb1;
int numb2;
int numb3;
int numb4;
int sum;
cout<<"enter numb=";
cin>>numb;
mod1=numb%10;
numb1=numb/10;
mod2=numb1%10;
numb2=numb1/10;
mod3=numb2%10;
numb3=numb2/10;
mod4=numb3%10;
numb4=numb4/10;
sum=mod1+mod2+mod3+mod4;
cout<<"sum="<<sum;
}