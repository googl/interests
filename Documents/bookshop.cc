// Copyright 2012 Carey Riley, Dwayne Reid
// A Bookshop Inventory Management System
#include <iostream>
#include <iomanip>
// #include <cstdio>
#include <string>
namespace {                          // Response to not enough in stock
  using std::setfill;
  using std::setw;
  using std::cout;
  void NotInStock(void) {cout << "Required copies not in stock\n";}
//  void NotInStock(void) {printf("Required copies not in stock\n");}

  void PrintStockTableHeader(void) {  // Stock Table Header
    cout << setw(80) << setfill('_') << '\n' << setfill(' ') <<
    '|' << setw(41) << "BOOKSHOP DATABASE" << setw(38) << '|' << '\n' <<
    setw(80) << setfill('_') << '\n' << setfill(' ') <<
    "| Author's Name |" <<
    "  Book Title      |" <<
    " Unit Price |" <<
    "  Publisher     |" <<
    "  Stock Count|" << '\n' <<
    setw(80) << setfill('_') << '\n' << setfill(' ');
  }
}
class Books {
//  public:
//    Books(std::string ){
  private:
    std::string author_;
    std::string title_;
    double unitprice_;
    std::string publisher_;
    int quantity_;
};

int main() {
// NotInStock();
PrintStockTableHeader();
    }

