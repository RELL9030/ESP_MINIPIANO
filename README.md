# ESP32_MINIPIANO 🎹
<a href="https://wokwi.com/projects/367655907065697281" target="_blank" onclick="window.open('https://wokwi.com/projects/367655907065697281','name','width=600,height=400')">MINI-PIANO ESP32</a>

### Componentes
| Item             | Quantity | Notes                         |
| ---------------- | -------- | ----------------------------- |
| ESP-32 DEVkit    | 1        |  30PIN                             |
| LCD 16x2         | 1        | i2C                           |
| 5mm LED          | 14       | Red                           |
| 5mm Push button  | 17       | (14)Green, (2)Black, (1)Blue  |
| Resistor         | 31       | (14)220Ω, (3)1KΩ, (14)10K     |
| Buzzer           | 1        |                               |


### Diagramas
<p align="center">
<img src="DIAGRAMAS/Portapapeles01.jpg" width="480" height="480" alt="Diagrama 01">
<img src="DIAGRAMAS/Portapapeles02.jpg" width="480" height="480" alt="Diagrama 02">
<img src="DIAGRAMAS/Portapapeles03.jpg" width="480" height="480" alt="Diagrama 03">
<img src="DIAGRAMAS/Portapapeles04.jpg" width="480" height="480" alt="Diagrama 04">
</p>

### Pin Connections
#### LCD
| ESP-Pin     | Device        |Notes 
| ----------- | ------------- |------------- |
| D21         | LCD i2c       | SDA          |
| D22         | LCD i2c       | SCL          |



#### PINS PARA TECLADO 	  
| PIN         | ESPAÑOL | INGLES | 
| ----------- | ------- |------- |
| 13          | DO      | C      | 
| 34          | DO#     | C#     | 
| 12          | RE      | D      | 
| 35          | RE#     | D#     | 
| 14          | MI      | E      | 
| 27          | FA      | F      | 
| 15          | FA#     | F#     | 
| 26          | SOL     | G      | 
| 2           | SOL#    | G#     | 
| 25          | LA      | A      | 
| 19          | LA#     | A#     | 
| 33          | SI      | B      | 
| 32          | DÖ      | C2     | 
| 18          | DÖ#     | C2#    | 

