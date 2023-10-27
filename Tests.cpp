#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "ClassThatUseDb.h"
#include "MockDBConnection.h"

using namespace testing;

TEST(ClassThatUseDbTest, OpenConnection) {
    MockDBConnection mockConnection;
    ClassThatUseDb classUnderTest(&mockConnection);

    EXPECT_CALL(mockConnection, open("test_db")).WillOnce(Return(true));
    EXPECT_TRUE(classUnderTest.openConnection("test_db"));
}

TEST(ClassThatUseDbTest, UseConnection) {
    MockDBConnection mockConnection;
    ClassThatUseDb classUnderTest(&mockConnection);

    EXPECT_CALL(mockConnection, execQuery("SELECT * FROM table")).WillOnce(Return(true));
    EXPECT_TRUE(classUnderTest.useConnection("SELECT * FROM table"));
}

TEST(ClassThatUseDbTest, CloseConnection) {
    MockDBConnection mockConnection;
    ClassThatUseDb classUnderTest(&mockConnection);

    EXPECT_CALL(mockConnection, close()).WillOnce(Return(true));
    EXPECT_TRUE(classUnderTest.closeConnection());
}
