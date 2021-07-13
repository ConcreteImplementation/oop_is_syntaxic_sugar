# OOP is syntaxic sugar

### An naive experiment on what a compiler might do to build objects

The `classical three pillars` folder is a review of the old C idioms. The `encaspulated inheritance` and `interface segregation` build on them, subscribing to the following constraints.

##### Preserve C idiom
Refrain from very long `#define` and no framework wrappings

##### Burden off of client code
The work should be encapsulated, favoring lisibility of client code

##### Typesafe
The pattern should provide casting aid for the client

#
### Summary

- Encapsulated inheritance uses a *public* `union` of pointers referencing the address of nested types inside a related *private* data structure.
- Interface segregation uses a *public* `struct` of pointers referencing the different types implemented/inherited inside a related *private* data structure.

In both cases, the `typedef` is `const` so that its pointers can not be changed from the client code, and pointer indirection is used from within the encapsulation to set and free the type.

From the client code side, the members of the structure are used as casts. From the server code side, once within the referenced `static` function, the casting is relatively safe because the only way to access this code is via the type builder (`new_`).