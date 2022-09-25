#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
string service, NameOfEvent, CustomerName, NameOfmeal;	// Name of Event + Customer Name
double NumberOfGuests;	// Number of Guests in attendance
int NumberOfminute;	// Number of Minutes in the event

// Information input (Events name and amounts)

cout<<"                ****************************"<< " Welcome to The KAJAL catring service "<<"****************************"<< endl;
cout <<endl<<"(1)"<< " Enter the name of the event here "<< endl<<"--->";
getline(cin, NameOfEvent);
cout <<endl<< "(2) Enter the customer's first name and last name " << endl<<"--->";
getline(cin, CustomerName);
cout <<endl<< "(3) Enter the number of guests " << endl<<"--->";
cin >> NumberOfGuests;
cout << "\n\n(4) Enter the number of minute in the event (Minimum 60) " << endl<<"--->";
cin >> NumberOfminute;

cout <<endl<< "(5) Enter Name of your meal " << endl<<"--->";
cin>>NameOfmeal;
cout<<endl<<"                   <<<<<<<<< Your "<<NameOfmeal<<" >>>>>>>>>"<<endl;
cout << "\n=>The Event estimate for you Dear  " << CustomerName <<" is as :"<< endl;

int NumberOfServers, Cost1;
double CostForOneServer,Test, TotalFoodCost, AverageCost, Cost2, DepositAmount,TotalCost;

const double CostPerHour = 18.50;
const double CostPerMinute = .40;
const double CostOfDinner = 20.70;

// Get Number Of Servers
Test = NumberOfGuests / 20;
NumberOfServers = ceil(Test);
cout<<endl;

// Get Cost Of One Server
Cost1 = (NumberOfminute / 60) * CostPerHour;
Cost2 = (NumberOfminute % 60) * CostPerMinute;
CostForOneServer = Cost1;

// Get Cost For Food
TotalFoodCost = NumberOfGuests * CostOfDinner;

// Get Average Cost Per Person
AverageCost = TotalFoodCost / NumberOfGuests;

// Get Total Cost
TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);

// Get Deposit Amount (25%)
DepositAmount = TotalCost * .25;

// Print values above
cout << "Number Of Servers Required: " << NumberOfServers << fixed << setprecision(2) << endl;
cout << "\nThe Cost for Servers: " << setw(5) << CostForOneServer << endl;
cout << "The Cost for Food is: " << setw(5) << TotalFoodCost << endl;
cout << "Avergae Cost Per Person: " << setw(5) << AverageCost << endl;
cout << "\nAnd the Total cost is: " << setw(5) << TotalCost << endl;

cout << "\n\nYou have to deposite a 25% of total ammount to reserve the event" << endl;
cout<<"and pay rest 75% after the event completed "<<endl;
cout <<endl<< "The deposit you needed to pay is: " << setw(5) << DepositAmount << endl;
cout<<endl<<"                 ***************************Thank You for choosing our services***************************";

return 0;
}