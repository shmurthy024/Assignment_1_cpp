#include <iostream>
#include <string>

using namespace std;


//Overtime = (16 * 1.5)x
//SS Tax = .06 * gross pay
//Federal Tax = .14 * gross pay
//State tax = .05 * gross pay
//Medicare = 10x (where x is weeks)

int main(){

  float payRate = 16.00;
  short hoursWorked =  0;
  double grossPay;
  double netPay;

  cout << "How many hours did you work: " << endl;
  cin >> hoursWorked;

  //Full Time hours = 40
  //part time = < 40hrs
  if(hoursWorked <= 40){
    grossPay = payRate * hoursWorked;
  }
  if(hoursWorked > 40){
    grossPay = (payRate * 40) + (payRate * 1.5 * (hoursWorked - 40));
  }

  netPay = grossPay - ((grossPay * .06) + (grossPay * .14) + (grossPay * .05) + 10);


  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Amount witheld for Social Security Tax: $" << grossPay * .06 << endl;
  cout << "Amount witheld for Federal Income Tax: $" << grossPay * .14 << endl;
  cout << "Amount witheld for State Income Tax: $" << grossPay * .05 << endl;
  cout << "Amount witheld for medical insurance: $" << 10 << endl;
  cout << "Take-home pay: $" << netPay << endl;



  return 0;
}
