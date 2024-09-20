#include<iostream>
using namespace std;
main()
{
int noOfsquareMeteryouCanprint,area,width,height,noOfwallsYoucanPrint;
cout<<"enter no of squaremeter you can paint:";
cin>>noOfsquareMeteryouCanprint;
cout<<"enter width:";
cin>>width;
cout<<"enter height:";
cin>>height;
area=height*width;
noOfwallsYoucanPrint=(noOfsquareMeteryouCanprint)/area;
cout<<"no of walls you can print:"<<noOfwallsYoucanPrint;
}