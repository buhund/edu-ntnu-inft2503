#include "set.hpp"
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

// Funksjon for å lese en tallmengde fra brukeren
Set readSetFromInput() {
    std::string input;
    std::vector<int> numbers;

    std::cout << "Velkommen til Weyland-Yutani Set & Mengde" << endl;
    std::cout << "Skriv inn tallene for mengden (separert med mellomrom): ";
    std::getline(std::cin, input);

    std::istringstream iss(input);
    int number;
    while (iss >> number) {
        numbers.push_back(number);  // Legger til hvert tall i vektoren
    }

    return Set(numbers);  // Returnerer et Set-objekt
}

int main() {
    // Leser inn to mengder fra brukeren
    std::cout << "Mengde 1:" << std::endl;
    Set set1 = readSetFromInput();

    std::cout << "Mengde 2:" << std::endl;
    Set set2 = readSetFromInput();

    // Skriver ut de to mengdene
    std::cout << "Set1: " << set1 << std::endl;
    std::cout << "Set2: " << set2 << std::endl;

    // Finner unionen av set1 og set2
    Set unionSet = set1 + set2;
    std::cout << "Union: " << unionSet << std::endl;

    // Legger til et nytt tall i set1
    int newNumber;
    std::cout << "Skriv inn et hemmelig tall for å legge til i Set1: ";
    std::cin >> newNumber;
    set1.add(newNumber);

    std::cout << "Set1 etter å ha lagt til " << newNumber << ": " << set1 << std::endl;

    // Tilordner set2 til set1
    set1 = set2;
    std::cout << "Set1 etter å bli satt lik Set2: " << set1 << std::endl;

    return 0;
}
