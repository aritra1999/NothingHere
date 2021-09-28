from selenium import webdriver
from selenium.webdriver.support.ui import WebDriverWait 
from selenium.webdriver.chrome.options import Options 
from selenium.webdriver.common.keys import Keys

option = webdriver.ChromeOptions()
option.add_argument('headless')
driver = webdriver.Chrome('./chromedriver',options=option)



# url = input("Enter URL: ")

driver.get("https://codeforces.com/problemset/problem/948/A")

content = []
content = driver.find_element_by_class_name("input")

print(content)

driver.close()

