#include "Or_condition.h"

using namespace db07;

bool Or_condition::fulfil(const Row & tuple) const
{
    return _a->fulfil(tuple) || _b->fulfil(tuple);
}
