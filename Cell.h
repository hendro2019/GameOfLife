#ifndef CELL_H
#define CELL_H
class Cell {
    public:
        Cell();
        bool isAlive() {return alive;}
        int getX() {return x;}
        int getY() {return y;}
        void draw();
        void setPosition();
        void kill();
        void born();
        void update();
    private:
        bool alive;
        int x;
        int y;


};
#endif
