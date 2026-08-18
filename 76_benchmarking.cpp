#include <iostream>
#include <memory>
#include<array>
#include<chrono>

class Timer {
public:
    Timer() {
        m_StartTimepoint = std::chrono::high_resolution_clock::now();
    }

    ~Timer() {
        Stop();
    }

    void Stop() {
        auto endTimepoint = std::chrono::high_resolution_clock::now();
        auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().
                count();

        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().
                count();

        auto duration = end - start;
        double ms = duration * 0.001;
    }

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimepoint;
};

int main() {
    struct Vector2 {
        float x, y;
    };

    std::cout << "Make Shared\n";
    {
        Timer timer;
        for (int i = 0; i < 1000000; i++)
            std::shared_ptr<Vector2> sharedPtr = std::make_shared<Vector2>();
    }

    std::cout << "New Shared\n";
    {
        Timer timer;
        for (int i = 0; i < 1000000; i++)
            std::shared_ptr<Vector2> sharedPtr(new Vector2());
    }

    std::cout << "Make Unique\n";
    {
        Timer timer;
        for (int i = 0; i < 1000000; i++)
            std::unique_ptr<Vector2> sharedPtr = std::make_unique<Vector2>();
    }
};
