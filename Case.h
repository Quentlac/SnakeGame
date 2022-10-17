//
// Created by quent on 17/10/2022.
//

#ifndef UNTITLED1_CASE_H
#define UNTITLED1_CASE_H


class Case {
public:
    Case(int x, int y);
    inline int getX() const;
    inline int getY() const;

private:
    int m_x;
    int m_y;
};

int Case::getY() const {
    return this->m_y;
}

int Case::getX() const {
    return this->m_x;
}


#endif //UNTITLED1_CASE_H
