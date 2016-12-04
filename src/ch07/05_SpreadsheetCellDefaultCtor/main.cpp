#include "SpreadsheetCell.h"
#include <iostream>
#include <memory>
using namespace std;

int main() {
  // Using the default constructor
  SpreadsheetCell myCell;
  myCell.setValue(6);
  cout << "cell 1: " << myCell.getValue() << endl;

  auto smartCellp = make_unique<SpreadsheetCell>();
  // Or with a naked pointer (not recommended)
  SpreadsheetCell* myCellp = new SpreadsheetCell();
  // Or
  // SpreadsheetCell* myCellp = new SpreadsheetCell;
  // ... use myCellp

  delete myCellp;
  myCellp = nullptr;

  return 0;
}
