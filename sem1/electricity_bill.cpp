#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main ()
{
  int cust_no, unit_con;
  float charge, surcharge = 0, amt, total_amt;
  char nm[25];

  cout<<"Enter the customer ID NO :\n";
  cin>>cust_no;
  cout<<"Enter the customer Name :\n";
  cin>>nm;
  cout<<"Enter the unit consumed by customer  :\n";
  cin>>unit_con;

  if (unit_con < 200)
    charge = 0.80;
  else if (unit_con >= 200 && unit_con < 300)
    charge = 0.90;
  else
    charge = 1.00;

  amt = unit_con * charge;
  if (amt > 400)
    surcharge = amt * 15 / 100.0;
  total_amt = amt + surcharge;

  cout<<"--------Electricity Bill--------\n";
  cout<<"Customer ID NO\n"<<cust_no<<endl;
  cout<<"Customer Name\n"<<nm<<endl;
  cout<<"Unit Consumed\n"<<unit_con<<endl;
  cout<<"Surcharge Amount\n"<<surcharge<<endl;
  cout<<"Minimum meter charge Rs 100\n";
  cout<<"Net Amount Paid By the Customer is "<<total_amt + 100<<endl;
  return 0;
}
