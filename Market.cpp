#include "Market.h"

Market::Market() {
	Wallet wallet;
	Wallets["init_user"] = wallet;
	Wallets["init_user"].deposit("BTC", 5);
}

Wallet& Market::get_wallet(std::string user) {
	return Wallets[user];
}

