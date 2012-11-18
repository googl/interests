// Copyright 2012 Carey Riley, Dwayne Reid
//  A Bookshop Inventory Management System
/*  A small Bookshop maintains the inventory of books sold in the shop. The list
 *  includes (but is not limited to) the following details:
 *   Author's name,
 *   Title of the book(s),
 *   Price of each each book,
 *   Publisher of each book,
 *   Stock levels of each type in a tabular form as shown below
 *  ----------------------------------------------------------------------
 *  |                  BOOKSHOP DATABASE                                   |
 *  ------------------------------------------------------------------------
 *  | Author's Name | Book Title | Unit Price | Publisher | Stock Count    |
 *  -----------------------------------------------------------------------
 *  | Deitel & Deitel| C++...Program| $2500.00| Pearson   |   15 Copies    |
 *  ------------------------------------------------------------------------
 *  |                |            |            |           |               |
 *  ------------------------------------------------------------------------
 *
 *  Whenever a customer wants a book, the sales person inputs the title and author
 *  and the system searches the list (database) and displays whether it is available
 *  or not. If available, the total cost of the requested copies is displayed;
 *  otherwise the message "Required copies not in stock" is displayed.
 *
 *  Design a system using a class called books with suitable member functions,
 *  member variables and constructors. Use the New operator in your constructors
 *  to apportion possible memory requriements. Objects created in main should be
 *  able to access appropriate member functions to carry out whichever task(s) they
 *  are designed to perform.
 *
 *  In writing your program, use comments to facilitate comprehension and explain
 *  all assumptions you might be forced to make for the system to function
 *  optimally. Innovation as well as user friendliness of your interface would be
 *  rewarded.
 */

/* TODO(Carey): disorded breakdown of needed actions
 * - class Books with functions, variables and constructors
 * - contructors should use the new operator
 * - comment, comment, comment
 * - search function:
       input title and author; searches inventory, returns total cost and
       requested number of copies.
   - anymore observations follow the above syntax of TODO(name||email): <todos>
*/

#include <iostream>
#include <iomanip>
// #include <cstdio>
#include <string>

// put all global functions in an unnamed namespace so code is as OO as possible
namespace {
  using std::setfill;
  using std::setw;
  using std::cout;
  using std::cerr;

// print stock shortage to screen
  void NotInStock(void) {cerr << "Required copies not in stock\n";}

// Stock Table layout with header
  void PrintStockTableHeader(void) {
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

// BookSearch(std::string, std::string) { }
class *Books {
  public:
    *Books() : author_("Deitel & Deitel"),
              title_("C++...Program"),
              unitprice_("2500.00"),
              publisher_("Pearson"),
              quantity_("15")
              {}
//      {cout << "| " << author_ << " | " << title_ << " | " << unitprice_ <<
//      " | " << publisher_ << " | " << quantity_ << '\n';
//      };
  private:
    std::string author_;
    std::string title_;
    float unitprice_;
    std::string publisher_;
    int quantity_;
  };
}

int main() {

 NotInStock();
PrintStockTableHeader();

    }
