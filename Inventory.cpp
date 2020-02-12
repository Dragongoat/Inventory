#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cout;

// Constructor
// @param string name - The name of the item to add
// @param float price - The price of the item to add
// @param int count   - The quantity of the item to add  
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

// Decrements stock of item, unless quantity is 0
void Inventory::sell()
{
	if (m_in_stock == 0){
		cout << "Sorry, that item is out of stock.\n";
  }
	else {
	  m_in_stock--;
	}
}

// Prints information about the item
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
