#include<iostream>
using namespace std;
main()
{
float imposter_count;
float player_count;
float chance_of_being_an_imposter;
cout<<"Enter imposter count=";
cin>>imposter_count;
cout<<"Enter player count=";
cin>>player_count;
chance_of_being_an_imposter=(100*(imposter_count/player_count));
cout<<"chance of being an imposter="<<chance_of_being_an_imposter<<"%";
}