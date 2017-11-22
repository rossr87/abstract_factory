# abstract_factory

This code is a basic implementation of a composition of the abstract factory and factory method.

It is based on the Pizza example given in "Head First Design Patterns - A Brain Friendly Guide by O'Reilly". This version, instead of Java uses
C++.

FACTORY METHOD

A specific/concrete Pizza Store is created, e.g. NY, Chicago and returns a Pizza when a customer places an order. It is very easy to add a new
Pizza Store's that behave uniformly. All that is needed is to inherit the abstract PizzaStore class and to implement the create_pizza member
function. This is the *only* thing each concrete Pizza Store will do differently. Because all other behaviors are the same; slicing, boxing,
baking etc.

ABSTRACT FACTORY
**Brief overview to do**
