#ifndef _HANDLER_H_
#define _HANDLER_H_

#include <functional>

namespace ll {

namespace algorithm {

using cmp = std::function<bool(int, int)>;
template<typename Type>
using cmp2 = std::function<bool(Type, Type)>;

template<typename Type>
using each = std::function<void(Type&)>;

} // namespace algorithm

} // namespace ll

#endif