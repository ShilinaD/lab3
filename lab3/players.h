#ifndef PLAYERS
#define PLAYERS
#pragma once

#include <iostream>
#include <string>

namespace Lab3 {
    class Player {
    public:
        std::string name;
        double playTime;
        double penaltyTime;

        Player(const std::string& playerName, double playTime, double penaltyTime)
            : name(playerName), playTime(playTime), penaltyTime(penaltyTime) {}

        virtual void displayInfo() {
            std::cout << "Игрок: " << name << ", Время в игре: " << playTime << " мин, Штрафное время: " << penaltyTime << " мин\n";
        }
    };

    class Goalkeeper : public Player {
    public:
        int saves;
        int misses;

        Goalkeeper(const std::string& playerName, double playTime, double penaltyTime, int saves, int misses)
            : Player(playerName, playTime, penaltyTime), saves(saves), misses(misses) {}

        void displayInfo() override {
            Player::displayInfo();
            std::cout << "Броски по воротам: " << saves + misses << ", Отражено: " << saves << ", Пропущено: " << misses << "\n";
        }
    };

    class Defender : public Player {
    public:
        Defender(const std::string& playerName, double playTime, double penaltyTime)
            : Player(playerName, playTime, penaltyTime) {}

        // Можно добавить специфичные свойства защитника, если необходимо
    };

    class Forward : public Player {
    public:
        int shots;
        int goals;

        Forward(const std::string& playerName, double playTime, double penaltyTime, int shots, int goals)
            : Player(playerName, playTime, penaltyTime), shots(shots), goals(goals) {}

        void displayInfo() override {
            Player::displayInfo();
            std::cout << "Броски по воротам: " << shots << ", Забито голов: " << goals << "\n";
        }
    };
}

#endif PLAYERS