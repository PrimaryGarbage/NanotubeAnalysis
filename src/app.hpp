#ifndef APP_HPP
#define APP_HPP

#include <raylib-cpp.hpp>

namespace nano
{

class App
{
private:
    raylib::Window window;

    int init();
public:
    App(int windowWidth, int widnowHeight, char* windowName);
    App(const App& other) = delete;

    int run();
};

} // namespace nano
#endif // APP_HPP