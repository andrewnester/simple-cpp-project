//
// Created by nester on 6/24/16.
//

#ifndef TEST_TEST_TESTLIST_H
#define TEST_TEST_TESTLIST_H
#include <string>

using namespace std;

class SimpleProject {
private:
    std::string name;
public:
    SimpleProject(std::string name = "MyName");
    std::string get_name();
};


#endif //TEST_TEST_TESTLIST_H
