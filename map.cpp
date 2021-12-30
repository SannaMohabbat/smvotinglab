#include <iostream>
#include <string>
#include "map.h"
#include <unordered_map>

void Category::add_category(std::string name, int number) 
{
   category[name] = number; //calls the map name category to add a name and set that 
   //name to a number 
}

void Category::print_all() const
{ //from beginning to end of map 
   for (auto pos = category.begin(); pos != category.end(); pos++)
   {
      std::cout << pos->second << " " << pos->first << std::endl;
   } //outputs the number or vote and then the category going through the beginning of the
   //map to the end 
}



