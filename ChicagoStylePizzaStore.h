#ifndef CHICAGOSTYLEPIZZASTORE_H_INCLUDED
#define CHICAGOSTYLEPIZZASTORE_H_INCLUDED

#include "PizzaStore.h"
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
#include "ChicagoPizzaIngredientFactory.h"


class ChicagoStylePizzaStore : public PizzaStore {
public:
    Pizza *create_pizza(std::string type) override;
};

#endif // CHICAGOSTYLEPIZZASTORE_H_INCLUDED
