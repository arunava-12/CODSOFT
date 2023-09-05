#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task 
{
    string description;
    bool completed;
};

class Todolist 
{
private:
    vector<Task> tasks;
    int indexCounter;  

public:
    Todolist() : indexCounter(1) {}  

    void add(const string& description) 
    {
        Task newtask = {description, false};
        tasks.push_back(newtask);
        cout << description << " is added as Task of index number : " << indexCounter << endl;
        indexCounter++;  
    }

    void view() 
    {
        if (tasks.empty()) 
        {
            cout << "No tasks in the list." << endl;
        } 
        else 
        {
            cout << "Tasks in the list:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << "[" << (i + 1) << "] ";
                cout << (tasks[i].completed ? "[Done] " : "[Pending] ");
                cout << tasks[i].description << endl;
            }
        }
    }

    void completed(size_t index) 
    {
        if (index >= 1 && index <= tasks.size()) 
        {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed: " << tasks[index - 1].description << endl;
        } 
        else 
        {
            cout << "Invalid task index." << endl;
        }
    }

    void remove(size_t index) 
    {
        if (index >= 1 && index <= tasks.size()) 
        {
            cout << "Task removed: " << tasks[index - 1].description << endl;
            tasks.erase(tasks.begin() + index - 1);
        } 
        else 
        {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() 
{
    Todolist todolist;
    char choice;

    while (true) 
    {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";

        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice) 
        {
            case '1': 
            {
                string description;
                cin.ignore();
                cout << "Enter task description: ";
                getline(cin, description);
                todolist.add(description);
                break;
            }
            case '2':
                todolist.view();
                break;
            case '3': 
            {
                size_t index;
                cout << "Enter the task index to mark as completed: ";
                cin >> index;
                todolist.completed(index);
                break;
            }
            case '4': 
            {
                size_t index;
                cout << "Enter the task index to remove: ";
                cin >> index;
                todolist.remove(index);
                break;
            }
            case '5':
                cout << "Thank You." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
