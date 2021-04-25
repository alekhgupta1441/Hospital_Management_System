# Hospital Management System

## Overview

Hospital Management System (HMS) is powerful, flexible, and easy to use system, which is very
helpful in a hospital environment, in order to maintain a hospital efficiently. Hospital Management
System designed for multi-specialty hospitals, to cover a wide range of hospital administration and
management processes. It is an integrated end-to-end Hospital Management System (HMS) that
provides relevant information across the hospital to support effective decision making for patient care,
hospital administration and critical financial accounting, in a seamless flow.
In a HMS need to have entry of all the data related to patients, doctors, staffs, and administrator(s).
Each patients admitted in the hospital needs to enter their personal information, which are accessible by
authorized doctors and staffs. On the other hand, a patient should have access permission to download
any medical report associated with him/her. Billing process should be included in the system, such that
it can easily be update after each payment.

## Tasks Completed:

### Phase 1:
 * Learnt required Tech Stack.
 * Prepared [UML diagrams](https://github.com/alekhgupta1441/Hospital_Management_System/tree/main/UML%20Diagrams) for the Hospital Management System.
 * Built a simple C Prototype, namely, [HMS.c](https://github.com/alekhgupta1441/Hospital_Management_System/blob/main/Prototype/HMS.c).

### Phase 2:
 * Implemented *patient, doctor and admin login & registration*.
 * Ensured unique user-id for each user login into the system.
 * Implemented Database storage for user records.

### Phase 3:
 * Implemented *doctor portal* to allow doctor to see *patient list*.
 * Implemented *appointement booking* and *cancelling* functionality for patients.
 * Ensured database security among users.

### Phase 4:
 * Implemented *UI template* for [Web App](https://github.com/alekhgupta1441/Hospital_Management_System/tree/main/Web-App) integrated with models.
 * Implemented medical report and bill generation functionality.
 * Added required UI template pages for better experience.

### Phase 5 (Final):
 * Tested the functional and non-functional requirements of project.
 * [Deployed the Web App](https://hospitalmanagement1712.herokuapp.com/) for proper testing.
 * Ensured proper code as well as installation documentation for Application.

## Techology Stack:

 * Backend: Django
 * Frontend: HTML/CSS, JavaScript
 * Database: MySQL or SQLite3

## Project Requirements:

### Inputs:
 * Hospital information (name, address, branch, department, facilities)
 * Employee information (name, employee id, address, contact details)
 * Doctor information (name, employee id, address, contact details, specialization, degrees)
 * Patient information (name, id, address, age, payment, others)

### Output:
 * Patient details
 * Patients list
 * Receipt generation
 * Report generation

### Constraints:
 * All the users must register into the system though the web interface.
 * All the users must login into the web interface through userid (must be unique) and password
 * Patients should allow to get login him/her-self in order to collecting own information
 * On login into the system, a doctor must be able to see the patients list under his/her observation
 * One patient must not access the information of some other patients
 * All the patients must be able to download all the medical report and bill as per his requirement by login into the system.

Note: Add, delete, and update must be reflect immediately in the system.

## How to run the Web App:
- Go to the deployed website - <b>https://hospitalmanagement1712.herokuapp.com/</b>

                        OR

- Install Python (Dont Forget to Tick Add to Path while installing Python)
- Open Terminal and Execute Following Commands :
```
	pip install django
	pip install django-widget-tweaks
	pip install xhtml2pdf
```
- Download This Project Zip Folder and Extract it.
	
	    OR
	
- Clone the project using this command:
```
	git clone https://github.com/alekhgupta1441/Hospital_Management_System.git
```
- Move to project folder `Web-App` in Terminal using command:
```
	cd Web-App
```
- Then run following Commands :
```
	python manage.py makemigrations
	python manage.py migrate
	python manage.py runserver
```
- Now enter following URL in Your Browser Installed On Your PC:
```
	http://127.0.0.1:8000/
```

## How to run the Desktop App:

- Install [Java Development Toolkit (JDK)](https://www3.ntu.edu.sg/home/ehchua/programming/howto/JDK_HowTo.html).
- Install [Netbeans IDE](https://www3.ntu.edu.sg/home/ehchua/programming/howto/netbeans_howto.html) on your operating system for running th project.
- Download This Project Zip Folder and Extract it.
	
	    OR
	
- Clone the project using this command:
```
	git clone https://github.com/alekhgupta1441/Hospital_Management_System.git
```
- Move to project folder `Desktop-App` in Terminal using command:
```
	cd Desktop-App
```
- To run the project from the command line, go to the dist folder and type the following:
```
	java -jar "HMS.jar"
```
