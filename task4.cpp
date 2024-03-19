#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Task {
    string descrip;
    bool comple;

    Task(const string& desc) : descrip(desc), comple(false) {}
};

class TodoList {
private:
    vector<Task> tasks;
public:
    void addTask(const string& descrip) {
        tasks.push_back(Task(descrip));
    }
    void viewTasks() {
        if (tasks.empty()) {
            cout << "tasks do not found" << endl;
        } else {
            cout << "Tasks" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". ";
                if (tasks[i].comple)
                    cout << "[Completed] ";
                cout << tasks[i].descrip << endl;
            }
        }
    }
    void removeTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task removed" << endl;
        } else {
            cout << "there is not there that index" << endl;
        }
    }
};
int main() {
    TodoList todoList;
    char choice;
     while (choice <='4') {
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Remove Task\n";
        cout << "select and enter choice ";
        cin >> choice;
        switch (choice) {
            case '1': {
                string taskDescription;
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, taskDescription);
                todoList.addTask(taskDescription);
                break;
            }
            case '2':
                todoList.viewTasks();
                break;
            case '3': {
                size_t index;
                cout << "Enter the index of the task to remove: ";
                cin >> index;
                todoList.removeTask(index);
                break;
            }
            default:
                cout << "there is no choice" << endl;
        }
    };
    return 0;
}
