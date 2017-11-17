#ifndef REGGIANOCHEESE_H_INCLUDED
#define REGGIANOCHEESE_H_INCLUDED

#include "Cheese.h"

using std::cout;
using std::endl;

class ReggianoCheese : public Cheese {
public:
    ReggianoCheese() {cout << "Reggiano Cheese" << endl;}
};

#endif // REGGIANOCHEESE_H_INCLUDED
