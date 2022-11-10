#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>

#include <imgui-SFML.h>
#include <imgui.h>

auto main() -> int
{
    std::cout << "Hello, world!\n";

    sf::RenderWindow window{ sf::VideoMode{{ 800, 800 }}, "Grass Cutting Incremental" };
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);

    sf::Clock delta;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            ImGui::SFML::ProcessEvent(event);

            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        ImGui::SFML::Update(window, delta.restart());

        ImGui::ShowDemoWindow();

        window.clear(sf::Color::Black);
        ImGui::SFML::Render(window);
        window.display();
    }

    ImGui::SFML::Shutdown();
};