#ifndef NYPIZZAINGREDIENTFACTORY_H_INCLUDED
#define NYPIZZAINGREDIENTFACTORY_H_INCLUDED

#include "PizzaIngredientFactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    NYPizzaIngredientFactory() {
        cout << "NYPizzaIngredientFactory created!" << endl;
    }
    ~NYPizzaIngredientFactory() {
        cout << "NYPizzaIngredientFactory destroyed!" << endl;
    }
    Cheese* create_cheese() override {
        return new ReggianoCheese();
    }
    Dough* create_dough() override {
        return new ThinCrustDough();
    }
    Sauce* create_sauce() override {
        return new MarinaraSauce();
    }
};

#endif // NYPIZZAINGREDIENTFACTORY_H_INCLUDED
