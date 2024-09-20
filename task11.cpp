#include<iostream>
using namespace std;
main()
{
int age,no_of_times_moved,no_of_houses,average_no_of_years_lived_in_the_same_house;;
cout<<"enter age=";
cin>>age;
cout<<"enter no of times moved=";
cin>>no_of_times_moved;
no_of_houses=(no_of_times_moved)+1;
average_no_of_years_lived_in_the_same_house=(age)/(no_of_houses);
cout<<"average no of years lived in the same house:"<<average_no_of_years_lived_in_the_same_house;
}