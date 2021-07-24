import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.base import MIMEBase
from email.mime.text import MIMEText
from email import encoders

def _init_(self):
    self.host = "smtp.office365.com"
    self.from_email = "tech@sustainablecontext.com"
    self.password = "P@ssw0rd"
    self.port = 587

def send_html_email(self, email_subject, email_body, email_recipients):
    smtp = smtplib.SMTP(host=self.host, port=self.port)
    smtp.starttls()
    smtp.login(self.from_email, self.password)

    msg = MIMEMultipart()

    msg['From'] = self.from_email
    msg['To'] = email_recipients
    msg['Subject'] = email_subject

    msg.attach(MIMEText(email_body, 'html'))

    smtp.send_message(msg)