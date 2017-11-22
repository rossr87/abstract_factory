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

Clam* ChicagoPizzaIngredientFactory::create_clam()
{
    return new FrozenClam();
}

Cheese* ChicagoPizzaIngredientFactory::create_cheese()
{
    return new ReggianoCheese();
}

Dough* ChicagoPizzaIngredientFactory::create_dough()
{
    return new ThinCrustDough();
}

Sauce* ChicagoPizzaIngredientFactory::create_sauce()
{
    return new MarinaraSauce();
}
