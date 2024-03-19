#ifndef __BEADEDBAG_BEADEDBAG_HPP
#define __BEADEDBAG_BEADEDBAG_HPP

#include "item.h"
#include <vector>

class BeadedBag {

public:
 /*
 * <insert>
 *
 * <It will insert the argument into the BeadedBag
            as long as it is not there already.>
 *
 * input: <Item to_insert>
 * output: <Does not return anything.>
 */
  void insert(Item to_insert);


  /*
 * <size>
 *
 * <Gets the size of the vector that is in BeadedBag>
 *
 * input: <This function does not have any parameters>
 * output: <This function returns the number of items in the BeadedBag >
 */
  int size();

  /*
 * <contains>
 *
 * <This function will return true if maybe_contained_item is already
 * present in the Beaded Bag; it will return false otherwise>
 *
 * input: <Item maybe_contained_item>
 * output: <returnes a bool value.>
 */
  bool contains(Item maybe_contained_item);

private:
	std::vector<Item> item_holder;
};

#endif