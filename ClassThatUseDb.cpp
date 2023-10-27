#include "ClassThatUseDb.h"

ClassThatUseDb::ClassThatUseDb(DBConnection* connection) : dbConnection(connection) {}

bool ClassThatUseDb::openConnection(const std::string& dbName) {
    return dbConnection->open(dbName);
}

bool ClassThatUseDb::useConnection(const std::string& query) {
    return dbConnection->execQuery(query);
}

bool ClassThatUseDb::closeConnection() {
    return dbConnection->close();
}
