#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

// This class is used to keep track of an item in the shop's inventory.
class Inventory
{
  private:
		// Name of the item
    string m_name;
		// Price of the item
    float m_price;
		// Quantity of item left in stock
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
