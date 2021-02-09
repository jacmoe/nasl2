/*# The
# ███╗   ██╗ █████╗ ███████╗██╗     ██████╗ 
# ████╗  ██║██╔══██╗██╔════╝██║     ╚════██╗
# ██╔██╗ ██║███████║███████╗██║      █████╔╝
# ██║╚██╗██║██╔══██║╚════██║██║     ██╔═══╝ 
# ██║ ╚████║██║  ██║███████║███████╗███████╗
# ╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝
#   project
#
#   https://github.com/jacmoe/nasl2
#
#   (c) 2021 Jacob Moena
#
#   Zlib License
#*/
#include "Game.hpp"

Game::Game()
{
}

Game::~Game()
{
}

bool Game::OnUserCreate()
{
    return true;
}

bool Game::OnUserUpdate(double deltaTime)
{
    return true;
}

bool Game::OnUserRender()
{
    return true;
}

bool Game::OnUserDestroy()
{
    return true;
}
