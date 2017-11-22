#ifndef PIZZA_H_INCLUDED
#define PIZZA_H_INCLUDED

#include <string>
#include <memory>

#include "Ingredients.h"

class Pizza {
private:
    std::string name;

protected:
    std::unique_ptr<Clam> clam;
    std::unique_ptr<Cheese> cheese;
    std::unique_ptr<Dough> dough;
    std::unique_ptr<Sauce> sauce;

public:
    virtual void prepare() = 0;
    void bake();
    void cut();
    void box();
    std::string get_name();
    void set_name(std::string client_pizza_order);
};

#endif // PIZZA_H_INCLUDED
