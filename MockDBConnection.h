#pragma once
#include "gmock/gmock.h"
#include "DBConnection.h"

// Mock implementation of the DBConnection interface.
class MockDBConnection : public DBConnection {
public:
    MOCK_METHOD(bool, open, (const std::string& dbName), (override));
    MOCK_METHOD(bool, close, (), (override));
    MOCK_METHOD(bool, execQuery, (const std::string& query), (override));
};
