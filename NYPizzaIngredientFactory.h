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
    Clam *create_clam() override {
        return new FreshClam();
    }
    Cheese* create_cheese() override {
        return new MozarellaCheese();
    }
    Dough* create_dough() override {
        return new ThickCrustDough();
    }
    Sauce* create_sauce() override {
        return new PlumTomatoSauce();
    }
};

#endif // NYPIZZAINGREDIENTFACTORY_H_INCLUDED
