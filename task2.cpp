#include<iostream>
using namespace std;
main()
{
int number_of_min;
float frames_per_sec;
int number_of_sec;
int number_of_frames;
cout<<"Enter number of min=";
cin>>number_of_min;
cout<<"Enter frames per sec=";
cin>>frames_per_sec;
number_of_sec=((number_of_min)*60);
number_of_frames=((frames_per_sec)*(number_of_sec));
cout<<"number of frames="<<number_of_frames;
}