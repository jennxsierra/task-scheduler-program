// Task Header File

// The Task Class represents a Task object in the task scheduler application. Each task has an ID, priority, name,
// status, description, and various timestamps (created, modified, completed). The class provides methods to access
// and modify these attributes, as well as operator overloads for priority comparison.

// The Default Constructor initializes a task with default values for all attributes.

// The Parameterized Constructor initializes a task with the given ID, priority, name, description, and deadline.
// It also sets the created time to the current time and initializes the modified time to a minimum value.

// getID: returns the task's ID.                             |
// getPriority: returns the task's priority.                 |
// getName: returns the task's name.                         |  setName: sets the task's name.
// getStatus: returns the task's status.                     |  setStatus: sets the task's status.
// getDescription: returns the task's description.           |  setDescription: sets the task's description.
// getDeadline returns the task's deadline.                  |  setPriority: sets the task's priority (1-5).
// getTimeLeft: returns the time left until task's deadline. |  setDeadline: sets the task's deadline.
// getCreatedTime: returns the task's creation time.         |
// getModifiedTime: returns the task's last modified time.   |  setModifiedTime: sets the task's last modified time.
// getCompletedTime: returns the task's completion time.     |  setCompletedTime: sets the task's completion time.

// The operator> and operator< overloads compare tasks based on their priority and deadline.

#ifndef CMPS2131_TASK_H
#define CMPS2131_TASK_H

#include <iostream>
#include <string>
#include <utility>
#include <chrono>

class Task {
private:
    int id;
    int priority;
    std::string name;
    std::string status;
    std::string description;
    std::chrono::system_clock::time_point deadline;
    std::chrono::system_clock::time_point createdTime;
    std::chrono::system_clock::time_point modifiedTime;
    std::chrono::system_clock::time_point completedTime;


public:
    // Default constructor
    Task() : id(0), priority(0), name(" "), status("Ongoing"), description(" "),
             deadline(std::chrono::system_clock::time_point::min()),
             createdTime(std::chrono::system_clock::now()),
             modifiedTime(std::chrono::system_clock::time_point::min()),
             completedTime(std::chrono::system_clock::time_point::min()) {}

    // Parameterized constructor
    Task(int taskID, int taskPrio, std::string  taskName, std::string  tDesc,
         const std::chrono::system_clock::time_point& taskDLine);

    // Getters
    [[nodiscard]] int getID() const;
    [[nodiscard]] int getPriority() const;
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] std::string getStatus() const;
    [[nodiscard]] std::string getDescription() const;
    [[nodiscard]] std::chrono::system_clock::time_point getDeadline() const;
    [[nodiscard]] std::chrono::duration<double> getTimeLeft() const;
    [[nodiscard]] std::chrono::system_clock::time_point getCreatedTime() const;
    [[nodiscard]] std::chrono::system_clock::time_point getModifiedTime() const;
    [[nodiscard]] std::chrono::system_clock::time_point getCompletedTime() const;

    // Setters
    void setName(const std::string& name);
    void setStatus(const std::string& status);
    void setDescription(const std::string& description);
    void setPriority(int priority);
    void setDeadline(const std::chrono::system_clock::time_point& deadline);
    void setModifiedTime(const std::chrono::system_clock::time_point& time);
    void setCompletedTime(const std::chrono::system_clock::time_point& time);

    // Operator overloads for priority comparison
    bool operator>(const Task& other) const;
    bool operator<(const Task& other) const;
};


#endif //CMPS2131_TASK_H