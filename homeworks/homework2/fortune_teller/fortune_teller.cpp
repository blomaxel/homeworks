#include <iostream>
#include <string>
#include <cstdlib>
#include <map>
#include <vector>
#include <algorithm>
int main() {
    //Welcome message
    std::cout << "Welcome to the C++ Fortune Teller!" << std::endl;
    //Register first question
    std::string name; // Name of the user
    std::cout << "Please enter your name: ";
    std::cin >> name;
    
    //Register second question
    std::string season = ""; // Season of the year
    std::string programmer_type = ""; // Type of programmer
    std::map<std::string, std::string> possible_seasons = {{"spring","STL guru"}, {"summer","C++ expert"},
    {"autumn","coding beast"}, {"winter", "software design hero"}};
    std::cout << "Enter your favorite season (spring, summer, autumn, winter): ";
    std::cin >> season;
    while (possible_seasons.find(season) == possible_seasons.end()) {
        std::cout << "Invalid season. Please enter a valid season: ";
        std::cin >> season;
    }
    programmer_type = possible_seasons[season];
    
    
    //Register third and fourth questions
    std::string adjective1 = "", adjective2 = ""; // Adjective that describes the user
    std::vector<std::string> adjectives = {};// Adjectives that describe the user
    std::cout << "Please enter an adjective: ";
    std::cin >> adjective1;
    adjectives.push_back(adjective1);
    std::cout << "Please enter another adjective: ";
    std::cin >> adjective2;
    adjectives.push_back(adjective2);

    //Final processing
    std::vector<std::string> possible_habits = {"eats UB for breakfast",
"finds errors quicker than the compiler",
"is not afraid of C++ error messages"};
    std::string adjective_to_keep = adjectives[name.length() % adjectives.size()];
    std::string predicted_habit = possible_habits[name.length() % possible_habits.size()];
    std::cout << name << ", the " << adjective_to_keep << " " << programmer_type << " that " << predicted_habit << std::endl;
}