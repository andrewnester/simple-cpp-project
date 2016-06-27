#include <cppunit/ui/text/TestRunner.h>
#include "SimpleProjectTest.h"

int main( int argc, char **argv)
{
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(SimpleProjectTest::suite());
    runner.run();
    return 0;
}