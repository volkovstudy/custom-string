#include "CustomString.h"

CustomString::CustomString(const string& value) :
        _value(value) {}

CustomString::CustomString(const char* value) :
        _value(string(value)) {}

const string& CustomString::getValue() const {
    return _value;
}
