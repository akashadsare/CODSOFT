# To-Do List Application

## Description
A console-based task management application that allows users to add, view, mark as completed, and remove tasks.

## How it Works
- Uses a vector of Task structures to store tasks
- Each task has a description and completion status
- Menu-driven interface for user interaction
- Tasks are numbered for easy reference

## Features
- Add new tasks
- View all tasks with status
- Mark tasks as completed
- Remove tasks from the list
- Persistent session (tasks remain until program exits)

## Compilation
```bash
g++ todolist.cpp -o todolist
```

## Example Output
```
--- TO-DO LIST ---
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Choose option: 1
Enter task: Buy groceries
Task added!

--- TO-DO LIST ---
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Choose option: 2
1. Buy groceries [Pending]

--- TO-DO LIST ---
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Choose option: 3
1. Buy groceries [Pending]
Enter task number to mark as completed: 1
Task marked as completed!
```