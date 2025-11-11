#include <iostream> // Header file
#include <string> // This is a preprocessor directive
using namespace std;

int main() {
    string FirstName;
    string LastName;
    string FullName;
    string AKA;
    string FavoriteMeal;
    string FavoriteMovie;
    string Reason;

    cout << " __________________________________________" << "\n";
    cout << "|                                          |" << "\n";
    cout << "| \tLinus Wambua - 191368  Profile     |" << "\n";
    cout << "|                                          |" << "\n"; // For better output formatting
    cout << "| Enter Your First Name: ";
    cin >> FirstName;
    cout << "|                                          |" << "\n";
    cout << "| Enter Your Last Name: ";
    cin >> LastName; 
    cout << "|                                          |" << "\n";
    FullName = FirstName + " " + LastName;
    cout << "| Full Name: " << FullName << "\n";
    cout << "|                                          |" << "\n";
    cout << "| Also Known As (AKA): ";
    cin >> AKA;
    cout << "|                                          |" << "\n";
    cout << "| Enter Your Favorite Meal: ";
    cin >> FavoriteMeal;
    cout << "|                                          |" << "\n";
    cout << "| Enter Your Favorite Movie: ";
    cin >> FavoriteMovie;
    cout << "|                                          |" << "\n";
    cout << "| Why am I in this class? ";
    cin >> Reason;
    cout << "|__________________________________________|" << "\n";


}