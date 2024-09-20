#include<iostream>
using namespace std;
main()
{
int sides_of_polygon;
int sum_of_internal_angles_of_polygon;
cout<<"Enter the sides of polygon=";
cin>>sides_of_polygon;
sum_of_internal_angles_of_polygon=(((sides_of_polygon)-2)*180);
cout<<"sum of internal angles of polygon="<<sum_of_internal_angles_of_polygon;;
}