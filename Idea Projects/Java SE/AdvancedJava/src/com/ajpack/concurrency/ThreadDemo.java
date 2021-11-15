package com.ajpack.concurrency;

public class ThreadDemo {
  public static void show() {

    Thread thread  = new Thread(new DownloadFileTask());
    thread.start();
    System.out.println(Thread.currentThread().getName());
    try {
      Thread.sleep(500);
    } catch (InterruptedException e) {
      e.printStackTrace();
    }
    thread.interrupt();
  }
}
