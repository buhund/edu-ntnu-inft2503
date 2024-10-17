#include "set.hpp"
using namespace std;

// Konstruktør: Lage en mengde med tall.
Set::Set(const std::vector<int> &elements) {
    for (int element : elements) {
        add(element);  // Bruker add() for å unngå duplikater.
    }
}

// Legge til et element i mengden.
void Set::add(int element) {
    if (!contains(element)) {
        elements_.push_back(element);
    }
}

// Hjelpefunksjon: Sjekke om et element finnes i mengden.
bool Set::contains(int element) const {
    return std::find(elements_.begin(), elements_.end(), element) != elements_.end();
}

// Union: Overload for operator+ for å lage unionen av to mengder.
Set Set::operator+(const Set &other) const {
    Set result = *this;  // Start med denne mengden.
    for (int element : other.elements_) {
        result.add(element);  // Legg til elementene fra den andre mengden.
    }
    return result;
}

// Tilordning: Setter en mengde lik en annen.
Set &Set::operator=(const Set &other) {
    if (this != &other) {
        elements_ = other.elements_;
    }
    return *this;
}

// Overload for operator<< for å skrive ut mengden.
std::ostream &operator<<(std::ostream &out, const Set &set) {
    out << "{ ";
    for (int element : set.elements_) {
        out << element << " ";
    }
    out << "}";
    return out;
}
