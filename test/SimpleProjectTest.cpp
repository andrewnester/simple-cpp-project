//
// Created by nester on 6/24/16.
//

#include "SimpleProjectTest.h"

void SimpleProjectTest::testList() {
    SimpleProject tl;

    std::string str = tl.get_name();
    std::string old_str = tl.get_name();

    str.append("123");

    CPPUNIT_ASSERT(old_str == tl.get_name());
}

CppUnit::TestSuite *SimpleProjectTest::suite() {
    CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite;
    suiteOfTests->addTest(new CppUnit::TestCaller<SimpleProjectTest>(
            "testList", &SimpleProjectTest::testList));
    return suiteOfTests;
}