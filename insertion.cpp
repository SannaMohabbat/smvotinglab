#include <iostream>
#include <string>
//this goes in other file of functions
using namespace std; 
  
/* Function to sort an array using insertion sort*/
void insertion_sort(int a[], int size)
{
   for (int i = 1; i < size; i++)
   {
      int next = a[i];
      // Move all larger elements up
      int j = i;
      while (j > 0 && a[j - 1] > next)
      {
         a[j] = a[j - 1];
         j--;
      }
      // Insert the element
      a[j] = next;
   }
}
  
// A utility function to print an array of size n  
void print(int a[], int size)
{
   cout << "From lowest voted category to highest: " << endl;
   for (int i = 0; i < size; i++)
   {
      cout << a[i] << " "; //for loop to print the whole array 
   }
   cout << endl; //manual outputs with correlating categorical votes 
   cout << endl;
   cout << "1 vote for N/A" << endl;
   cout << "2 votes for Disabilties" << endl;
   cout << "9 votes for Family" << endl;
   cout << "10 votes for Not Important" << endl;
   cout << "15 votes for Legal Reasons" << endl;
   cout << "16 votes for No Time" << endl;
   cout << "18 votes for Work" << endl;
   cout << "24 votes for School" << endl;
   cout << endl;
}

