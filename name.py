import pyttsx3

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def main():
    name = input("what is your name?")
    message = "Hello " + name
    print(message)

    speak(message)

if __name__ == "__main__":
    main()