#ifndef CHEESEPIZZA_H_INCLUDED
#define CHEESEPIZZA_H_INCLUDED

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
    PizzaIngredientFactory *ingredient_factory = nullptr;
public:
    CheesePizza();
    ~CheesePizza();
    CheesePizza(PizzaIngredientFactory *stores_pizza_factory);
    void prepare() override;
};

#endif // CHEESEPIZZA_H_INCLUDED
