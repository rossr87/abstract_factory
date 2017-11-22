#include "ChicagoPizzaIngredientFactory.h"
#include "Ingredients.h"

ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{
    std::cout << "ChicagoPizzaIngredientFactory created!\n";
}

ChicagoPizzaIngredientFactory::~ChicagoPizzaIngredientFactory()
{
    std::cout << "ChicagoPizzaIngredientFactory destroyed!\n";
}

std::unique_ptr<Clam> ChicagoPizzaIngredientFactory::create_clam()
{
    return std::make_unique<FrozenClam>();
}

std::unique_ptr<Cheese> ChicagoPizzaIngredientFactory::create_cheese()
{
    return  std::make_unique<ReggianoCheese>();
}

std::unique_ptr<Dough> ChicagoPizzaIngredientFactory::create_dough()
{
    return  std::make_unique<ThinCrustDough>();
}

std::unique_ptr<Sauce> ChicagoPizzaIngredientFactory::create_sauce()
{
    return std::make_unique<MarinaraSauce>();
}
