#include <memory>

#include "NYPizzaIngredientFactory.h"

NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{
    std::cout << "NYPizzaIngredientFactory created!\n";
}

NYPizzaIngredientFactory::~NYPizzaIngredientFactory()
{
    std::cout << "NYPizzaIngredientFactory destroyed!\n";
}

std::unique_ptr<Clam> NYPizzaIngredientFactory::create_clam()
{
    return std::make_unique<FreshClam>();
}

std::unique_ptr<Cheese> NYPizzaIngredientFactory::create_cheese()
{
    return std::make_unique<MozarellaCheese>();
}

std::unique_ptr<Dough> NYPizzaIngredientFactory::create_dough()
{
    return std::make_unique<ThickCrustDough>();
}

std::unique_ptr<Sauce> NYPizzaIngredientFactory::create_sauce()
{
    return std::make_unique<PlumTomatoSauce>();
}
