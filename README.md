# Hospital Management System
![img6](https://user-images.githubusercontent.com/43706342/115986726-42a73600-a5cf-11eb-9c31-6d0002e272ef.png)
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

## Project Members/ Contributors:

* [Alekh Gupta](https://github.com/alekhgupta1441) - 185002 
* [Neerav Ganate](https://github.com/neerav1515)   - 185008
* [Abhishek Chauhan](https://github.com/sa7890722) - 185017
* [Anish Aggarwal](https://github.com/anishagg17)  - 185039

## Tasks Completed:

### Phase 1:
 * Learnt required Tech Stack.
 * Prepared [UML diagrams](https://github.com/alekhgupta1441/Hospital_Management_System/tree/main/UML%20Diagrams), [SRS](https://github.com/alekhgupta1441/Hospital_Management_System/blob/main/Hospital%20Management%20System%20SRS.pdf) and [DFD](https://github.com/alekhgupta1441/Hospital_Management_System/blob/main/Hospital%20Management%20System%20DFD.pdf) documentation for the Hospital Management System.
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

 * Backend: Django (Python)
 * Frontend: HTML/CSS, JavaScript
 * Database: MySQL or SQLite3


						      UML Class Diagram
<p align="center">							
<img src="https://user-images.githubusercontent.com/43706342/115990340-4a230b00-a5e0-11eb-9e87-338d4c58b695.png" width="350" height="650">
</p>

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

### Functions:

#### Admin:
- Signup their account. Then Login (No approval Required).
- Can register/view/approve/reject/delete doctor (approve those doctor who applied for job in their hospital).
- Can admit/view/approve/reject/discharge patient (discharge patient when treatment is done).
- Can Generate/Download Invoice pdf (Generate Invoice according to medicine cost, room charge, doctor charge and other charge).
- Can view/book/approve Appointment (approve those appointments which is requested by patient).

#### Doctor:
- Apply for job in hospital. Then Login (Approval required by hospital admin, Then only doctor can login).
- Can only view their patient details (symptoms, name, mobile ) assigned to that doctor by admin.
- Can view their discharged(by admin) patient list.
- Can view their Appointments, booked by admin.
- Can delete their Appointment, when doctor attended their appointment.

#### Patient:
- Create account for admit in hospital. Then Login (Approval required by hospital admin, Then only patient can login).
- Can view assigned doctor's details like ( specialization, mobile, address).
- Can view their booked appointment status (pending/confirmed by admin).
- Can book appointments.(approval required by admin)
- Can view/download Invoice pdf (Only when that patient is discharged by admin).

---
					       

## How to run the Web App:
- Go to the deployed website - <b>https://hospitalmanagement1712.herokuapp.com/</b>

                        OR

- Install Python (Dont Forget to Tick Add to Path while installing Python)
- Open Terminal and Execute Following Commands :
```
	sudo apt-get install libpq-dev python-dev
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
	pip3 install -r requirements.txt
	python manage.py makemigrations
	python manage.py migrate
	python manage.py runserver
```
- Now enter following URL in Your Browser Installed On Your PC:
```
	http://127.0.0.1:8000/
```

						      Admin Portal View
![img2](https://user-images.githubusercontent.com/43706342/115983865-7ed39a00-a5c1-11eb-92ed-b8dd060bd8ed.png)

						  Appointement Requests View
![img5](https://user-images.githubusercontent.com/43706342/115984661-eb509800-a5c5-11eb-88b5-5dc0174196d0.png)

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
![img3](https://user-images.githubusercontent.com/43706342/115984442-b132c680-a5c4-11eb-860d-4afd16ec2fa8.png)

![img4](https://user-images.githubusercontent.com/43706342/115984443-b3952080-a5c4-11eb-829f-22c9b76fc6e1.png)
