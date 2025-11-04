#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;
};

vector<Task> tasks;

void addTask() {
    string desc;
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, desc);
    tasks.push_back({desc, false});
    cout << "Task added!" << endl;
}

void viewTasks() {
    if(tasks.empty()) {
        cout << "No tasks available." << endl;
        return;
    }
    for(int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].description 
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]" << endl;
    }
}

void markCompleted() {
    viewTasks();
    if(tasks.empty()) return;
    
    int index;
    cout << "Enter task number to mark as completed: ";
    cin >> index;
    
    if(index > 0 && index <= tasks.size()) {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

void removeTask() {
    viewTasks();
    if(tasks.empty()) return;
    
    int index;
    cout << "Enter task number to remove: ";
    cin >> index;
    
    if(index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

int main() {
    int choice;
    
    while(true) {
        cout << "\n--- TO-DO LIST ---" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose option: ";
        cin >> choice;
        
        switch(choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: markCompleted(); break;
            case 4: removeTask(); break;
            case 5: return 0;
            default: cout << "Invalid option!" << endl;
        }
    }
}