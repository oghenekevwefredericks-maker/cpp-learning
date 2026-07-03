#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>

using namespace std;

void logMessage(string message = "System started", string severity = "INFO")
    {
        auto now = time(nullptr);
        auto localTime = *localtime(&now);

        ostringstream oss;
        oss << put_time(&localTime, "%H:%M:%S");

        string timeStamp = oss.str();

        cout<<"["<<timeStamp<<"]"<<" ["<<severity<<"] "<<"["<<message<<"]"<<endl;

    }
int main()
{
    logMessage();
    logMessage("Connection lost", "ERROR");
    return 0;
}
