#include <iostream>
using namespace std;

class Notification {
    public:
        virtual void send(string message) = 0; // Pure Virtual Function
};

class Email : public Notification { // Implements Notification
    public:
        void send(string message) {
            cout << "Sending Email: " << message << endl;
        }
};

class SMS : public Notification { // Implements Notification
    public:
        void send(string message) {
            cout << "Sending SMS: " << message << endl;
        }
};

class PushNotification : public Notification { // Implements Notification
    public:
        void send(string message) {
            cout << "Sending Push Notification: " << message << endl;
        }
};

class NotificationFactory {
    private:
        string type;
    public:
        NotificationFactory(string type) {
            this -> type = type;
        }

        Notification * createNotification(void) {
            if (this -> type == "email") {
                return new Email();
            } else if (this -> type == "sms") {
                return new SMS();
            } 
            return new PushNotification();
        }
};

int main() {
    NotificationFactory *notify_email = new NotificationFactory("email");
    NotificationFactory *notify_sms = new NotificationFactory("sms");
    NotificationFactory *notify_push = new NotificationFactory("push");

    notify_email -> createNotification() -> send("Hello, World!");
    notify_sms -> createNotification() -> send("Hello, World!");
    notify_push -> createNotification() -> send("Hello, World!");

    return 0;
}