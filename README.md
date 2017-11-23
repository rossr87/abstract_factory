# abstract_factory

This code is a basic implementation of a composition of the abstract factory and factory method.

It is based on the Pizza example given in "Head First Design Patterns - A Brain Friendly Guide by O'Reilly". This version, instead of Java uses
C++.

FACTORY METHOD

An (abstract) PizzaStore class is used to describe the behaviours of all PizzaStores. The only details that differ
is the mechanism of Pizza creation, this is reflected by implementing different create_pizza methods in the subclasses of
the PizzaStore.

ABSTRACT FACTORY

Pizzas are built with the same "general" ingredients - dough, cheese, sauce, but different styles; NY, Chicago, etc.
Pizza has:
    Dough
    Cheese
    Sauce

These components are provided by a PizzaIngredientFactory. There are two different PizzaIngredientFactory classes. Each
one is responsible for providing the appropriate ingredients. When a Pizza is created, it is passed a reference
to the appropriate PizzaIngredientFactory. The Pizza then calls on the methods in this PizzaIngredientFactory to provide
the appropriate ingredients.
