## Store Inventory 📝

This C++ inventory system is a console application designed to manage products in a store. The program allows adding, removing, and listing products in the inventory using object-oriented programming principles such as inheritance, aggregation, overloading, overriding, and polymorphism.

This type of inventory system has direct applications in commercial and business environments as it helps maintain control over the quantities of available products. This is crucial for supply chain management. By recording prices and quantities, the system can be used to value the current inventory and forecast purchasing or production needs.

## Solution ✅

1. The Proper Classes are Identified:

The design of the inventory management system correctly identifies and implements the necessary classes:

Product (Base Class):

- Encapsulates common attributes and behaviors for all types of products.
- Defines a common interface for all product types.

Fruit (Derived Class):

- Extends Product with attributes specific to fruits, such as origin.

Electronic (Derived Class):

- Extends Product with attributes specific to electronic products, such as warrantyPeriod.

Clothing (Derived Class):

- Extends Product with attributes specific to clothing items, such as size and material.

Store:

- Manages a collection of products, providing methods to add, remove, list, save, and load products.

2. Inheritance is implemented properly.

Inheritance is used effectively to promote code reuse and establish a hierarchical relationship between products:

Base Class Product:

- Serves as the base class with common attributes (name, price, quantity) and a pure virtual method (getDetails).

Derived Classes Fruit, Electronic, Clothing:

- Extend Product and provide additional specific attributes and behaviors.
- Each derived class overrides the getDetails method to provide specific product information.

3. Access modifiers are implemented properly.

Access modifiers are used to enforce encapsulation and data hiding:

Protected Members:

- Data members in Product (e.g., name, price, quantity) are protected, ensuring they can be accessed and modified by derived classes while still being hidden from other parts of the code.

Public Methods:

- Accessor and mutator methods (getName, setName, getPrice, setPrice, getQuantity, setQuantity) provide controlled access to the protected data members.
- Virtual methods like getDetails ensure that derived classes can override behavior while maintaining a consistent interface.

4. Method overriding is implemented properly.

Method overriding is used to provide specific implementations of a method in derived classes:

Virtual Function in Base Class:

- Product defines getDetails as a pure virtual function (virtual std::string getDetails() const = 0).

Overridden Methods in Derived Classes:

- Fruit, Electronic, and Clothing override getDetails to return product-specific details.

5. Polymorphism is implemented properly.

Polymorphism is effectively used to manage different product types uniformly:

Base Class Pointers/References:

- The Store class uses std::shared_ptr<Product> to manage a collection of products, allowing it to treat all products uniformly.

Virtual Functions:

- The virtual function getDetails in Product allows the Store to call this method on any product, regardless of its specific type.

6. Abstract classes are implemented properly.

The Product class is correctly implemented as an abstract class:

Pure Virtual Function:

- Product defines getDetails as a pure virtual function, making Product an abstract class that cannot be instantiated directly.

Derived Classes:

- Fruit, Electronic, and Clothing provide concrete implementations of getDetails, allowing them to be instantiated.

7. At least one operator is overloaded properly.

Operator overloading is used to provide a custom implementation of the stream insertion operator (<<) for the Product class:

Friend Function:

- The Product class declares a friend function operator<< to allow direct access to its protected members.

Custom Implementation:

- The operator<< function calls the getDetails method on a Product object and inserts the resulting string into the output stream.
