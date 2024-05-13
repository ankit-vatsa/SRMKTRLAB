#include <iostream>
#include <string>

// Define a Person class to represent individuals
class Person {
public:
    std::string name;
    bool isMale;
    Person(std::string name, bool isMale) : name(name), isMale(isMale) {}
};

// Define a Relationship class to represent relationships between people
class Relationship {
public:
    Person* parent;
    Person* child;
    Relationship(Person* parent, Person* child) : parent(parent), child(child) {}
};

// Function to find siblings of a person
void findSiblings(Person* person, Relationship* relationships, int numRelationships) {
    std::cout << "Siblings of " << person->name << ":\n";
    for (int i = 0; i < numRelationships; ++i) {
        if (relationships[i].parent == person) {
            std::cout << relationships[i].child->name << std::endl;
        }
        else if (relationships[i].child == person) {
            std::cout << relationships[i].parent->name << std::endl;
        }
    }
}

int main() {
    // Create individuals
    Person John("John", true);
    Person Mary("Mary", false);
    Person Bob("Bob", true);
    Person Alice("Alice", false);

    // Define relationships
    Relationship relationships[] = {
        Relationship(&John, &Bob),
        Relationship(&Mary, &Bob),
        Relationship(&John, &Alice),
        Relationship(&Mary, &Alice)
    };
    int numRelationships = sizeof(relationships) / sizeof(relationships[0]);

    // Find siblings of Bob
    findSiblings(&Bob, relationships, numRelationships);

    return 0;
}
