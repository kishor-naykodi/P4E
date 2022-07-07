package com.codeninja;

public class Movie {
    public String getTitle() {
        return title;
    }

    private String title;
    private int likes;
    private Genre genre;

    public Movie(String title, int likes, Genre genre) {
        this.title = title;
        this.likes = likes;
        this.genre = genre;
    }

    public int getLikes() {
        return likes;
    }

    @Override
    public String toString() {
        return "Movie{" +
                "title='" + title + '\'' +
                ", likes=" + likes +
                '}';
    }

    public Genre getGenre() {
        return genre;
    }
}
