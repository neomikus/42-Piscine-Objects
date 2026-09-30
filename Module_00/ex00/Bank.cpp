#include "Bank.hpp"



Bank::Account::Account(): _id(-1), _value(0.0) {

}

Bank::Account::Account(int id, int value): _id(id), _value(value) {

}

Bank::Account::Account(const Account &other) {
    this->_id = other.getId();
    this->_value = other.getValue();
}

Bank::Account &Bank::Account::operator=(const Account &other) {
    *this = other;
    return (*this);
}

Bank::Account::~Account() {

}

int Bank::Account::getId() const {
    return (_id);
}

int Bank::Account::getValue() const {
    return (_value);
}