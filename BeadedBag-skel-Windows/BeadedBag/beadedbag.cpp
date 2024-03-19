#include <algorithm>
#include "beadedbag.h"
#include "item.h"
#include <vector>


// Implement the BeadedBag::size and BeadedBag::insert member functions here.

void BeadedBag::insert(Item to_insert)
{
	if (!(BeadedBag::contains(to_insert))) {
		BeadedBag::item_holder.push_back(to_insert);
	}
}


int BeadedBag::size()
{
	return  BeadedBag::item_holder.size();
}


// Complete the implementation of the BeadedBag::contains member function.
bool BeadedBag::contains(Item maybe_contained_item) {
	for (int i=0; i < BeadedBag::item_holder.size(); i++) {
		if (maybe_contained_item.isEqual(BeadedBag::item_holder[i])) {
			return true;
		}
	}
  return false;
}

