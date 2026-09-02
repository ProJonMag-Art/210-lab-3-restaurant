
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
    long long phoneNum;
    double distance;
    float rating;
    int menuItemCount;
};

Restaurant getUserData(); // saves getUserData() as temp variables, then creates a new restaurant object with those variables
void validateInput(bool&); // Checks if cin fails or not, retries if it does while clearing the previous entry

Restaurant restArr[4];

int main()
{
    restArr[0] = getUserData();
    restArr[1] = {"Wong's Seafood House", 1234567890, 34.31, 4.5, 30};
    restArr[2] = {"Mario's Pasta Shop", 1238945667, 24.59, 3.3, 18};
    restArr[3] = {"Miss Vanessa's Bakery", 1235869023, 5.55, 4.9, 27};

    outputRest(restArr);

    return 0;
}

// Gets user inputs and outputs a new restaurant object (Needs input validation)
Restaurant getUserData()
{
    string tempStr;
    long long tempPhone;
    double tempDist;
    float tempRating;
    int tempItemCount;

    bool inputValidated = false;

    do
    {
        inputValidated = false;

        cout << "Enter Restaurant Name: ";
        cin >> tempStr;
        cout << endl;

        validateInput(inputValidated);

    } while (tempStr.length() == 0 || inputValidated == false);

    // Checks if phone number's digits are between 10 digits
    do
    {
        inputValidated = false;

        cout << "Enter Phone Number: ";
        cin >> tempPhone;
        cout << endl;

        validateInput(inputValidated);

    } while (tempPhone > 9999999999 || tempPhone < 999999999 || inputValidated == false);

    do
    {
        inputValidated = false; 

        cout << "Enter Distance: ";
        cin >> tempDist;
        cout << endl;
        
        validateInput(inputValidated);

    } while(inputValidated == false);

    do
    {
        inputValidated = false;

        cout << "Enter Rating: ";
        cin >> tempRating;
        cout << endl;

        validateInput(inputValidated);

    } while(tempRating < 0 || tempRating > 5.0 || inputValidated == false);
    
    do
    {
        inputValidated = false;

        cout << "Enter Menu Item Count: ";
        cin >> tempItemCount;
        cout << endl;

        validateInput(inputValidated);

    } while(tempItemCount < 0 || inputValidated == false);
    
    return {tempStr, tempPhone, tempDist, tempRating, tempItemCount};
}

void validateInput(bool& inputValidated)
{
    cout << inputValidated << endl;

    if(cin.fail())
    {
        cout << "Invalid Input. Please try again";
        cin.clear();
        cin.ignore(__INT_MAX__, '\n');
        inputValidated = true;
    }
    else
    {
        inputValidated = true;
    }
}

void outputRest(Restaurant restArr[4])
{
    for(int i = 0; i <= 4; i++)
    {
        cout << "Index | Restaurant | Phone Number | Distance | Rating | Menu Items" << endl;
        cout << i << " " << restArr[i].name << " " << restArr[i].phoneNum << " " << restArr[i].distance << " " << restArr[i].rating << " " << restArr[i].menuItemCount << endl;
    }
}