# Contributing

Thank you for your interest in contributing to this repository!

This repository contains academic learning exercises from my BS-CS journey. While it is primarily a personal portfolio project, contributions, suggestions, and feedback are welcome.

## How to Contribute

1. **Fork** the repository.
2. **Clone** your fork locally.
3. Create a new **feature branch** (`git checkout -b feature/your-feature`).
4. Make your changes.
5. **Test** your changes by compiling the relevant C++ files:
   ```bash
   g++ -std=c++11 -o output_file source_file.cpp
   ./output_file
   ```
6. **Commit** your changes with a clear message.
7. **Push** to your fork.
8. Open a **Pull Request** describing your changes.

## Guidelines

- Keep code style consistent with existing files.
- Do not introduce breaking changes to existing programs.
- If adding a new task, follow the naming convention `TaskXX_DescriptiveName.cpp`.
- Ensure all programs compile with `g++ -std=c++11`.
- Update the README task table if adding new files.
- Update CHANGELOG.md with your changes.

## Code Style

- Use `iostream` for input/output.
- Follow consistent indentation (spaces or tabs as present in the file).
- Keep programs self-contained and single-purpose.

## Reporting Issues

If you find a bug or have a suggestion, please open an issue describing the problem or idea in detail.

---

Happy coding!
