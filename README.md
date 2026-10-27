# 💡 Arduino UNO LED Blinking

## 📌 About the Project

This is my first hands-on electronics project using the Arduino UNO board and Arduino IDE. The project demonstrates how to control an LED using basic C++ programming.

The built-in LED turns ON for one second and OFF for one second continuously. This project helped me understand the fundamentals of Arduino programming, digital output control, and time delays.

## 🎯 Objectives.

* Learn the basics of the Arduino UNO board.
* Understand digital output pins.
* Control an LED using Arduino programming.
* Learn basic C++ programming for embedded systems.
* Gain hands-on experience with microcontroller programming.

## 🛠️ Hardware Requirements

* Arduino UNO
* USB Cable
* Computer or Laptop

## 💻 Software Requirements

* Arduino IDE
* C++ Programming Language

## ⚙️ Working Principle

1. The Arduino UNO configures the built-in LED pin as an output.
2. The LED turns ON for one second.
3. The LED turns OFF for one second.
4. The process repeats continuously.

## 🧑‍💻 Source Code

The following Arduino code controls the built-in LED on the Arduino UNO.

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
6. Copy the code into the Arduino IDE editor.
7. Click **Verify** to compile the program.
8. Click **Upload** to upload the code to the Arduino UNO.
9. Observe the built-in LED blinking every second.

## 📸 Project Output

The image below shows the output of my Arduino UNO LED blinking project.

<p align="center">
  <img src="./LED%20BUILTIN.jpeg" alt="Arduino UNO LED Blinking Output" width="400">
</p>

## 📚 What I Learned

* Basics of the Arduino UNO microcontroller board.
* Writing and uploading code using Arduino IDE.
* Configuring output pins using `pinMode()`.
* Controlling LEDs using `digitalWrite()`.
* Using `delay()` to control timing.
* Fundamentals of embedded systems programming.

## 🔮 Future Improvements

* Connect an external LED using a breadboard.
* Experiment with different LED blinking speeds.
* Control an LED using a push button.
* Interface sensors with Arduino UNO.
* Develop more electronics and embedded systems projects.

## 🌱 My Learning Journey

This is my first step into electronics, embedded systems, and microcontroller programming. I look forward to building more projects and improving my technical skills.

**Small beginnings, exciting innovations! 🚀**

---

**Board:** Arduino UNO
**Software:** Arduino IDE
**Programming Language:** C++
**Project Type:** Beginner Electronics Project
