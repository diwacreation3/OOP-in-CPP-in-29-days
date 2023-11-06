# Inheritance in C++

The capability of a class to derive properties and characteristics from another class is called inheritance. inheritance is one of the most important features of Object-Oriented Programming.

Inheritance is a feature or a process in which, new classes are created is called "derived class" or "child class" and existing class is known as the "base class" or "parent class". The derived class noe is said to be inherited from the base class.

When we say derived class inheritance the base class, it means, the drived class inherits all the properties of the base class, without changing the properties of base clas and may add new features to its own. These new features in the derived class will not affect the base class. The derived class is the specilized class for the base class

- **Sub Class:** The class that inherits properties from another class is called Subclass or Derived Class.
- **Super Class:** The class whose properties are inherited by a subclass is called base class or Superclass.


##  Why and when to use inheritance?
Consider a group of vehicles. you need to create classes for Bus,Car, and truck. The methods fuelAmount(), capacity(), applyBreak() will be the same for all three classes. if we create these classes avoiding inheritance then we have to write all of these function of the three classes as shown belw figure:

!["inheritance-example"](/images/inheritance.png)

You can clearly see that the above results in duplication of the same code # times. this increases the chances of erroe and data redundancy. To avoid this type of situation, inheritance is used. if we created a class Vehicle and Write class, then we can simply avoid the duplication of dat and increase re-usability. look at the below diagram to which three classes are inherited from vehicle class

!["inherited-vehicle-class"](/images/inheritance-1.png)

using inhertitance, we have to write the functions only one time insted of three times as we have inherited the rest of the three classes from the base class (Vehicle)