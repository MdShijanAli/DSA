# DSA - Data Structures and Algorithms

A collection of sorting algorithm implementations in C.

## 📂 Repository Structure

```
DSA/
├── Bubble Sort/
│   └── bubble-sort.c          # Bubble sort implementation (ascending & descending)
├── Selection Sort/
│   └── slection-sort.c        # Selection sort implementation
├── insertion-sort/
│   └── insertion-sort.c       # Insertion sort implementation (descending)
└── index.c                    # Combined sorting algorithms demo
```

## 📋 Implementations

### 1. Bubble Sort (`Bubble Sort/bubble-sort.c`)
- **Algorithm**: Bubble Sort
- **Features**:
  - Ascending order sorting
  - Descending order sorting
- **Input**: Hardcoded array `{64, 34, 25, 12, 22, 11, 90}`
- **Time Complexity**: O(n²)

### 2. Selection Sort (`Selection Sort/slection-sort.c`)
- **Algorithm**: Selection Sort
- **Features**:
  - Interactive user input for array size and elements
  - Ascending order sorting
- **Time Complexity**: O(n²)

### 3. Insertion Sort (`insertion-sort/insertion-sort.c`)
- **Algorithm**: Insertion Sort
- **Features**:
  - Descending order sorting
- **Input**: Hardcoded array `{12, 11, 13, 5, 6}`
- **Time Complexity**: O(n²)

### 4. Combined Demo (`index.c`)
- **Algorithms**: Selection Sort, Insertion Sort (Descending), Bubble Sort (Descending)
- **Input**: Array `{5, 2, 4, 1, 3}`
- **Description**: Demonstrates multiple sorting algorithms sequentially

## 🚀 How to Run

### Prerequisites
- GCC compiler (MinGW/MSYS2 on Windows)
- VS Code with C/C++ extension (optional)

### Compilation & Execution

```bash
# Navigate to the specific folder
cd "Bubble Sort"

# Compile
gcc bubble-sort.c -o bubble-sort.exe

# Run
./bubble-sort.exe
```

Or use VS Code's built-in build and debug features (F5).

## 📝 Notes

- All implementations include a `printArray()` helper function for displaying arrays
- Each sorting algorithm is implemented in separate folders for better organization
- The `index.c` file serves as a demonstration of multiple sorting techniques

## 👨‍💻 Author

**MdShijanAli**  
**Student ID**: 2024000010129  
**University**: Southeast University  
**Department**: BSc in CSE  
**Course Code**: CSE242.14  
**Course Name**: Data Structures Lab
