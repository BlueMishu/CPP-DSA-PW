#include<iostream>
#include <string>
using namespace std;
struct Task {
    string description;
    bool completed;
};

void printTodolist(){
	
}
int main() {
    vector<Task> todoList;

while(true){
	cout<<"Enter the task or q to quit"<<endl;
	if(in == 'q'){
		exit();
	}
	
}

    // Add tasks to the todo list
    todoList.push_back({"Finish report", false});
    todoList.push_back({"Grocery shopping", false});
    todoList.push_back({"Clean the house", false});

    // Mark a task as complete
    todoList[1].completed = true;

    // Print the todo list
    cout << "Todo List:" << endl;
    for (const auto& task : todoList) {
        cout << (task.completed ? "[X] " : "[ ] ") << task.description << endl;
    }

    // Remove a task from the todo list
    todoList.erase(todoList.begin() + 2);

    cout << "\nUpdated Todo List:" << endl;
    for (const auto& task : todoList) {
        cout << (task.completed ? "[X] " : "[ ] ") << task.description << endl;
    }

    return 0;
}