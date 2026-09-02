
// COMSC-210 | Lab 3 | Jonvianney Maglasang
// Started on September 1, 2026 at 7:44 | First break at September 1, 2026 at 8:25 | Second Break at
// Completed on Spetember 1, 2026 at 

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

Restaurant getUserData(); // saves getUserData() as temp variables, then creates a new restaurant object with those variables
void validateInput(bool&); // Checks if cin fails or not, retries if it does while clearing the previous entry

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

    bool inputValidated = true;

    do
    {
        inputValidated = true;

        cout << "Enter Restaurant Name: ";
        cin >> tempStr;
        cout << endl;

        //validateInput(inputValidated);

    } while (tempStr.length() < 0 && inputValidated == true);

    // Checks if phone number's digits are between 10 digits
    do
    {
        inputValidated = true;

        cout << "Enter Phone Number: ";
        cin >> tempPhone;
        cout << endl;

        validateInput(inputValidated);

    } while (tempPhone > 9999999999 || tempPhone < 999999999 && inputValidated == true);
    
    do
    {
        inputValidated = true; 

        cout << "Enter Distance: ";
        cin >> tempDist;
        cout << endl;
        
        validateInput(inputValidated);

    } while(inputValidated == true);

    do
    {
        inputValidated = true;

        cout << "Enter Rating: ";
        cin >> tempRating;
        cout << endl;

        validateInput(inputValidated);

    } while(tempRating < 0 || tempRating > 5.0 && inputValidated == true);
    
    do
    {
        inputValidated = true;

        cout << "Enter Menu Item Count: ";
        cin >> tempItemCount;
        cout << endl;

        validateInput(inputValidated);

    } while(inputValidated == true);
    
    return {tempStr, tempPhone, tempDist, tempRating, tempItemCount};
}

void validateInput(bool& inputValidated)
{
    if(cin.fail())
    {
        cout << "Invalid Input. Please try again";
        cin.clear();
        cin.ignore(__INT_MAX__, '\n');
        inputValidated = false;
    }
}