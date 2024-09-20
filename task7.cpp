#include<iostream>
using namespace std;
main()
{
string movie;
int adult_ticket_price;
int child_ticket_price;
int no_of_adult_ticket_sold;
int no_of_child_ticket_sold;
float percentage_charity;
int total_amount;
int remaining_amount;
int total_adult_ticket_price;
int total_child_ticket_price;
float donation_charity;
cout<<"enter movie=";
cin>>movie;
cout<<"enter adult ticket price="<<"$";
cin>>adult_ticket_price;
cout<<"enter child ticket price="<<"$";
cin>>child_ticket_price;
cout<<"enter no of adult ticket sold=";
cin>>no_of_adult_ticket_sold;
cout<<"enter no of child ticket sold=";
cin>>no_of_child_ticket_sold;
cout<<"enter percentage charity=";
cin>>percentage_charity;
total_adult_ticket_price=((adult_ticket_price)*(no_of_adult_ticket_sold));
total_child_ticket_price=((child_ticket_price)*(no_of_child_ticket_sold));
total_amount=(total_adult_ticket_price)+(total_child_ticket_price);
donation_charity=(((percentage_charity)/100)*(total_amount));
remaining_amount=(total_amount)-(donation_charity);
cout<<"movie:"<<movie<<endl;
cout<<"total amount:"<<"$"<<total_amount<<endl;
cout<<"donation charity:"<<"$"<<donation_charity<<endl;
cout<<"remaining amount:"<<"$"<<remaining_amount;
}