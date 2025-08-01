# 🚀 Interfaces and Factory Design Pattern in C++

This repository demonstrates how **interfaces** (via abstract classes) and the **Factory Design Pattern** are used in C++ through a real-world example — a notification system that can send messages via **Email**, **SMS**, or **Push Notification**.

---

## 📚 Concepts Covered

- 🧩 **Abstract Classes in C++**
- 🏭 **Factory Design Pattern**
- 📬 **Real-world Simulation: Notification Services**

---

## 🔧 Code Overview

The core idea is to use an abstract base class (`Notification`) to define a common interface for all notification types. The `NotificationFactory` creates the appropriate object based on user input.

### ✅ Interface: `Notification`

```cpp
class Notification {
public:
    virtual void send(string message) = 0; // Pure Virtual Function
};
```

All concrete classes (`Email`, `SMS`, `PushNotification`) implement this interface.

---

### 🏭 Factory: `NotificationFactory`

```cpp
Notification* createNotification() {
    if (type == "email") return new Email();
    else if (type == "sms") return new SMS();
    return new PushNotification();
}
```

You just pass a **string type** to the factory, and it returns the correct notification object.

---

### 💻 Main Driver Code

```cpp
NotificationFactory* notify_email = new NotificationFactory("email");
notify_email->createNotification()->send("Hello, World!");
```

Same pattern works for `"sms"` and `"push"`.

---

## 📦 Output

```bash
Sending Email: Hello, World!
Sending SMS: Hello, World!
Sending Push Notification: Hello, World!
```

---

## 🧠 Why This Pattern?

- ✅ **Clean separation of concerns**
- ✅ **Easily extendable** — add more notification types without changing client code
- ✅ **Great for plug-and-play design**

---

## 📁 File Structure

```
.
├── main.cpp       # Main code demonstrating factory and interfaces
├── README.md      # This file
```

---

## 🏗️ How to Run

1. Clone the repo:
   ```bash
   git clone https://github.com/sharmaketan14/interfaces_in_CPP.git
   cd interfaces_in_CPP
   ```

2. Compile and run:
   ```bash
   g++ notification_service.cpp -o notification_service
   ./notification_service
   ```

## ⭐ Star the Repo

If this helped you understand interfaces and factory pattern better, consider leaving a ⭐ to support the project!

<img width="2112" height="2264" alt="image" src="https://github.com/user-attachments/assets/f119d1d2-3b19-4c04-a436-2b26d118648e" />
