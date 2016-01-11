#ifndef __project_1__Game__
#define __project_1__Game__

class Arena;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nRobots);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
};

#endif /* defined(__project_1__Game__) */
