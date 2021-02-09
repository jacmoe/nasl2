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
#include "Application.hpp"

Application::Application()
    : m_scale(0)
    , m_width(0)
    , m_height(0)
    , m_fullscreen(false)
    , m_show_map(false)
    , m_title("")
    , m_running(false)
    , m_show_fps(false)
    , m_should_exit(false)
{}

Application::~Application()
{
}

bool Application::init(const std::string title, int width, int height, float scale, const bool fullscreen)
{
    m_width = width;
    m_height = height;
    m_scale = scale;
    m_title = title;
    m_fullscreen = fullscreen;

    return true;
}

void Application::run()
{
    m_running = true;

    if (!OnUserCreate()) m_running = false;

    while (!true && m_running )
    {
        event();

        OnUserUpdate(1.0);

        render();
    }
    OnUserDestroy();
}

void Application::event()
{
}

void Application::render()
{
    OnUserRender();
}
