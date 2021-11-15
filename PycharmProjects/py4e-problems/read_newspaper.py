import requests
import json

def speak(str):
    from win32com.client import Dispatch
    speak = Dispatch("SAPI.SpVoice")
    speak.Speak(str)

if __name__ == '__main__':
    speak("News for today.. Lets begin")
    url = "https://newsapi.org/v2/everything?q=apple&from=2021-06-18&to=2021-06-18&sortBy=popularity&apiKey=f73c180037964878b4288b0847a22139"
    news = requests.get(url).text
    news_dict = json.loads(news)
    arts = news_dict['articles']
    for article in arts:
        speak("Here is title")
        speak(article['title'])
        print(article['title'])

        speak("And the description of news is ")
        speak(article['description'])
        print(article['description'])
        
        speak("Moving on to the next news..Listen Carefully")

    speak("Thanks for listening...")


