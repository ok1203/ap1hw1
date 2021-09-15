#ifndef L1_IA2001_ENEMY_H
#define L1_IA2001_ENEMY_H


class Enemy {
public:
    Enemy(int HP, int maxHP, int atk, int level);

    int getHp() const;

    int getMaxHp() const;

    int getAtk() const;

    int getLevel() const;

private:
    int HP;
    int maxHP;
    int atk;
    int level;

};


#endif //L1_IA2001_ENEMY_H
