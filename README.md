(versão em português abaixo)
---

# LCD-ClimateSensor

## Description
This project is a simple Arduino setup that monitors temperature and humidity using a DHT22 sensor and displays the readings on a 16x2 LCD with I2C interface. The project is intended for beginners to learn the basics of using sensors and LCD displays with Arduino. It can also serve as a reference for personal or academic projects.

## Required Items
- Arduino Uno
- DHT22 temperature and humidity sensor
- 16x2 LCD display with I2C interface
- 1kΩ Resistor
- Jumper wires
- Breadboard

## Connections
- DHT22 sensor:
  - VCC to breadboard positive rail (connected to Arduino 5V)
  - GND to breadboard ground rail (connected to Arduino GND)
  - Data pin to Arduino digital pin 7 via 1kΩ resistor

- 16x2 LCD display with I2C interface:
  - SDA to Arduino A4
  - SCL to Arduino A5
  - VCC to breadboard positive rail (connected to Arduino 5V)
  - GND to breadboard ground rail (connected to Arduino GND)

- Breadboard power connections:
  - Breadboard positive rail to Arduino 5V
  - Breadboard ground rail to Arduino GND

## Dependencies
To run this project, you need to install the following libraries:
- `LiquidCrystal_I2C` (for controlling the LCD with I2C)
- `DHT` (for reading from the DHT22 sensor)

---

### versão em português
---
# LCD-ClimateSensor

## Descrição
Este projeto é uma configuração simples de Arduino que monitora a temperatura e umidade usando um sensor DHT22 e exibe as leituras em um display LCD 16x2 com interface I2C. O projeto é destinado a iniciantes que desejam aprender o básico sobre o uso de sensores e displays LCD com o Arduino. Também pode servir como referência para projetos pessoais ou acadêmicos.

## Itens Necessários
- Arduino Uno
- Sensor de temperatura e umidade DHT22
- Display LCD 16x2 com interface I2C
- Resistor de 1kΩ
- Cabos jumpers
- Protoboard

## Conexões
- Sensor DHT22:
  - VCC no trilho positivo da protoboard (conectado ao 5V do Arduino)
  - GND no trilho negativo da protoboard (conectado ao GND do Arduino)
  - Pino de dados no pino digital 7 do Arduino, passando por um resistor de 1kΩ

- Display LCD 16x2 com interface I2C:
  - SDA no A4 do Arduino
  - SCL no A5 do Arduino
  - VCC no trilho positivo da protoboard (conectado ao 5V do Arduino)
  - GND no trilho negativo da protoboard (conectado ao GND do Arduino)

- Conexões de alimentação da protoboard:
  - Trilho positivo da protoboard conectado ao 5V do Arduino
  - Trilho negativo da protoboard conectado ao GND do Arduino

## Dependências
Para executar este projeto, você precisará instalar as seguintes bibliotecas:
- `LiquidCrystal_I2C` (para controlar o LCD com I2C)
- `DHT` (para leitura do sensor DHT22)

---

README.md v0.0