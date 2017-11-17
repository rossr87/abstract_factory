#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H_INCLUDED
#define CHICAGOPIZZAINGREDIENTFACTORY_H_INCLUDED

#include "Ingredients.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    ChicagoPizzaIngredientFactory() {
        cout << "ChicagoPizzaIngredientFactory created!" << endl;
    }
    ~ChicagoPizzaIngredientFactory() {
        cout << "ChicagoPizzaIngredientFactory destroyed!" << endl;
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

#endif // CHICAGOPIZZAINGREDIENTFACTORY_H_INCLUDED
