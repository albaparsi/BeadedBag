#ifndef __BEADEDBAG_ITEM_HPP
#define __BEADEDBAG_ITEM_HPP

#include <string>

class Item {
public:
  Item(const std::string &item_name);

  /*
 * <getName>
 *
 * <This member function will return the m_name of the Item.>
 *
 * input: <This function does not have any input parameters>
 * output: <returns a string value called m_name>
 */
  std::string getName();

  /*
 * <isEqual>
 *
 * <This member function returns true if other's
 * m_name is equal to this Item's m_name.>
 *
 * input: <Item other>
 * output: <returns a bool value>
 */
  bool isEqual(Item other);

private:
  std::string m_name;
};

#endif