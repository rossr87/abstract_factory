#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H_INCLUDED
#define CHICAGOPIZZAINGREDIENTFACTORY_H_INCLUDED
#include <memory>

#include "PizzaIngredientFactory.h"
#include "Ingredients.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    ChicagoPizzaIngredientFactory();
    ~ChicagoPizzaIngredientFactory();
    std::unique_ptr<Clam> create_clam() override;
    std::unique_ptr<Cheese> create_cheese() override;
    std::unique_ptr<Dough> create_dough() override;
    std::unique_ptr<Sauce> create_sauce() override;
};

#endif // CHICAGOPIZZAINGREDIENTFACTORY_H_INCLUDED
