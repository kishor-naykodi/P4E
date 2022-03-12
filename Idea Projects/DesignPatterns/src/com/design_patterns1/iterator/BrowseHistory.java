package com.design_patterns1.iterator;

public class BrowseHistory {
    private String[] urls = new String[100];
    private int count;

    public void push(String url){
        urls[count++] = url;
    }

    public String pop(){
        return urls[--count];
    }

    public Iterator createIterator(){
        return new ArrayIterator(this);
    }

    public class ArrayIterator implements Iterator<String> {
        private BrowseHistory history;
        private int index;

        public ArrayIterator(BrowseHistory history) {
            this.history = history;
        }

        @Override
        public void next() {
            index++;
        }

        @Override
        public String current() {
            return history.urls[index];
        }

        @Override
        public boolean hasNext() {
            return index < history.count;
        }
    }
}
