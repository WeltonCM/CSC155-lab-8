#ifndef MAILBOX_H_
#define MAILBOX_H_
#include "Message.h"
#include <vector>

class Mailbox {
    private:
        int messageCount;
        vector<Message> inbox;
    public:
        Mailbox();
        void add_message(Message m);
        Message get_message(int i) const;
        void remove_message(int i);
        void print();
};

#endif