#pragma once
#include <string>

// Abstract base class representing a database connection.
class DBConnection {
public:
    virtual ~DBConnection() {}

    virtual bool open(const std::string& dbName) = 0;

    virtual bool close() = 0;

    virtual bool execQuery(const std::string& query) = 0;
};
