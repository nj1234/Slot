#pragma once
class Credits
{
	int credits = 0;
public:

	inline void deposit(int amount) {
		this->credits += amount;
	};
	inline void withdraw(int amount) {
		if (this->canWithdraw(amount))
			this->credits -= amount;
	};
	inline int balance() const { return this->credits; }
	inline bool canWithdraw(int amount) const {
		return this->credits - amount >= 0;
	}
};

