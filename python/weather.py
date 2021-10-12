import tkinter
import time
import requests


def getweather(canvas):
    city = textfield.get()
    api = "http://api.openweathermap.org/data/2.5/weather?q=" + city + "&appid=b3303b8cc0d72ac90f8258dace3c9d4e"
    json_data = requests.get(api).json()
    condition = json_data['weather'][0]['main']
    temp = int(json_data['main']['temp'] - 273.15)
    temp_min = int(json_data['main']['temp_min'] - 273.15)
    temp_max = int(json_data['main']['temp_max'] - 273.15)
    pressure = json_data['main']['pressure']
    humidity = json_data['main']['humidity']
    winds = json_data['wind']['speed']
    sunrise = time.strftime("%I: %M:%S", time.gmtime(json_data['sys']['sunrise'] - 21600))
    sunset = time.strftime("%I: %M:%S", time.gmtime(json_data['sys']['sunset'] - 21600))
    final_info = condition + '\n' + str(temp) + "c"
    final_data = "\n" + "Max temp:" + str(temp_max) + "\n" + "Min temp:" + str(temp_min) + "\n" + "pressure" + str(
        pressure) + '\n' + "humidity" + str(humidity) + "\n" + "windSpeed" + str(winds) + "\n" + "sunrise" + sunrise \
                 + "\n" + "Sunset" + sunset
    label1.config(text= final_info)
    label2.config(text = final_data)


canvas = tkinter.Tk()
canvas.geometry('500x600')
canvas.title('weather app')

textfield = tkinter.Entry(canvas,justify= 'center', font=('poppins', 35, 'bold'))
textfield.pack(pady=20)
textfield.focus()
textfield.bind('<Return>', getweather)

label1 = tkinter.Label(canvas, font=('poppins', 35, 'bold'))
label1.pack()
label2 = tkinter.Label(canvas, font=('poppins', 15, 'bold'))
label2.pack()

canvas.mainloop()
