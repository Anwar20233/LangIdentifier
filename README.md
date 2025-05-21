# LangIdentifier


A simple C++ program that detects the language of input text using [Google's CLD2 (Compact Language Detector 2)](https://github.com/CLD2Owners/cld2).

![Language Detector](https://img.shields.io/badge/Language-C++-blue.svg)
![License](https://img.shields.io/badge/License-Apache%202.0-green.svg)

---

## 🧠 Features

- Detects the language of a given text input.
- Supports multiple languages (English, Arabic, French, Spanish, and more).
- Fast and lightweight using C++ and CLD2.

## 🛠️ Installation

### 1. Clone the repository

```bash
git clone https://github.com/YOUR_USERNAME/cld2-language-detector.git
cd cld2-language-detector
```

### 2. Build CLD2 Library

```bash
git clone https://github.com/CLD2Owners/cld2.git
cd cld2/internal
make
cd ../../
```

### 3. Compile the program

```bash
g++ -std=c++11 -Icld2/internal -Icld2/public main.cpp cld2/internal/libcld2_full.a -o langdetect
```

## 🚀 Usage

Run the program:

```bash
./langdetect
```

Enter some text, and the program will print the detected language.

## 🧪 Example

```text
Enter text: Bonjour, comment ça va ?
Detected Language: FRENCH
```

## 📂 Project Structure

```
.
├── main.cpp
├── cld2/             # CLD2 library folder (from Google)
└── README.md
```

## 📄 License

This project uses the [Apache License 2.0](https://www.apache.org/licenses/LICENSE-2.0) from the original CLD2 project.
