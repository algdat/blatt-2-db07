#include "Regex_recognition_rule.h"

namespace db07 {
    Regex_recognition_rule::Regex_recognition_rule(const std::string regex_str, const token_type token_type,
                                       const std::function<bool(const std::string &)> &can_match_predicate)
            : Recognition_rule(token_type),
              _regex(regex_str, std::regex_constants::icase),
              _can_match_predicate(can_match_predicate) {}

    bool Regex_recognition_rule::matches(const std::string &token_string) const {
        return std::regex_match(token_string, _regex);
    }

    bool Regex_recognition_rule::can_match(const std::string &token_string) const {
        return _can_match_predicate(token_string);
    }
}
