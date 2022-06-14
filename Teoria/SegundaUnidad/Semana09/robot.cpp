#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

const char* characters = "ABCDEFGHIJKLMNOPQRSTUVWXY";

class Robot {
    private:
        char* name;
    public:
        Robot(char* _name) {
            this->name = _name;
        }
        ~Robot() {}

        char* getName() {
            return this->name;
        }

        void setName(char* _name) {
            this->name = _name;
        }
};

class Fabrica {
    private:
        vector<Robot*> robots;
    public:
        Fabrica() {}
        ~Fabrica() {}
        void addRobot() {
            bool endWhile = true;
            char* name = new char[5];
            do {
                bool endWhile = true;
                name[0] = characters[rand() % 25];
                name[1] = characters[rand() % 25];
                name[2] = *to_string(rand() % 10).c_str();
                name[3] = *to_string(rand() % 10).c_str();
                name[4] = *to_string(rand() % 10).c_str();
                for (Robot* rob: this->robots) {
                    if (rob->getName() == name) {
                        endWhile = false;
                        break;
                    } 
                }
            } while (!endWhile);
            Robot* robot = new Robot(name);
            this->robots.push_back(robot);
        } 
        
        void resetAllRobots() {
            for (int i = 0; i < this->robots.size(); ++i) {
                bool endWhile = true;
                char* name = new char[5];
                do {
                    bool endWhile = true;
                    name[0] = characters[rand() % 25];
                    name[1] = characters[rand() % 25];
                    name[2] = *to_string(rand() % 10).c_str();
                    name[3] = *to_string(rand() % 10).c_str();
                    name[4] = *to_string(rand() % 10).c_str();
                    for (Robot* rob: this->robots) {
                        if (rob->getName() == name) {
                            endWhile = false;
                            break;
                        } 
                    }
                } while (!endWhile);
                this->robots[i]->setName(name);
            }
        }

        void printAllRobots() {
            for (Robot* rob: this->robots) {
                printf("Robot: %s\n", rob->getName());
            }
        }
};

int main() {
    srand(time(NULL));
    Fabrica* fab = new Fabrica();
    for (int i = 0; i < 100; ++i) {
        fab->addRobot();
    }
    printf("ORIGINALS:\n");
    fab->printAllRobots();
    fab->resetAllRobots();
    printf("\nRESETS:\n");
    fab->printAllRobots();
}
