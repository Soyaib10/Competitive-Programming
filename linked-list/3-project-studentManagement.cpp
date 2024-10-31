class Student {
public:
	string name;
	int id;
	char grade;

	// কন্সট্রাক্টর
	Student(string name, int id, char grade) {
		this->name = name;
		this->id = id;
		this->grade = grade;
	}
};

class Node {
public:
	Student* student;
	Node* next;

	Node(Student* student) {
		this->student = student;
		next = NULL;
	}
};

class StudentList {
public:
	Node *head;
	studentList() {
		head = NULL;
	}

	void insertAtBeginning(string name, int id, char grade) {
		Student* newStudent = new Student(name, id, grade);
		Node* newNode = new Node(newStudent);
		newNode->next = head;
		head = newNode;
	}

	void display() {
		Node* temp = head;
		while (temp != NULL) {
			cout << "Name: " << temp->student->name << ", ID: " << temp->student->id
			     << ", Grade: " << temp->student->grade << endl;
			temp = temp->next;
		}
	}


	void freeMemory() {
		Node* temp;
		while (head != NULL) {
			temp = head;
			head = head->next;
			delete temp->student;
			delete temp;
		}
	}
};

int int main(int argc, char const *argv[])
{
	StudentList studentList;
	studentList.insertAtBeginning("me", 32, "A");
	studentList.display();
	return 0;
}