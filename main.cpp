#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int getTotal(int [], int);
int largest(int [], int);
int smallest(int [], int);

int main(){
  const int NUM_TYPES = 5;
  
  string types[NUM_TYPES]{
    "mild",
    "sweet",
    "hot",
    "zesty"
  };

  int sales[NUM_TYPES];
  int highSales;
  int lowSales;

  for (int type =0; type < NUM_TYPES; type++)
  {
    cout << "Jars sold last month of "
         << types[type] << ": ";
    cin >> sales[type];

    while (sales[type] < 0)
    {
      cout << "Jars sold must be 0 or more. "
           << "Please re-enter: ";
      cin >> sales[type];
    }
  }
  totalJarsSold = getTotal(sales, NUM_TYPES);


}
