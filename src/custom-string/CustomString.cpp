#include "CustomString.h"

CustomString::CustomString(const string& value) :
        _value(value) {}

CustomString::CustomString(const char* value) :
        _value(string(value)) {}
