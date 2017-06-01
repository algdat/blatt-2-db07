#ifndef DB07_QUERY_DATA_H
#define DB07_QUERY_DATA_H

#include <string>
#include <list>
#include "Query_condition.h"
#include "Query_type.h"

using namespace std;

namespace db07 {
    class Query_data {

    private:
        /**Query_type defines the type of the query.*/
        const Query_type _queryType;
        /**String table on where the query will be executed.*/
        const string _tableName;
        /**String column which is needed for the select statement.*/
        const list <string> _columnName;
        /**List of primaryKey for the create statement.*/
        list <string> _primaryKey;
        /**List of condition in an query statement.*/
        list <Query_condition> _conditions;
        /**
         * List of pair of column name and value.
         * Pairing column name with data type,
         * or insert/update a value in a column.
         */
        list <pair<string, string>> _columns2value;

    public:

        const Query_type getQuery_type() const;

        string getTableName();

        list <string> getPrimaryKeys();

        list <Query_condition> getConditions();

        list <pair<string, string>> getColumnValues();

        const list <string> &getColumnName() const;

        Query_data(const string &tableName, const list <string> &columnName, const list <string> &primaryKey,
                   const list <Query_condition> &conditions, const list <pair<string, string>> &columns2value,
                   const Query_type &queryType);

    };

}

#endif //DB07_QUERY_DATA_Hs
