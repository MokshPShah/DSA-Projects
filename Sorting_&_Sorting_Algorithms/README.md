# 🚀 Sorting & Searching Algorithms Playground

Welcome to the **Sorting & Searching Algorithms Playground**! 🎉

This interactive C++ console application lets you explore, learn, and experiment with classic sorting and searching algorithms. Whether you're a student, educator, or coding enthusiast, this project is designed to help you understand how these fundamental algorithms work in practice.

---

## ✨ Features at a Glance

- 🔀 **Merge Sort** – Fast, efficient, and stable sorting using divide-and-conquer.
- 🧮 **Selection Sort** – Simple, intuitive sorting for small datasets.
- 🔎 **Linear Search** – Find elements by scanning the array sequentially.
- 🕵️‍♂️ **Binary Search** – Quickly locate elements in a sorted array.
- 👀 **Display Array** – Instantly view the current state of your array.

---

## 📂 Project Structure

```
Sorting_&_Sorting_Algorithms/
├── 1.cpp         # Main source code: algorithms & menu
└── README.md     # Project documentation (this file)
```

---

## 🛠️ Getting Started

### 1. Prerequisites
- A C++ compiler (e.g., g++, clang++)

### 2. Compilation
Open your terminal and run:

```sh
g++ 1.cpp -o sorting_searching
```

### 3. Running the Program
After compiling, start the application with:

```sh
./sorting_searching
```

---

## 🕹️ How to Use

1. **Input Array**: Enter the size and elements of your array when prompted.
2. **Choose an Operation**: Select from the menu:
   - `1` – Perform Merge Sort
   - `2` – Perform Selection Sort
   - `3` – Search for an element (Linear Search)
   - `4` – Search for an element (Binary Search)
   - `5` – Display the current array
   - `0` – Exit the program

### 📝 Sample Menu
```
1. Merge Sort
2. Selection Sort
3. Linear Search
4. Binary Search
5. Display
0. Exit
Enter your choice:
```

---

## 💡 Example Session

```
Enter the size of the array: 5
Enter arr[0]: 10
Enter arr[1]: 3
Enter arr[2]: 7
Enter arr[3]: 1
Enter arr[4]: 9

1. Merge Sort
2. Selection Sort
3. Linear Search
4. Binary Search
5. Display
0. Exit
Enter your choice: 1
Merge Sort Done

Enter your choice: 5
Displaying the array:
1 3 7 9 10
```

---

## ⚠️ Notes & Tips

- Both Linear and Binary Search will sort the array before searching to ensure correctness.
- The code is intended for educational and demonstration purposes.
- You can extend or modify the code to add more algorithms or features!

---

## 🤝 Contributing

Contributions, suggestions, and improvements are welcome! Feel free to fork the repository and submit pull requests.

---

## 📚 License

This project is licensed under the MIT License - see the LICENSE file for details.

---

Happy Coding! 🚀
