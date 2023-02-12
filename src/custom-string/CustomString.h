#ifndef CUSTOM_STRING_CUSTOMSTRING_H
#define CUSTOM_STRING_CUSTOMSTRING_H

#include <string>
#include <ostream>

using namespace std;

class CustomString {
private:
    string _value;
public:
    explicit CustomString(const string& value);
    explicit CustomString(const char* value);

    const string& getValue() const;

    friend ostream& operator<<(ostream& output, const CustomString& customString);
    friend istream& operator>>(istream& input, CustomString& customString);
};


#endif
