#include "anchor.h"

Anchor::Anchor()
{
    m_iValue = 0;
}

int Anchor::value()
{
    return m_iValue;
}

void Anchor::setValue(int i)
{
    m_iValue = i;
    emit valueChanged(m_iValue);
}

void Anchor::reset()
{
    m_iValue = 0;
    emit valueChanged(m_iValue);
}

void Anchor::incValue() {
    m_iValue++;
}
