from datetime import datetime

time = input()
print(datetime.strptime(time, '%I:%M:%S%p').strftime('%H:%M:%S'))
   