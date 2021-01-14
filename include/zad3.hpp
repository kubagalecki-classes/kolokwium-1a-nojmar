#include "zad1.hpp"
#include <cstdint>
#include <functional>

using namespace std;
// tutaj funkcja polejSosem
template<typename T>
size_t polejSosem(const Tagliatelle & tagia, const T & obj) {

    return obj.polej(tagia);
}
