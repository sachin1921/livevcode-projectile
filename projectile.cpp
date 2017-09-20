#include "projectile.hpp"

#include <cstdio>



const double m= 1;
const double c=1;

auto force(TState s){return VecR2{0, -m*g};}
