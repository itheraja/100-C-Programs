#include <iostream>
#include <string>
using namespace std;

class Logger {
public:
    void log(string level, string msg) {
        cout << "[" << level << "] " << msg << endl;
    }

    void info(string msg) {
        log("INFO", msg);
    }

    void warn(string msg) {
        log("WARN", msg);
    }

    void error(string msg) {
        log("ERROR", msg);
    }
};

int main() {
    Logger logger;
    logger.info("System started");
    logger.warn("Low disk space");
    logger.error("System crash");

    return 0;
}
