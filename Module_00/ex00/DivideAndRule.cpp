#include "Bank.hpp"

int main()
{
    Bank   bank(500);
    bank.create_account(0, 100);
    bank.create_account(1, 50);

	bank.clientAccounts.push_back(&accountA);
	bank.clientAccounts.push_back(&accountB);

	bank.liquidity -= 200;
	accountA.value += 400;

	std::cout << "Account : " << std::endl;
	std::cout << accountA << std::endl;
	std::cout << accountB << std::endl;

	std::cout << " ----- " << std::endl;

	std::cout << "Bank : " << std::endl;
	std::cout << bank << std::endl;

	return (0);
}
