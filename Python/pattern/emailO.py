import smtplib
import ssl
  
# creates SMTP session
s = smtplib.SMTP('smtp.gmail.com', 587)
  
# start TLS for security
s.starttls()
  
# Authentication
s.login("info@itfyme.com", "Itfyme@com")
  
# message to be sent
message = "Message_you_need_to_send"
  
# sending the mail
s.sendmail("info@itfyme.com", "shreya29123@gmail.com", message)
  
# terminating the session
s.quit()