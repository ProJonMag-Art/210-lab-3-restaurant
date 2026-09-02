
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



int main()
{
    Restaurant newRest = getUserData();
    cout << newRest.name << " " << newRest.phoneNum << " " << newRest.distance << " " << newRest.rating << " " << newRest.menuItemCount;
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

    cout << "Enter Restaurant Name: ";
    cin >> tempStr;
    cout << endl;

    cout << "Enter Phone Number: ";
    cin >> tempPhone;
    cout << endl;

    cout << "Enter Distance: ";
    cin >> tempDist;
    cout << endl;

    cout << "Enter Rating: ";
    cin >> tempRating;
    cout << endl;

    cout << "Enter Menu Item Count: ";
    cin >> tempItemCount;
    cout << endl;
    
    return {tempStr, tempPhone, tempDist, tempRating, tempItemCount};
}