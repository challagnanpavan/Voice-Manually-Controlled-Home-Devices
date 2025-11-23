# 🔊 Voice-Controlled Home Automation System

### *ESP32 • Sinric Pro • IoT • Smart Home*

## 📌 Overview

This project is a **voice-controlled home automation system** built using the **ESP32**, **2-channel relay**, and the **Sinric Pro cloud platform**.
It enables users to control household appliances like a **bulb** and **fan** using **voice commands** via **Alexa** or **Google Assistant**.

The project focuses on creating a **simple, low-cost, scalable** IoT solution suitable for both beginners and smart home enthusiasts.

---

## ✨ Features

* 🎤 Voice control using Alexa / Google Assistant
* 🌐 Cloud connectivity via Sinric Pro
* ⚡ Instant ON/OFF switching
* 🔌 Control of AC appliances via relay
* 📶 ESP32 Wi-Fi communication
* 📱 Can be controlled from mobile app
* 🧩 Scalable for more appliances

---

## 🧰 Components Used

* **ESP32 Development Board**
* **2-Channel Relay Module**
* **Bulb** (AC Load)
* **Fan** (AC Load)
* **Sinric Pro Platform**
* **Arduino IDE**

---

## 🛠 Working Principle

1. ESP32 connects to Wi-Fi and Sinric Pro cloud server.
2. Bulb and fan are connected to relay channels.
3. User gives a voice command like:

   * “Alexa, turn ON the light”
   * “Alexa, turn OFF the fan”
4. Command → Voice Assistant → Sinric Pro → ESP32 → Relay
5. The relay switches the appliances ON/OFF.

---

## ⚙️ System Architecture

```
Voice Command 
      ↓
Alexa / Google Assistant
      ↓
Sinric Pro Cloud
      ↓
ESP32 (Wi-Fi)
      ↓
Relay Module
      ↓
Bulb / Fan
```

---

## 🔌 Circuit Description

* ESP32 GPIO pins → Relay input pins (IN1 & IN2).
* Relay **NO (Normally Open)** terminals → Bulb & Fan AC lines.
* ESP32 powered via USB / 5V supply.
* AC mains power supplies the appliances.

*(You can add a circuit diagram image here.)*

---

## 📸 Applications

* Smart Home Automation
* Energy-saving systems
* Remote appliance control
* Elderly & disabled assistance
* IoT project development

---

## 📍 Results

* Appliances respond instantly to voice commands
* Stable Wi-Fi + cloud communication
* Works seamlessly with Alexa / Google Assistant
* Reliable control via Sinric Pro app

---

## 🧠 Skills Learned

* ESP32 & Embedded Systems
* IoT Cloud Integration
* Relay-based AC switching
* Voice Assistant Integration
* API communication with Sinric Pro

---

## 📂 Suggested Folder Structure

```
├── code
│   └── esp32_sinricpro_code.ino
├── images
│   ├── circuit_diagram.png
│   └── system_architecture.png
├── README.md
```

---

## 🚀 Future Improvements

* Add more devices using 4/8 channel relays
* Include sensors (temperature, motion, LDR)
* Add custom automation scenes
* Add a mobile dashboard interface

---

## 📝 Conclusion

This project successfully demonstrates how traditional household appliances can be upgraded into **smart, voice-controlled devices** using ESP32 and Sinric Pro.
It is a cost-effective and scalable IoT solution suitable for smart home development and embedded systems learning.


