package com.design_patterns1.iterator;

public interface Iterator<T> {
     void next();
     T current();
     boolean hasNext();
}
