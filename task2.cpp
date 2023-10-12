#include<iostream>
#include<string>
using namespace std;
std :: string meters(int length, int width, int height);
std :: string millimeteres(int length, int width, int height);
std :: string centimeteres(int length, int width, int height);
std :: string kilometers(int length, int width, int height);
void volume(int length, int width, int height);
main()
{
   int length;
   int width;
   int height;
   string option;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeteres, meters, kilometers): ";
    cin>>option;
    if (option=="meters")
    {
        cout<<"The volume of pyramid is: "<<meters(length, width, height)<< "cubic meters";
    }
    if (option=="kilometers")
    {
        cout<<"The volume of pyramid is: "<<kilometers(length, width, height)<< "cubic meters";
    }
    if (option=="millimetres")
    {
        cout<<"The volume of pyramid is: "<<millimeteres(length, width, height)<< "cubic meters";
    }
    if (option=="centimeters")
    {
        cout<<"The volume of pyramid is: " << centimeteres(length, width, height) << "cubic meters";
    }
    }
std :: string meters(int length, int width, int height)
{
    int answer;
    string finalAnswer;
  answer=(length*width*height)/3;
  finalAnswer=to_string(answer);
  return finalAnswer;
}
std :: string kilometers(int length, int width, int height)
{
    int answer;
    string finalAnswer;
    answer=((length*width*height)/3)/1000;
    finalAnswer=to_string(answer);
    return finalAnswer;
}
std :: string millimeteres(int length, int width, int height)
{
    int answer;
    string finalAnswer;
    answer=((length*width*height)/3)*1000;
    finalAnswer=to_string(answer);
    return finalAnswer;
}
std :: string centimeteres(int length, int width, int height)
   
    {
    int answer;
    string finalAnswer;
    answer=((length*width*height)/3)*100;
    finalAnswer=to_string(answer);
    return finalAnswer;
    }




