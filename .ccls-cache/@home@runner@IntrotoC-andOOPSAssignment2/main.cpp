/*
Create a base class Enemy.
Inherit Flying Enemy and Ground Enemy classes from the base class Enemy.
Use member variables (data members) such as health, attackPower, attackRange, XP, Level, etc. in the Enemy class, Flying Enemy and Ground Enemy.
Implement getter and setter methods to respectively store or retrieve data from these variables in their respective classes.
Implement different member variables and member functions in each class depending upon the type of the enemy. For eg. the Flying enemy will have flyingRadius but the ground enemy will have patrollingRadius, likewise.
Implement cool functionalities in each enemy class, e.g implement the Fly() function in flying enemy and in that function print funny/sarcastic/sexy looking messages on the console
  */
#include <iostream>
using namespace std;
class Enemy {
protected:
    int health;
    int attackPower;
    int attackRange;
    int XP;
    int Level;

public:
    // Constructor
    Enemy(int health, int attackPower, int attackRange, int XP, int Level)
        : health(health), attackPower(attackPower), attackRange(attackRange), XP(XP), Level(Level) {}

    // Getter methods
    int getHealth() const { return health; }
    int getAttackPower() const { return attackPower; }
    int getAttackRange() const { return attackRange; }
    int getXP() const { return XP; }
    int getLevel() const { return Level; }

    // Setter methods
    void setHealth(int h) { health = h; }
    void setAttackPower(int ap) { attackPower = ap; }
    void setAttackRange(int ar) { attackRange = ar; }
    void setXP(int xp) { XP = xp; }
    void setLevel(int lvl) { Level = lvl; }
};

class FlyingEnemy : public Enemy {
private:
    int flyingRadius;

public:
    // Constructor
    FlyingEnemy(int health, int attackPower, int attackRange, int XP, int Level, int flyingRadius)
        : Enemy(health, attackPower, attackRange, XP, Level), flyingRadius(flyingRadius) {}

    // Getter method
    int getFlyingRadius() const { return flyingRadius; }

    // Setter method
    void setFlyingRadius(int fr) { flyingRadius = fr; }

    // Functionality for flying enemy
    void fly() {
        std::cout << "I'm flying around gracefully!" << std::endl;
    }
};

class GroundEnemy : public Enemy {
private:
    int patrollingRadius;

public:
    // Constructor
    GroundEnemy(int health, int attackPower, int attackRange, int XP, int Level, int patrollingRadius)
        : Enemy(health, attackPower, attackRange, XP, Level), patrollingRadius(patrollingRadius) {}

    // Getter method
    int getPatrollingRadius() const { return patrollingRadius; }

    // Setter method
    void setPatrollingRadius(int pr) { patrollingRadius = pr; }

    // Functionality for ground enemy
    void patrol() {
         cout << "I'm patrolling the area, looking for intruders..." << std::endl;
    }
};

int main() {
    FlyingEnemy flyingEnemy(100, 20, 10, 50, 5, 30);
    cout << "Flying Enemy Health: " << flyingEnemy.getHealth() << std::endl;
    flyingEnemy.fly();

    GroundEnemy groundEnemy(150, 30, 15, 75, 6, 50);
    cout << "Ground Enemy Health: " << groundEnemy.getHealth() << std::endl;
    groundEnemy.patrol();

    return 0;
}
