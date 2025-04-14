# 📚 Simple Grade Calculator 📊

A collection of C++ programs that calculate student grades based on numeric scores.

## 📋 Project Description

This project provides three different implementations of a grade calculator, each with increasing functionality. The calculator converts numeric scores into letter grades (A, B, C, D, E, F) and provides appropriate feedback.

## 🧩 Features

The project includes three versions:

### 1️⃣ Basic Grade Calculator (1.cpp)
- Simple input validation (checks if score ≥ 0)
- Converts numeric scores to letter grades
- Uses conditional (ternary) operators

### 2️⃣ Enhanced Grade Calculator (2.cpp)
- Converts numeric scores to letter grades
- Provides personalized messages for each grade level
- Uses a combination of conditional operators and switch statements

### 3️⃣ Complete Grade Calculator (3.cpp)
- Full-featured grade calculator
- Personalized messages for each grade level
- Eligibility information for the next level
- Handles invalid inputs with error messages

## ��� Grade Calculation Logic

The scoring system used across all versions is:
- **A**: 81-100 points ⭐
- **B**: 71-80 points 🌟
- **C**: 61-70 points ✨
- **D**: 51-60 points 👍
- **E**: 41-50 points 📝
- **F**: 0-40 points 📌

## 🚀 How to Use

1. Compile any of the C++ files with your preferred compiler:
   ```
   g++ -o Simple_Grade_Calculator 1.cpp
   ```
   
2. Run the executable:
   ```
   ./Simple_Grade_Calculator
   ```
   
3. Enter your score when prompted
   
4. View your grade and any additional feedback

## 🛠️ Requirements

- C++ compiler
- Standard C++ libraries

## 🔍 Example

```
Enter your score: 85
Your grade is A. Excellent Work!
You're eligible for the next level!
```

## 📈 Development Progression

This project demonstrates incremental development:
1. Start with core functionality
2. Add user feedback
3. Enhance with additional features and validation

## 🧪 Future Improvements

Potential enhancements could include:
- GUI interface
- Multiple student grading
- Grade statistics
- Save/load functionality