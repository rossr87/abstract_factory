#ifndef PIZZASTORE_H_INCLUDED
#define PIZZASTORE_H_INCLUDED

#include <memory>

#include "Pizza.h"


class PizzaStore {
public:
    std::unique_ptr<Pizza> order_pizza(std::string type);

protected:
    virtual std::unique_ptr<Pizza> create_pizza(std::string type) = 0;
};

#endif // PIZZASTORE_H_INCLUDED
