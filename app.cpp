#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
void header();
int menu();
main()
{ 
    string name;
    int phoneNumber;
    string gender;
    string address;
    string email;
    string bodyType;
    int weight;
    int bodyFat;
    int BMI;
    string goal;
    int option;

    while (true)
    {
    header();
    int option = menu();
    if(option==1)
    {
      cout<<"Fill the Registration Form "<<endl;
      cout<<"Enter your Name: ";
      cin>>name;
      cout<<"Enter your phone number: ";
      cin>>phoneNumber;
      cout<<"Enter your gender: ";
      cin>>gender;
      cout<<"Enter your address: ";
      cin>>address;
      cout<<"enter your email: ";
      cin>>email;
    }
    if(option==2)
    {
        cout<<"Information about your body"<<endl;
        cout<<"Enter your body type: ";
        cin>>bodyType;
        cout<<"Enter your body weight (in kg): ";
        cin>>weight;
        cout<<"Enter your body fat percentage: ";
        cin>>bodyFat;
        cout<<"Enter your BMI: ";
        cin>>BMI;
        cout<<"Enter you goal from one of them(lean body, cutting, bulking, fitness): ";
        cin>>goal;
    }
        if (option==3)
        {
            cout<<"FEE structures are as follow";
            cout<<"Fees per month without treadmill is RS.1500"<<endl;
            cout<<"Fees per year without treadmill is RS.18000"<<endl;
            cout<<"Fees per month with treadmill is RS.2500"<<endl;
            cout<<"Fees per month with treadmill is RS.30000"<<endl;
            cout<<"Select your favourite program: "<<endl;
             }
             if (option==4)
             {
                return 0;
             }
             cout<<"Press any Key to continue: ";
             getch();
             system("cls");
         }
}
void header()
 {
 cout << "************************************************************" << endl;
 cout << "*                 GYM Management SYSTEM                    *" << endl;
 cout << "************************************************************" << endl;
 cout << endl;
 }
 int menu()
 {
 int option;
 cout << "Select one of the following options number..." << endl;
 cout << "1. Registration" << endl;
 cout << "2. Body Information" << endl;
 cout << "3. Fee Structure" << endl;
 cout << "4. Exit" << endl;
 cout << "Your Option..";
 cin >> option;
 return option;
 }