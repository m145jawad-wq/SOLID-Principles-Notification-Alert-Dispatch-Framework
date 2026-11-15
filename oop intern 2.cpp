
#include <iostream>
#include <string>
using namespace std;


class INotificationChannel {
public:

    
    virtual void send(string message) = 0;

    
    virtual ~INotificationChannel() {}
};


int main() {

    cout << "NOTIFICATION DISPATCH FRAMEWORK" << endl;
    cout << "Abstract Notification Interface Created!" << endl;

    return 0;
}

