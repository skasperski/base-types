#include "rice/Class.hpp"
extern void Init_eigen_ext();

extern "C" void Init_base_types_ruby()
{
    Init_eigen_ext();
}

