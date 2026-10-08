#include "Bank.hpp"

/* ACCOUNT */

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

/* BANK */

Bank::Bank() {

}

Bank::Bank(int liquidity) {

}

Bank::Bank(const Bank &other) {

}

Bank &Bank::operator=(const Bank &other) {

}

Bank::~Bank() {

}

void    Bank::setLiquidity(int liquidity) {
    _liquidity = liquidity;
}

int Bank::getLiquidity() const {
    return (_liquidity);
}

void    Bank::create_account(int id, int value) {

}

const Bank::Account &Bank::operator[](const size_t idx) const {
    Account *retval = NULL;
    try
    {
        retval = &clientAccounts.at(idx);
    }
    catch(const std::out_of_range& e) {
        std::cerr << "Account with that id not in bank!" << '\n';
    }
    return (*retval);
}
