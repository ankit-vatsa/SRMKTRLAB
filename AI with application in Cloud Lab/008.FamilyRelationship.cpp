#include <iostream>
#include <string>
#include <vector>

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
std::vector<Person*> findSiblings(Person* person, std::vector<Relationship>& relationships) {
    std::vector<Person*> siblings;
    for (const auto& rel : relationships) {
        if (rel.parent == person) {
            siblings.push_back(rel.child);
        }
        else if (rel.child == person) {
            siblings.push_back(rel.parent);
        }
    }
    return siblings;
}

int main() {
    // Create individuals
    Person John("John", true);
    Person Mary("Mary", false);
    Person Bob("Bob", true);
    Person Alice("Alice", false);

    // Define relationships
    std::vector<Relationship> relationships = {
        Relationship(&John, &Bob),
        Relationship(&Mary, &Bob),
        Relationship(&John, &Alice),
        Relationship(&Mary, &Alice)
    };

    // Find siblings of Bob
    std::cout << "Siblings of Bob:\n";
    std::vector<Person*> bobSiblings = findSiblings(&Bob, relationships);
    for (auto sibling : bobSiblings) {
        std::cout << sibling->name << std::endl;
    }

    return 0;
}
