#include "Int_value.h"

#include "storage_engine/types/Types.h"

using namespace std;
using namespace db07;

Type *Int_value::type() {
    return &Types::Int_type;
}

int Int_value::compare(const Value &to) {
    const Int_value &to_int = static_cast<const Int_value &>(to);
    return to_int._data - _data;
}

string Int_value::to_string() {
    return std::to_string(_data);
}
