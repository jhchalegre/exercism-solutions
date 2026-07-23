#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
    int counter{0};
    List::Element* current_element = head;
    while (true){
        if (current_element == nullptr){
            return static_cast<size_t>(counter);
        }
        ++counter;
        current_element = current_element->next;
    }
}

void List::push(int entry) {
    List::Element* new_element = new List::Element(entry); //creates new element with data = entry
    new_element->next = List::head; //points the new element's next pointer to the head  
    List::head = new_element; //places the adress of new element as head of the list
}

int List::pop() {
    int value{List::head->data};
    List::head = List::head->next;
    return value;
}

void List::reverse() {
    List::Element* current_element{head};
    List::Element* last_ptr{nullptr};
    List::Element* backup_ptr{nullptr};
    while (current_element != nullptr){
        backup_ptr = current_element->next; 
        current_element->next = last_ptr;
        last_ptr = current_element; 
        current_element = backup_ptr; 
    }
    List::head = last_ptr;
}

List::~List() {
    // TODO: Ensure that all resources are freed on destruction
}

}  // namespace simple_linked_list
