#include "singleton.h"

Singleton* Singleton::m_instance = nullptr;

Singleton *Singleton::getInstance(void)
{
    if (m_instance == nullptr)
        m_instance = new Singleton();
    return m_instance;
}

/**
 * sample business logic below
 * this does nothing meaningful but is used to show the singleton in action
 */

Singleton::Singleton() : m_counter(0) {}
void Singleton::increment() { m_counter++; }
int Singleton::getCurrentCount() const { return m_counter; }
