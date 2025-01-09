/* (Inheritance) M.I.P🔥

The concept of reusability in C++ is supported using inheritance.
We can reuse the properties of an existing class by inheriting it.
The existing class is called a (Base class).
The new class which is inherited from the base class is called a (Derived class).
Reusing classes saves time and money.
There are different types of inheritance in C++. 

(Forms of Inheritance in C++)

Single Inheritance
Multiple Inheritance
Hierarchical Inheritance
Multilevel Inheritance
Hybrid Inheritance

1. (Single Inheritance in C++)

 Single inheritance is a type of inheritance in which a derived class is inherited with only one base class. For example, we have two classes “employee” and “programmer”. If the “programmer” class is inherited from the “employee” class which means that the “programmer” class can now implement the functionalities of the “employee” class.

2. (Multiple Inheritances in C++)

  Multiple inheritances are a type of inheritance in which one derived class is inherited with more than one base class. For example, we have three classes “employee”, “assistant” and “programmer”. If the “programmer” class is inherited from the “employee” and “assistant” class which means that the “programmer” class can now implement the functionalities of the “employee” and “assistant” class.

3. (Hierarchical Inheritance)

 A hierarchical inheritance is a type of inheritance in which several derived classes are inherited from a single base class. For example, we have three classes “employee”, “manager” and “programmer”. If the “programmer” and “manager” classes are inherited from the “employee” class which means that the “programmer” and “manager” class can now implement the functionalities of the “employee” class.

4. (Multilevel Inheritance in C++)

 Multilevel inheritance is a type of inheritance in which one derived class is inherited from another derived class. For example, we have three classes “animal”, “mammal” and “cow”. If the “mammal” class is inherited from the “animal” class and “cow” class is inherited from “mammal” which means that the “mammal” class can now implement the functionalities of “animal” and “cow” class can now implement the functionalities of “mammal” class.

5. (Hybrid Inheritance in C++)

 Hybrid inheritance is a combination of multiple inheritance and multilevel inheritance. In hybrid inheritance, a class is derived from two classes as in multiple inheritances. However, one of the parent classes is not a base class. For example, we have four classes “animal”, “mammal”, “bird”, and “bat”. If “mammal”  and “bird” classes are inherited from the “animal” class and “bat” class is inherited from “mammal” and “bird” classes which means that “mammal” and “bird” classes can now implement the functionalities of “animal” class and “bat” class can now implement the functionalities of “mammal” and “bird” classes. */


// A base class --> is a class from which other classes can be inherited. It is also called as a ‘super class’ or a ‘parent class’. 

// A derived class --> is a class that is constructed from a base class or an existing class.


 