#ifndef CHEESEPIZZA_H_INCLUDED
#define CHEESEPIZZA_H_INCLUDED

#include "Pizza.h"
#include "PizzaIngredientFactory.h"
#include "Ingredients.h"

class CheesePizza : public Pizza {
public:
    CheesePizza() { cout << "CheesePizza Creator" << endl;}
    ~CheesePizza() { cout << "CheesePizza Destroyed!" << endl;}
    /*
     * Let's not engage in copying around loads of ingredient factories.
     * It's not what C++ was built for!
     */
    PizzaIngredientFactory *ingredient_factory = nullptr;

    CheesePizza(PizzaIngredientFactory *stores_pizza_factory) {
        //this->ingredient_factory = stores_pizza_factory;
        ingredient_factory = stores_pizza_factory;
    }

    /*
     * Notice that this class is ignorant of which kind of ingredient it will get?
     */
    void prepare() override {
        cout << "Preparing: " << this->get_name() << endl;
        cheese = ingredient_factory->create_cheese();
        dough = ingredient_factory->create_dough();
        sauce = ingredient_factory->create_sauce();
    }
};

#endif // CHEESEPIZZA_H_INCLUDED
