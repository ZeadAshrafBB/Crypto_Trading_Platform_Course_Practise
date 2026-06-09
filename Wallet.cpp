#include "Wallet.h"
#include<iostream>
#include <string>
#include <map>

Wallet::Wallet() {
	currencies["BTC"] = 0;
	currencies["ETH"] = 0;
	currencies["USDT"] = 0;
}

bool Wallet::deposit(std::string type, double amount) {
	if (amount < 0) {
		return false;
	}

	if (currencies.count(type) == 0) {
		currencies[type] = amount;
	} else {
		currencies[type] += amount;
	}
	return true;
}
bool Wallet::withdarw(std::string type, double amount) {
	if (currencies.count(type) == 0 || amount < 0) {
		return false;
	}

	if (contains_currency(type, amount)) {
		currencies[type]-=amount;
	} else {
		return false;
	}
	return true;
}

bool Wallet::contains_currency(std::string type, double amount) {
	if (currencies.count(type) == 0) {
		return 0;	
	} else {
		return currencies[type] >= amount;
	}
}

std::map<std::string, double> Wallet::get_currencies() {
	return currencies;
}

void Wallet::print_wallet(Wallet w) {
	std::map<std::string, double> currencies = w.get_currencies();
	std::cout << "You Own:\n";
	for (const auto& [currency, amount] : currencies) {
		std::cout << currency << ": " << amount <<"\n";
	}
}
