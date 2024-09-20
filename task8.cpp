#include<iostream>
using namespace std;
main()
{
float vegPrice;
float fruitPrice;
int kg_of_veg;
int kg_of_fruit;
int total_in_coin;
float total_in_rupee;
int total_vegPrice;
int total_fruitPrice;
int total_coin;
cout<<"enter vegPrice=";
cin>>vegPrice;
cout<<"enter fruitPrice=";
cin>>fruitPrice;
cout<<"enter kg of veg=";
cin>>kg_of_veg;
cout<<"enter kg of fruit=";
cin>>kg_of_fruit;
total_vegPrice=((vegPrice)*(kg_of_veg));
total_fruitPrice=((fruitPrice)*(kg_of_fruit));
total_coin=(total_vegPrice)+(total_fruitPrice);
total_in_rupee=(total_coin)/(1.94);
cout<<"total in rupee="<<total_in_rupee;
}