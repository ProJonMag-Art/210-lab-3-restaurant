
// COMSC-210 | Lab 3 | Jonvianney Maglasang
// Started on September 1, 2026 at 7:44 | Completed on Spetember 1, 2026 at 

#include <iostream>
#include <string>

using namespace std;

// Could use a constructor function, but not required.
struct Restaurant
{
    string name;
    int phoneNum;
    double distance;
    float rating;
    unsigned int menuItemCount;
};

// getUserData() gets user input via cin, saves those inputs as temp variables, and then creates a new restaurant object with those variables
Restaurant getUserData();

int main()
{
    Restaurant newRest = getUserData();
    cout << newRest.name << " " << newRest.phoneNum << " " << newRest.distance << " " << newRest.rating << " " << newRest.menuItemCount << endl;
    return 0;
}

// Gets user inputs and outputs a new restaurant object (Needs input validation)
Restaurant getUserData()
{
    string tempStr;
    int tempPhone;
    double tempDist;
    float tempRating;
    unsigned int tempItemCount;

    do
    {
        cout << "Enter Restaurant Name: ";
        cin >> tempStr;
        cout << endl;
    } while (tempStr.length() < 0);

    // Checks if phone number's digits are between 10 digits
    do
    {
        cout << "Enter Phone Number: ";
        cin >> tempPhone;
        cout << endl;
    } while (tempPhone > 9999999999 || tempPhone < 999999999);
    
    cout << "Enter Distance: ";
    cin >> tempDist;
    cout << endl;

    do
    {
        cout << "Enter Rating: ";
        cin >> tempRating;
        cout << endl;
    } while(tempRating < 0 || tempRating > 5.0);
    
    cout << "Enter Menu Item Count: ";
    cin >> tempItemCount;
    cout << endl;
    
    return {tempStr, tempPhone, tempDist, tempRating, tempItemCount};
}