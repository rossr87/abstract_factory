#ifndef PIZZA_H_INCLUDED
#define PIZZA_H_INCLUDED

#include <string>
#include "Ingredients.h"

class Pizza {
private:
    std::string name;

protected:
    Clam *clam;
    Cheese *cheese;
    Dough *dough;
    Sauce *sauce;

public:
    virtual void prepare() = 0;
    void bake();
    void cut();
    void box();
    std::string get_name();
    void set_name(std::string client_pizza_order);
};

#endif // PIZZA_H_INCLUDED
