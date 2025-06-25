#pragma once
enum class BetAmount { FIVE = 5, TEN = 10, FIFTY = 50, HUNDRED = 100 };

static  BetAmount betLevels[] = {
    BetAmount::FIVE, BetAmount::TEN, BetAmount::FIFTY, BetAmount::HUNDRED
};

constexpr size_t betLevelsCount = sizeof(betLevels) / sizeof(betLevels[0]);

BetAmount& operator++( BetAmount& b) {
    for (size_t i = 0; i < betLevelsCount; ++i) {
        if (betLevels[i] == b){
            b = betLevels[(i + 1) % betLevelsCount];
            return b;
        }
            
    }
    return b; 
}

BetAmount& operator--(BetAmount& b) {
    for (size_t i = 0; i < betLevelsCount; ++i) {
        if (betLevels[i] == b) {
            b = betLevels[(i + betLevelsCount - 1) % betLevelsCount];
            return b;
        }
    }
    return b; 
}



class Bets
{
	BetAmount betAmount;

public:
	Bets() : betAmount(BetAmount::FIVE) {}
	inline void increaseBet() { ++betAmount; };
	inline void decreaseBet() { --betAmount; };
	inline BetAmount getBet() const { return betAmount; }
    inline int getBetValue() const { return static_cast<int>(betAmount); }
};

