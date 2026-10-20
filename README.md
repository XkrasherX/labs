# 🔢 Shell Sort with Windows Forms (C++/CLI)

<p align="center">
  <img src="https://img.shields.io/badge/C++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++"/>
  <img src="https://img.shields.io/badge/Windows%20Forms-0078D4?style=for-the-badge&logo=windows&logoColor=white" alt="Windows Forms"/>
  <img src="https://img.shields.io/badge/Visual%20Studio-5C2D91?style=for-the-badge&logo=visual-studio&logoColor=white" alt="Visual Studio"/>
  <img src="https://img.shields.io/badge/Algorithm-Shell%20Sort-orange?style=for-the-badge" alt="Shell Sort"/>
  <img src="https://img.shields.io/badge/STL--Vector-blue?style=for-the-badge" alt="STL Vector"/>
</p>

---

## 📖 Project Overview

This application demonstrates the **Shell Sort algorithm** in a graphical interface built with **C++/CLI and Windows Forms**. It generates an array of random integers, identifies its maximum element, and sorts the elements located **after the first maximum element** in descending order.

The interface displays the generated array, the sorting process for each gap value, the resulting array, and the elapsed sorting time.

---

## ✨ Features

- 🎲 Generate an array containing random integers from **0 to 100**.
- 🔎 Find the maximum element in the generated array.
- ✂️ Select the part of the array located after the maximum element.
- ↕️ Sort that part in **descending order** using Shell Sort.
- 🧩 Display intermediate sorting steps for each gap value.
- ⏱️ Measure and display the sorting time in milliseconds.
- 🖥️ Interact with the program through a Windows Forms GUI.

---

## 🕹️ Visual Guide & Usage

### 1️⃣ Step 1: Enter the Array Size

Enter a positive integer in the **Enter size of array** field. This value determines how many random numbers will be generated.

### 2️⃣ Step 2: Generate a Random Array

Click **Generate Random Array** to create and display the array. The program finds the maximum element and separates the elements that follow it for sorting.

### 3️⃣ Step 3: Sort the Selected Elements

Click **Sort** to run Shell Sort on the selected part of the array. The application displays the gap values used by the algorithm and the intermediate states of that part.

### 4️⃣ Step 4: Review the Result and Timing

After sorting, the application displays the resulting array and the measured execution time in milliseconds.

> **Note:** The program sorts only the elements *after the first maximum element*. The prefix ending at the maximum element remains in its original order.

---

## 🧠 How the Algorithm Works

Shell Sort improves on insertion sort by comparing elements separated by a decreasing gap. In this implementation, the initial gap is half the size of the selected part; after each pass, the gap is divided by two until it reaches zero.

For each gap, the algorithm moves smaller values to the right when necessary, producing a **descending** sequence in the selected part.

---

## 🛠️ Tech Stack

- **Language:** C++/CLI
- **GUI Framework:** Windows Forms
- **Standard Library:** `std::vector`, algorithm utilities
- **IDE:** Visual Studio
- **Algorithm:** Shell Sort

---

## 📂 Key Project Files

- `MyForm.h` — Windows Forms interface, random array generation, maximum-element search, Shell Sort implementation, and timing display.

---

## 🚀 How to Run

1. 
   ```bash
   git clone https://github.com/USERNAME/REPOSITORY.git
   ```

2. Open the solution (`.sln`) in **Visual Studio**.
3. Make sure the project is configured for **C++/CLI** and Windows Forms.
4. Build and run the project.
5. Enter an array size, generate the array, and click **Sort**.

---

## 👤 Author

**XkrasherX**

<p>
  <a href="https://github.com/XkrasherX">
    <img src="https://img.shields.io/badge/GitHub-gray?style=for-the-badge&logo=github" alt="GitHub"/>
  </a>
</p>

---

<p align="center">
  ✨ <i>If you found this project helpful for learning sorting algorithms and C++/CLI, feel free to give it a star!</i> ✨
</p>
