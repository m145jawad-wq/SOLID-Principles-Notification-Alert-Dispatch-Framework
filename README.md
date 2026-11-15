# SOLID Principles: Notification & Alert Dispatch Framework

## 📌 About the Project

The **Notification & Alert Dispatch Framework** is a C++ project designed to demonstrate the five SOLID principles of Object-Oriented Programming (OOP).

This project provides an extensible notification system that supports multiple communication channels, including Email, SMS, Slack, and WhatsApp.

The main goal is to build a flexible, maintainable, and loosely coupled notification system using abstraction, inheritance, polymorphism, and dependency injection.

## 🎯 Project Objectives

- Understand and implement all five SOLID principles.
- Develop an extensible notification dispatch system.
- Apply abstraction and polymorphism in C++.
- Implement dependency injection.
- Create reusable and maintainable classes.
- Add new notification channels without modifying existing core sender code.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Programming Concepts:** Object-Oriented Programming
- **Core Principles:** SOLID
- **IDE:** Code::Blocks / Visual Studio
- **Compiler:** GCC / MinGW

## 📚 SOLID Principles Implemented

### 1. Single Responsibility Principle (SRP)
Every class should have one specific responsibility.

### 2. Open/Closed Principle (OCP)
Software components should be open for extension but closed for modification.

### 3. Liskov Substitution Principle (LSP)
Derived classes should be usable wherever their base class is expected.

### 4. Interface Segregation Principle (ISP)
Classes should not be forced to implement methods they do not need.

### 5. Dependency Inversion Principle (DIP)
High-level modules should depend on abstractions rather than concrete implementations.

## 🚀 Main Features

- Email notifications.
- SMS notifications.
- Slack notifications.
- WhatsApp notifications.
- Abstract notification interface.
- Polymorphic message dispatching.
- Dependency injection.
- Extensible notification architecture.
- Loosely coupled components.

## 🏗️ Project Architecture

```text
NotificationDispatchFramework/
│
├── main.cpp
├── README.md
└── .gitignore
```

The project can later be organized into separate header and implementation files.

## 📂 Notification Channels

| Channel | Description |
|---|---|
| Email | Email notification implementation |
| SMS | SMS notification implementation |
| Slack | Slack notification implementation |
| WhatsApp | WhatsApp notification implementation |

## ▶️ How to Run

### Step 1: Clone the Repository

```bash
git clone https://github.com/your-username/SOLID-Notification-Dispatch-Framework.git
```

### Step 2: Open the Project

Open the project folder in Visual Studio Code, Code::Blocks, or another C++ IDE.

### Step 3: Compile the Program

```bash
g++ main.cpp -o notification
```

### Step 4: Run the Program

```bash
./notification
```

On Windows:

```bash
notification.exe
```

## 📖 Learning Outcomes

Through this project, I aim to improve my understanding of:

- Advanced C++ programming.
- SOLID design principles.
- Abstract classes and interfaces.
- Inheritance and polymorphism.
- Dependency injection.
- Software architecture and design.
- Clean and maintainable code.

## 🔮 Future Improvements

- Real email service integration.
- SMS gateway integration.
- Slack API integration.
- WhatsApp Business API integration.
- Notification logging and reporting.
- Error handling and retry mechanisms.
- Configuration-based notification channels.

## 👨‍💻 Author

**M Jawad Mazhar**

BS Computer Science Student

The University of Lahore

## 📜 License

This project is developed for educational and learning purposes.
