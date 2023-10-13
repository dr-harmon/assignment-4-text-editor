#pragma once

#include <string>

// A text editor command, such as inserting or deleting text.
class Command {
public:
    // Applies the command to the given text.
    virtual void perform(std::string& str) = 0;
    // Applies the opposite of the command to the given text.
    virtual void undo(std::string& str) = 0;
    virtual ~Command() = default;
};
