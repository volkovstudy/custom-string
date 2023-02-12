#ifndef CUSTOM_STRING_CUSTOMSTRING_H
#define CUSTOM_STRING_CUSTOMSTRING_H

#include <string>

using namespace std;

class CustomString {
private:
    string _value;
public:
    explicit CustomString(const string& value);
    explicit CustomString(const char* value);
};


#endif
