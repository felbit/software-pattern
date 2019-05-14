/**
 * Singleton Pattern
 * The singleton pattern is used to ensure a class can only instanciated once.
 * 
 * 2019 by Martin Penckert
 */

#pragma once

class Singleton {

public:
    static Singleton *getInstance(void);

    // sample business logic
    void increment();
    int getCurrentCount() const;

private:
    Singleton();
    static Singleton *m_instance;
    
    // sample business logic
    int m_counter;

};

