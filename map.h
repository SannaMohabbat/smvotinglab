#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

//class for setting up the map
class Category{
    public:
    void print_all() const; //function to print the map
    void add_category(std::string name, int number); //function to set key and values to the map
    private:
    std::unordered_map<std::string, int> category; //creates a map of a string for key and 
    //correlating value of a number 
    };
