#include <iostream>
#include <map>

class Bank {
    private:
        class Account
        {
            private:
                size_t _id;
                double _value;

            public:
                Account();
                Account(int id, int value);
                Account(const Account &other);
                Account &operator=(const Account &other);
                ~Account();

                int getId() const;

                int getValue() const;

        };

        int _liquidity;
        std::map<int, Account &> clientAccounts;
    public:
        Bank();
        Bank(int liquidity);
        Bank(const Bank &other);
        Bank &operator=(const Bank &other);
        ~Bank();

        void    setLiquidity(int liquidity) {
            _liquidity = liquidity;
        }

        int getLiquidity() const {
            return (_liquidity);
        }

        void    create_account(int id, int value);

        Account &operator[](const size_t idx);
        const Account &operator[](const size_t idx) const;
};
