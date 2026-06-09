#include <string>
#include <map>

class Wallet {
	public:
		Wallet();
		/**
		 * void inert_curreny(std::string type, double amount)
		 * to add money to your wallet:
		 * string type: the type of the currency you're depositing
		 * double amount: the amount of money to deposit
		 *
		 * return: Void
		 * */
		bool deposit(std::string type, double amount);
		/**
		 * void inert_curreny(std::string type, double amount)
		 * to add money to your wallet:
		 * string type: the type of the currency you're depositing
		 * double amount: the amount of money to deposit
		 *
		 * return: Void
		 * */
		bool withdarw(std::string type, double amount);
		/**
		 * bool contains_currency(std::string type, double amount);
		 * Check whether the Wallet have sufficient amount of currency
		 * string type: the type of the currency to check
		 * double amount: the amount to check;
		 *
		 * return: wallet moeny >= amount ? true : false
		 * */
		bool contains_currency(std::string type, double amount);
		void print_wallet(Wallet w);
		std::map<std::string, double> get_currencies();
	private:
		std::map<std::string, double> currencies;
};
