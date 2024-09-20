#include<iostream>
using namespace std;
main()
{
string name;
float weight_in_kg;
float days_to_lose_weight;
cout<<"Enter name=";
cin>>name;
cout<<"Enter weight in kg=";
cin>>weight_in_kg;
days_to_lose_weight=((weight_in_kg)*15);
cout<<"days to lose weight="<<days_to_lose_weight;
}