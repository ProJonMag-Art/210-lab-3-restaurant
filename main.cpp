
#include <iostream>
#include <string>

using namespace std;

struct Restaurant
{
    string name;
    unsigned int menuItemCount;
    int phoneNum;
    double distance;
    float rating;
};



int main()
{

    return 0;
}

Restaurant getUserData()
{
    string tempStr;
    unsigned int tempItemCount;
    int tempPhone;
    double tempDist;
    float tempRating;

    cout << "Enter Restaurant Name: ";
    cin >> tempStr;

    
    return Restaurant();
}