#ifndef TYPE_H
#define TYPE_H

#include <string>

namespace db07 {
    using namespace std;

    /*
     * Definition of a data type.
     */
    struct Type {
        Type(const string name, int length) :
            type_name(name),
            type_length(length) { }

        string name() const;
        int length() const;
    private:

        /*
         * Name of the type.
         */
        const string type_name;

        /*
         * Length of the type in bytes for fixed length types.
         */
        const int type_length;
    };
}

#endif // !TYPE_H
