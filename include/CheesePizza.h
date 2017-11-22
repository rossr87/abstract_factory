#ifndef CHEESEPIZZA_H_INCLUDED
#define CHEESEPIZZA_H_INCLUDED
#include <memory>

#include "Pizza.h"
#include "PizzaIngredientFactory.h"
#include "Ingredients.h"

/*
 * Because we have separated the style of CheesePizza this class will be
 * using the IngredientFactory, this class is oblivious to which kind of
 * pizza (NY, Chicaco, ...) it is working with.
 */

class CheesePizza : public Pizza {
private:
    std::shared_ptr<PizzaIngredientFactory> ingredient_factory;
public:
    CheesePizza();
    ~CheesePizza();
    CheesePizza(std::shared_ptr<PizzaIngredientFactory> stores_pizza_factory);
    void prepare() override;
};

#endif // CHEESEPIZZA_H_INCLUDED
