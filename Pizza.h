#ifndef PIZZA_H_INCLUDED
#define PIZZA_H_INCLUDED

#include <string>
#include "Ingredients.h"

using std::string;

class Pizza {
private:
    string name;

    /*
     * we want to be able to manipulate these in the subclass,
     * but we want to hide them from the PizzaStore class and all others.
     */

protected:
    Clam *clam;
    Cheese *cheese;
    Dough *dough;
    Sauce *sauce;

public:
    /*
     * Each subclass will prepare it's Pizza differently.
     * More specifically, each object of that type of subclass will be preared differently,
     * depending on what is passed to it at runtime (in terms of which factory is).
     * A Cheese Pizza will have itself prepared using.
     *
     * For a given factory: All,
     */
    virtual void prepare() = 0;

    void bake() {
        cout << "Baking..." << endl;
    }
    void cut() {
        cout << "Cutting..." << endl;
    }
    void box() {
        cout << "Boxing..." << endl;
    }
    string get_name() {
        return name;
    }
    void set_name(string client_pizza_order) {
        name = client_pizza_order;
    }
};

#endif // PIZZA_H_INCLUDED
