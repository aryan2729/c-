#include <iostream>
using namespace std;

/*🔥 The Dynamic Initialization of the Object --> Means that the object is
initialized at the runtime. Dynamic initialization of the object using a
constructor is beneficial when the data is of different formats.
*/

class BankDeposit {

  int principal; // all 4 pvt cuz default :)
  int years;
  float interestRate;
  float returnValue;

public:

  BankDeposit(){}; // 🚀 We always need to have one default constructor cuz if u don't wanna run any (bd3 Object) now so we need to have default constructor to don't give e
  BankDeposit(int p, int y, float r); // Parameterized constructor | r is float
  BankDeposit(int p, int y, int r);   //                           | r is int
  void show();
};

BankDeposit :: BankDeposit(int p, int y, float r) {
  principal = p;
  years = y;
  interestRate = r;
  returnValue = principal;

  for (int i = 0; i < y; i++) {

    returnValue = returnValue * (1 + interestRate);
  }
}

BankDeposit ::BankDeposit(int p, int y, int r) {
  principal = p;
  years = y;
  interestRate = float(r) / 100;
  returnValue = principal;

  for (int i = 0; i < y; i++) {

    returnValue = returnValue * (1 + interestRate);
  }
}

void BankDeposit ::show() {
  cout << "The principal amount was " << principal;
  cout << " years is " << years;
  cout << " and return value is " << returnValue << endl;
}

int main() {

  BankDeposit bd1, bd2 , bd3 ; // 🚀 
  int p;
  int y;
  float r;
  int R;

  cout << "Enter the value of p , y and r " << endl;
  cin >> p >> y >> r;

  bd1 = BankDeposit(p, y, r);
  bd1.show();

  cout << "Enter the value of p , y and R " << endl;
  cin >> p >> y >> R;

  bd2 = BankDeposit(p, y, R);
  bd2.show();

  return 0;
}