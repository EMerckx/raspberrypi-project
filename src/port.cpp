#include "port.h"

Port<INPUT>::Port(unsigned int port_number, unsigned int state) : AbstractPort(port_number, state) {
    pinMode(port_number, INPUT);
}

Port<OUTPUT>::Port(unsigned int port_number, unsigned int state) : AbstractPort(port_number, state) {
    pinMode(port_number, OUTPUT);
}

template<int T>
unsigned int Port<T>::state() const {
    if (T == INPUT) {
        state_ = Read();
    }
    return state_;
}

template<int T>
void Port<T>::set_state(unsigned int state) {
    if (T == OUTPUT) {
        state_ = state;
        Write();
    }
}

template<int T>
void Port<T>::Write() {
    if (T == OUTPUT) {
        digitalWrite(port_number_, state_);
    }
}

template<int T>
unsigned int Port<T>::Read() const {
    if (T == INPUT) {
        state_ = digitalRead(port_number_);
    }
    return state_;
}

string Port<INPUT>::to_string() const {
    string str = "Port<INPUT> { ";
    str += "port_number = " + port_number + ", ";
    str += "state = " + state_;
    str += " }";
    return str;
}

string Port<OUTPUT>::to_string() const {
    string str = "Port<OUTPUT> { ";
    str += "port_number = " + port_number + ", ";
    str += "state = " + state_;
    str += " }";
    return str;
}