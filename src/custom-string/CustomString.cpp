#include "CustomString.h"

#include <algorithm>

CustomString::CustomString(const string& value) :
        _value(value) {}

CustomString::CustomString(const char* value) :
        _value(string(value)) {}

const string& CustomString::getValue() const {
    return _value;
}

ostream& operator<<(ostream& output, const CustomString& customString) {
    string value = customString._value;

    for (int i = value.size() - 1; i >= 0; --i) {
        char element = value.at(i);
        output << element;
    }

    return output;
}

istream& operator>>(istream& input, CustomString& customString) {
    string value;
    input >> value;

    sort(value.begin(), value.end(), greater<>());

    customString._value = value;

    return input;
}
