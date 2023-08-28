#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const double tax = 6.75;
  const double tip = 20;
  double mealcharge = 88.67;
  double tipamount;
  double taxamount;
  double total;

  /* ************************************
    Code your program here
  ************************************ */

  cout << setprecision(2) << fixed;
  cout << "Meal Cost: " << mealcharge << endl;
  cout << "Tax Amount: " << taxamount << endl;
  cout << "Tip Amount: " << tipamount << endl;
  cout << "Total Amount: " << total << endl;
}
