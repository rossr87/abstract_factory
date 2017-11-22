#ifndef CLAMPIZZA_H_INCLUDED
#define CLAMPIZZA_H_INCLUDED

#include "Pizza.h"
#include "FreshClam.h"
#include "PizzaIngredientFactory.h"

class ClamPizza : public Pizza {
private:
    PizzaIngredientFactory *ingredient_factory = nullptr;
public:
    ClamPizza();
    ~ClamPizza();
    ClamPizza(PizzaIngredientFactory *stores_pizza_factory);
    void prepare();
};

#endif // CLAMPIZZA_H_INCLUDED
