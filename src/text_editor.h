#pragma once

#include "commands.h"

#include <memory>
#include <string>

// A simple text editor like ed or edlin. Provides undo/redo support
// and a command buffer.
class TextEditor {
public:
    // Returns the current state of the editor
    const std::string& getText();
    // Stores a command for later execution. Does not modify the text.
    void prepare(const std::shared_ptr<Command>& command);
    // Applies any prepared commands to the text.
    void commit();
    // Undoes the last command. Throws an exception if there is nothing
    // to undo.
    void undo();
    // Undoes the undo. Throws an exception if there is nothing to redo.
    // Note: Committing new commands clears the redo state.
    void redo();
};
