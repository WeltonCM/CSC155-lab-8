#include <vector>
#include <iostream>
#include "Mailbox.h"

Mailbox::Mailbox() {
    messageCount = 0;
    std::vector<Message> inbox;
}

void Mailbox::add_message(Message m) {
    inbox.push_back(m);
    messageCount ++;
}

Message Mailbox::get_message(int i) const {
    return inbox[i];
}

void Mailbox::remove_message(int i) {
    inbox.erase(inbox.begin() + i);
}

void Mailbox::print() {
    printf("There %s %zu %s in the inbox:", inbox.size() > 1 ? "are" : "is" ,inbox.size(), inbox.size() > 1 ? "emails" : "email");

    int index = 0;
    for(auto & message: inbox){
        std::cout<<"\nMessage: " << index + 1 << std::endl;
        message.print();
        index ++;
        std::cout << "\n"; 
    }
}