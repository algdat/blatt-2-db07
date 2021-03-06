#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include "parser/token_type.h"

namespace db07 {
    class Token {
    private:
        const token_type _type;
        const std::string _string_value;
        const int _int_value;

    public:
        Token(const token_type type_);

        Token(const token_type type_, std::string &);

        Token(const token_type type_, int);

        token_type type() const;

        std::string string_value() const;

        int int_value() const;
    };
}

#endif
