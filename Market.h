#include "Wallet.h"
#include <string>

class Market {
	public:
		Market();
		Wallet& get_wallet(std::string user);
	private:
		std::map<std::string ,Wallet> Wallets;
};
