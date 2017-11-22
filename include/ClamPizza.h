#ifndef CLAMPIZZA_H_INCLUDED
#define CLAMPIZZA_H_INCLUDED
#include <memory>

#include "Pizza.h"
#include "FreshClam.h"
#include "PizzaIngredientFactory.h"

class ClamPizza : public Pizza {
private:
    std::shared_ptr<PizzaIngredientFactory> ingredient_factory;
public:
    ClamPizza();
    ~ClamPizza();
    ClamPizza(std::shared_ptr<PizzaIngredientFactory> stores_pizza_factory);
    void prepare();
};

#endif // CLAMPIZZA_H_INCLUDED
