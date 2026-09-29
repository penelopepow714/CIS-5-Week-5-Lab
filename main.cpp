#include <iostream>

// Lab 5 — Your Name
// CIS 5 Week 05 · Eligibility check

int main() {
  using std :: cout;
  using std :: cin;
  using std :: endl;
  using std :: string;
  int age = 0;
  double GPA = 0.0;

  // TODO: cout question, then cin, for age and for gpa
  cout << "Age?: ";
  cin >> age;

  cout << "GPA?: ";
  cin >> GPA;

  // Thresholds: adult at 18, honors at 3.5 (change these and say why in a comment)
  // TODO: bool adult = ...;
  bool adult = age >= 18;

  // TODO: bool honors = ...;
  bool honors = GPA >= 3.5;

  // TODO: if (adult && honors) { ... }        best case first
  // TODO: else if (adult || honors) { ... }   exactly one requirement met
  // TODO: else { ... }                        neither — the program still answers
  if (adult && honors) {
    cout << "Eligible for the honors program." << endl;
  } 
  else if (adult || honors) {
    cout << "Halfway there. One requirement met." << endl;
  }
  else {
    cout << "Not eligible yet." << endl;
  }


  // Edge values to run: 17 / 18 with a 3.8, and 3.4 / 3.5 with age 20

  return 0;
}
