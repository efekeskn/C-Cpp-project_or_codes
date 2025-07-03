#include <iostream>
#include "intentry.hpp"

intEntry::intEntry(int v, int c) : value(v), count(c) {}


int intEntry::getValue() const {
    return value;
}


int intEntry::getCount() const {
    return count;
}


void intEntry::increment() {
    count++;
}


bool operator<(const intEntry& lhs, const intEntry& rhs) {
    return lhs.value < rhs.value;
}


bool operator==(const intEntry& lhs, const intEntry& rhs) {
    return lhs.value == rhs.value;
}


std::ostream& operator<<(std::ostream& ostr, const intEntry& obj) {
    ostr << "Value: " << obj.value << ", Count: " << obj.count;
    return ostr;
}