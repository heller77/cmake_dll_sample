#include <hello.h>
#include <goodafternoon.h>
#include <Enemy.h>
int main()
{
    hello();
    goodafternoon();
    auto enemy = new Enemy();
    enemy->Attack();
}