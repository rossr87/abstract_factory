#ifndef CLAMPIZZA_H_INCLUDED
#define CLAMPIZZA_H_INCLUDED

#include "Pizza.h"
#include "FreshClam.h"

public:
    ClamPizza() { cout << "ClamPizza Creator" << endl;}
    ~ClamPizza() { cout << "ClamPizza Destroyed!" << endl;}
    /*
     * Let's not engage in copying around loads of ingredient factories.
     * It's not what C++ was built for!
     */
    PizzaIngredientFactory *ingredient_factory = nullptr;

    ClamPizza(PizzaIngredientFactory *stores_pizza_factory) {
        //this->ingredient_factory = stores_pizza_factory;
        ingredient_factory = stores_pizza_factory;
    }

    /*
     * Notice that this class is ignorant of which kind of ingredient it will get?
     */
    void prepare() override {
        cout << "Preparing: " << this->get_name() << endl;
        clam = ingredient_factory->create_clam();
        cheese = ingredient_factory->create_cheese();
        dough = ingredient_factory->create_dough();
        sauce = ingredient_factory->create_sauce();
    }
};

#endif // CLAMPIZZA_H_INCLUDED
