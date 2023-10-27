#pragma once
#include "DBConnection.h"

// Class that uses a DBConnection to interact with a database.
class ClassThatUseDb {
public:
    // Accepts a pointer to a DBConnection interface
    ClassThatUseDb(DBConnection* connection);

    bool openConnection(const std::string& dbName);

    bool useConnection(const std::string& query);

    bool closeConnection();

private:
    // Stores a pointer to the DBConnection interface
    DBConnection* dbConnection;
};
