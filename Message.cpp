/*
 * Message.cpp
 * Implementation of the Message class.
 *  Created on: Oct 7, 2019
 *      Author: itemesva
 */

#include "Message.h"
#include <iostream>
using namespace std;

//default constructor.
Message::Message(){
	sender = "";
	recipient = "";
	message = "";
	stamp = Time();   //there is no time stamp yet.
}

Message::Message(string s, string r, string m){
	sender = s;
	recipient = r;
	message = m;
	stamp = Time();   //set the time of this Message to the current time (now).
}


void Message::append(string m){
	message.append(" " + m);
}

void Message::print(){
	cout << Message::to_string() << endl;

}

string Message::to_string(){
	string theMessage = "From: " + sender + "\n" + "To: " + recipient + "\n" + "Message: " + message + "\n" + "Timestamp: " + stamp.to_string();

	return theMessage;
}


void Message::setTime(Time& t){
	stamp = t;
}

