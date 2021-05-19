//include list
#include "util/window.h"
#include "util/time.h"
#include "WindowLoad.h"
#include "entities/player.h"

#include <stdio.h>

//define list
#define null 0

void game()
{
    window();
    Player();
    playerstopper();
    solidDetect();

    return null;
}
