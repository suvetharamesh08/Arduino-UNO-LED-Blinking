# 💡 LED Blinking Using Arduino UNO

## 📌 About the Project

This is my first hands-on electronics project using the Arduino UNO board and Arduino IDE. The project demonstrates how to control an LED using basic C++ programming.

The LED turns ON for one second and OFF for one second continuously. This project helped me understand the basics of Arduino programming, digital output control, and time delays.

## 🎯 Objectives

* Learn the basics of the Arduino UNO microcontroller board.
* Understand digital output pins.
* Control an LED using Arduino programming.
* Learn basic C++ programming for embedded systems.
* Gain hands-on experience with microcontroller programming.

## 🛠️ Hardware Requirements

* Arduino UNO
* USB Cable
* Computer or Laptop
* Built-in LED on the Arduino UNO board

## 💻 Software Requirements

* Arduino IDE
* C++ Programming Language

## ⚙️ Working Principle

1. The Arduino UNO initializes the built-in LED pin as an output.
2. The LED turns ON for one second.
3. The LED turns OFF for one second.
4. The process repeats continuously.

## 🧑‍💻 Arduino Code

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
```


## 🚀 How to Run the Project

1. Install Arduino IDE on your computer.
2. Connect the Arduino UNO to your computer using a USB cable.
3. Open Arduino IDE.
4. Select **Tools → Board → Arduino AVR Boards → Arduino UNO**.
5. Select the correct port under **Tools → Port**.
6. Copy and paste the code into the editor.
7. Click **Verify** to compile the program.
8. Click **Upload** to upload the code to the board.
9. Observe the built-in LED blinking every second.

## 📚 What I Learned

* Arduino UNO basics.
* Writing and uploading code using Arduino IDE.
* Digital output control using `digitalWrite()`.
* Configuring pins using `pinMode()`.
* Controlling time delays using `delay()`.
* Fundamentals of embedded systems programming.

## 🔮 Future Improvements

* Connect an external LED using a breadboard.
* Change the LED blinking speed.
* Control the LED using a push button.
* Connect sensors to the Arduino UNO.
* Build more electronics and embedded systems projects.

## 🌱 My Learning Journey

This is my first step into the world of electronics, embedded systems, and microcontroller programming. I look forward to developing more projects and improving my technical skills.

**Small beginnings, exciting innovations! 🚀**

---

**Board:** Arduino UNO
**Software:** Arduino IDE
**Programming Language:** C++
**Project Type:** Beginner Electronics Project
