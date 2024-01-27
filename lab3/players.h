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
            std::cout << "�����: " << name << ", ����� � ����: " << playTime << " ���, �������� �����: " << penaltyTime << " ���\n";
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
            std::cout << "������ �� �������: " << saves + misses << ", ��������: " << saves << ", ���������: " << misses << "\n";
        }
    };

    class Defender : public Player {
    public:
        Defender(const std::string& playerName, double playTime, double penaltyTime)
            : Player(playerName, playTime, penaltyTime) {}

        // ����� �������� ����������� �������� ���������, ���� ����������
    };

    class Forward : public Player {
    public:
        int shots;
        int goals;

        Forward(const std::string& playerName, double playTime, double penaltyTime, int shots, int goals)
            : Player(playerName, playTime, penaltyTime), shots(shots), goals(goals) {}

        void displayInfo() override {
            Player::displayInfo();
            std::cout << "������ �� �������: " << shots << ", ������ �����: " << goals << "\n";
        }
    };
}

#endif PLAYERS