#include <iostream>

class Log {
 public:
    const int LoglevelError =0;
    const int LoglevelWarning =1;
    const int LoglevelInfo =2;
 private:
   int m_LogLevel = LoglevelInfo;
 public:
    void SetLevel(int level) {
        m_LogLevel = level;
    }

    [[maybe_unused]] void Error(const char* message) const {
        if (m_LogLevel >= LoglevelError)
        std::cout << "[ERROR]:"<<message << std::endl;
    }

    void Warn(const char* message) const {
        if (m_LogLevel >= LoglevelWarning)
      std::cout << "[WARNING]:"<<message << std::endl;
    }

    [[maybe_unused]] void Info(const char* message) const {
        if (m_LogLevel >= LoglevelInfo)
        std::cout << "[INFO]:"<<message << std::endl;
    }
 };
int main() {
    Log log;
    log.SetLevel(log.LoglevelWarning);
    log.Warn("Hello!");
    std::cin.get();
 }