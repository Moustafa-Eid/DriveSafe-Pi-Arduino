import requests
def sendSms(phone,message):
	resp = requests.post('https://textbelt.com/text', {
  	'phone': phone,
  	'message': message,
  	'key': 'Enter Code',
  	})

#print(resp.json())
