#pragma once 
#ifndef _SOURCE_HPP_
#define _SOURCE_HPP_


class MyClass {
public:
    MyClass(int val_);
    ~MyClass() = default;

    int GetRandVal() const;
    void SetNewValue(int i);
    private:
    int val;
};

#endif // _SOURCE_HPP_


// Comment added on 2023-03-21 12:16:38
