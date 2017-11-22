#ifndef NYSTYLEPIZZASTORE_H_INCLUDED
#define NYSTYLEPIZZASTORE_H_INCLUDED

#include <memory>

#include "PizzaStore.h"
#include "PizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"
#include "Pizza.h"
#include "CheesePizza.h"
#include "ClamPizza.h"

/*
 * I do the same as PizzaStore, except I have to actually implement
 * the create_pizza interface.
 */
class NYStylePizzaStore : public PizzaStore {
protected:
    std::unique_ptr<Pizza> create_pizza(std::string type) override;
};

#endif // NYSTYLEPIZZASTORE_H_INCLUDED
