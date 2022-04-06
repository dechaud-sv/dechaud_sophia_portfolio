// Sophia DeChaud
// CSCE306, Spring 2022
// LottoGame.h

// Header file for LottoGame class for my portfolio project (Data scanner/analyzer)

#include <string>
#include <vector>
#include <iostream>
using namespace std;


#ifndef DECHAUD_SOPHIA_PORTFOLIO_GRAPHING_H
#define DECHAUD_SOPHIA_PORTFOLIO_GRAPHING_H


class LottoGame {
    private:
        int _score;
        vector<int> _numbers;
        vector<int> _picks;
    public:
        virtual void set_picks() = 0;
        virtual void set_numbers() = 0;
        // getters
        int get_score() {
            return _score;
        }
        void set_score(int s) {
            _score = s;
        }

};

// private method bc now _numbers and _picks are private when tbhis is instanitated
class Lotto : public LottoGame {

};


#endif //DECHAUD_SOPHIA_PORTFOLIO_GRAPHING_H
