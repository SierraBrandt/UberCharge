//Calulates charge of Uber ride
//Author: Sierra Brandt
#include <iostream>
using namespace std;

int main() {
  double airportFee = 2.51, upFrontCharge = 3.72, uberCharge = 19.46,
  tip = 0.08 * (upFrontCharge + uberCharge), total = airportFee + upFrontCharge + uberCharge + tip;

  cout << "Airport Fee: " << airportFee << "\n";
  cout << "Up Front Charge : " << upFrontCharge << "\n";
  cout << "Uber Charge: " << uberCharge << "\n";
  cout << "Tip: " << tip << "\n";
  cout << "Total: " << total << "\n";

}