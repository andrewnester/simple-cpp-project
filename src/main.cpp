#include <iostream>
#include "SimpleProject.h"

using namespace std;

int main() {
    SimpleProject testList;

    std::string str = testList.get_name();
    cout << str << endl;

    str.append("123");

    cout << testList.get_name() << endl;
    return 0;
}