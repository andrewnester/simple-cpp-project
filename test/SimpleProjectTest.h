//
// Created by nester on 6/24/16.
//

#ifndef TEST_TEST_TESTLISTTEST_H
#define TEST_TEST_TESTLISTTEST_H

#include "cppunit/TestFixture.h"
#include "cppunit/TestAssert.h"
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include "../src/SimpleProject.h"
#include <string>

class SimpleProjectTest : public CppUnit::TestFixture {
public:
    void testList();
    static CppUnit::TestSuite* suite();
};


#endif //TEST_TEST_TESTLISTTEST_H
