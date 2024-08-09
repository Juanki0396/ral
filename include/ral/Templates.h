#ifndef TEMPLATES_RAL_H
#define TEMPLATES_RAL_H

#include <functional>
#include "ROOT/RVec.hxx"

namespace k4::ral {

namespace Templates {

template<typename T, typename E>
struct getter {
    std::function<T(E)> m_f;
    getter() {};
    getter(std::function<T(E)> function) : m_f(function) {};
    ROOT::VecOps::RVec<T> operator()(ROOT::VecOps::RVec<E> collection) { 
        ROOT::VecOps::RVec<T> result;
        result.reserve(collection.size());
        for ( const E &unit : collection) {
            result.emplace_back(m_f(unit));
        }
        return result;
    }
};

}
}
#endif
