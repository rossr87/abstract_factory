#ifndef PIZZASTORE_H_INCLUDED
#define PIZZASTORE_H_INCLUDED

#include "Pizza.h"


class PizzaStore {
public:
    Pizza* order_pizza(std::string type);

protected:
    virtual Pizza* create_pizza(std::string type) = 0;
};

#endif // PIZZASTORE_H_INCLUDED
