#include<iostream>
using namespace std;
main()
{
int size_of_fertilizer_bag;
int cost;
int area_that_can_be_covered;
int cost_of_fertilizer_per_pound;
int cost_of_fertilizer_per_square_foot;
cout<<"Enter size of fertilizer bag=";
cin>>size_of_fertilizer_bag;
cout<<"Enter cost="<<"$";
cin>>cost;
cout<<"Enter area that can be covered=";
cin>>area_that_can_be_covered;
cost_of_fertilizer_per_pound=((cost)/(size_of_fertilizer_bag));
cost_of_fertilizer_per_square_foot=((cost)/(area_that_can_be_covered));
cout<<"cost of fertilizer per pound="<<"$"<<cost_of_fertilizer_per_pound<<endl;
cout<<"cost of fertilizer per square foot="<<"$"<<cost_of_fertilizer_per_square_foot;
}