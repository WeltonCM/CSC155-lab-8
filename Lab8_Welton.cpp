/*
Name: Lab8_Welton
Author: Christopher Welton
Description: This program stores email messages into an inbox
*/

#include <iostream>
#include "Mailbox.h"

using namespace std;

int main() {
    Mailbox myMail;
    Message message1("Jim", "Bob", "Hello, see ya later!");
    myMail.add_message(message1);

    Message message2("Alice", "Suzie", "I'm running late!");
    Time message2TimeUpdate(6, 21, 44);
    message2.setTime(message2TimeUpdate);

    myMail.add_message(message2);
    myMail.get_message(0).print();

    myMail.print();
    myMail.remove_message(0);
    myMail.print();

    return 0;
}