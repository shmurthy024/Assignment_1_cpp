Author: Shree Murthy
ID: 2374658
Email: shmurthy@chapman.edu

#include <iostream>
#include <string>

using namespace std;


//metric ton is 35,273.92 so use int
int main(){

  double metricTon = 35273.92;
  double packageOfCerealInOz;

  cout << "Enter the package of breakfast cereal in ounces: ";
  cin >> packageOfCerealInOz;

  cout << packageOfCerealInOz / metricTon << " metric tons" << endl;


  return 0;

}
