

## Weight Management System

This project is a **Weight Management System** written in C++. It allows users to input and track students' weight over a 30-day period, compare weight changes, and identify significant differences. The program includes validation to ensure that only valid weights are recorded.

### Features

- **Input Student Data**: Allows users to input names and weights of students.
- **Weight Validation**: Ensures that weights entered are positive values.
- **Track Weight After 30 Days**: Accepts updated weights for the same students after 30 days and validates the data.
- **Compare and Display Results**: Compares initial weights to weights after 30 days and categorizes changes as a significant rise, significant fall, or no significant change based on a threshold.

### How It Works

1. **Input Initial Data**: Users enter the number of students and provide each student's name and weight (with units).
2. **Input Data After 30 Days**: After 30 days, users re-enter the students’ weights.
3. **Compare Weights**: The program compares the weights from Day 1 and Day 30.
4. **Display Results**:
   - Shows the weight change for each student.
   - Indicates if there was a significant rise or fall (greater than 2.5 kg) or if the weight change was negligible.

### Code Structure

- **`Inputdata()`**: Collects initial data (name and weight) for each student, ensuring weights are positive.
- **`Outputdata()`**: Displays the initial list of students with their weights.
- **`Inputdata30days()`**: Collects weights after 30 days, validates input, and checks if names match the initial list.
- **`CompareWeightChanges()`**: Compares the initial weights with the weights after 30 days, identifying significant weight changes.

### Compilation and Execution

1. **Compile the Program**:
   ```bash
   g++ -o weight_management_system main.cpp
   ```

2. **Run the Program**:
   ```bash
   ./weight_management_system
   ```

### Example Usage

```plaintext
***Welcome to the Weight Checking System***

Enter the number of students: 3

Enter the name of student: John
Enter the weight of student: 70 kg

Enter the name of student: Jane
Enter the weight of student: 65 kg

Enter the name of student: Alex
Enter the weight of student: 68 kg

***Names and Weights of Pupils:***
Name: John, Weight: 70 kg
Name: Jane, Weight: 65 kg
Name: Alex, Weight: 68 kg

***Enter the data after 30 days***

Enter the name of student: John
Enter the weight of student in kg: 73 kg

Enter the name of student: Jane
Enter the weight of student in kg: 67 kg

Enter the name of student: Alex
Enter the weight of student in kg: 64 kg

***Weight Changes After 30 Days:***

Name: John, Initial Weight: 70 kg, Weight after 30 Days: 73 kg, Rise: 3 kg
Name: Jane, Initial Weight: 65 kg, Weight after 30 Days: 67 kg, No Significant Change
Name: Alex, Initial Weight: 68 kg, Weight after 30 Days: 64 kg, Fall: 4 kg
```

### Requirements

- C++ compiler (like GCC)

### Contributing

If you’d like to contribute, feel free to fork the repository and submit a pull request.

### License

This project is open-source and available under the MIT License.

