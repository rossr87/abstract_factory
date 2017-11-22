#include "NYPizzaIngredientFactory.h"

NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{
    std::cout << "NYPizzaIngredientFactory created!\n";
}

NYPizzaIngredientFactory::~NYPizzaIngredientFactory()
{
    std::cout << "NYPizzaIngredientFactory destroyed!\n";
}

Clam* NYPizzaIngredientFactory::create_clam()
{
    return new FreshClam();
}

Cheese* NYPizzaIngredientFactory::create_cheese()
{
    return new MozarellaCheese();
}

Dough* NYPizzaIngredientFactory::create_dough()
{
    return new ThickCrustDough();
}

Sauce* NYPizzaIngredientFactory::create_sauce()
{
    return new PlumTomatoSauce();
}
