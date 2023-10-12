# include <iostream>
# include <conio.h>
# include <string>
std :: string projectTimeCalculation (int hrs, int days, int workers);
using namespace std;
main ()
{
    int hrs;
    int days;
    int workers;
    cout<<"Enter the needed hours: ";
    cin>>hrs;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all workers: ";
    cin>>workers;
    cout<<projectTimeCalculation(hrs, days, workers);
}

std :: string projectTimeCalculation (int hrs, int days, int workers)
{
    
    int hrsAvailable;
    int hrsNeeded;
    string shrsNeeded;
    string answer;
    
    hrsAvailable=((days*0.9)*10)*workers;
    if(hrsAvailable<hrs)
    {
        hrsNeeded=hrs-hrsAvailable;
        
        shrsNeeded=to_string(hrsNeeded);
        answer += "Not enough time! "+shrsNeeded+" hours needed.";
    }
    else{
        hrsNeeded=hrsAvailable-hrs;
        shrsNeeded=to_string(hrsNeeded);
        answer += "Yes!"+shrsNeeded+" hours left.";
    }
    return answer;

}