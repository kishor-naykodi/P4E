package com.ds_algo2;

public class PriorityQueueWithHeap {
  private Heap heap = new Heap();

  // O(log n)
  public void enqueue(int item) {
    heap.insert(item);
  }

  // O(log n)
  public int dequeue() {
    return heap.remove();
  }

  public boolean isEmpty() {
    return heap.isEmpty();
  }
}
