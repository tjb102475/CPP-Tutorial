//Excersise to have user select difficulty using enumerators

#include <iostream>

using namespace std;

int main()
{
   cout << "Difficulty Levels\n\n";
   cout << "1 - Easy\n";
   cout << "2 - Normal\n";
   cout << "3 - Hard\n";

   int choice;
   enum difficutly {Easy = 1, Normal = 2, Hard = 3};
   cout << "Choice:";
   cin >> choice;

   if (choice == Easy)
   cout << "You picked Easy\n";

    if (choice == Normal)
    cout << "You picked Normal\n";

    if (choice == Hard)
    cout << "You picked Hard\n";

    if (choice != Easy && choice != Normal && choice != Hard)
        cout << "Invalid Choice\n";

    return 0;
}
