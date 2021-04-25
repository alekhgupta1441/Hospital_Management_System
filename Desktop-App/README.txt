Note: Run program by running page12.java
---- ---- ------- -- ------ -------------

This java project implements a hospital management system. The use case selected
is: Sending appointment request to doctor and accepting request as per availability of slots.
    ------- ----------- ------- -- ------ --- --------- ------- -- --- ------------ -- -----
Other use cases implemented are...
*View patient list 
*Discharge patient
*Add doctor
*Generate patient report.
First you must register yourself with system.
Note:-You can register as patient only if you select doctor.
ie First create all doctors,then create patients while giving input.
If you login as patient, you can request for appointment by selecting slot
as day of week and timing.
You can also check status of appointment request in check status.
If you have been discharged before and now want to go to new doctor,select Add Doctor
If you login as doctor, you can approve/reject slot requests from your patients.
You can view patient list and generate reports for patients which are formed as text files.These text files can be opened by patient.
You can view patient list and discharge patients from your responsibility.


Assuming a number of patients and doctors have been registered successfully as follows
Data                               Inputs                                        Expected Output    Actual Output


Doctors present: DC1,DC2,DC3        Log in as PA2,request appointment             Successful          Your request has been placed
Patients of DC0: PA0,PA1            Thursday 7:30-8:00PM                                              successfully!Kindly wait for doctor's
Patients of DC1: PA2,PA3                                                                              approval
Patients of DC2: PA4,PA5            Log in as DC1,appointment requests            Request from PA2    PA0 present
                                    Press continue                                Slot free           Availability of slot: Yes
                                    Confirm                                            -              Sent info to PA2
                                    Log in as PA2,check status                    Accepted            Appointment grantedThursday 7:30PM-8:00PM
                                    Log in as DC2,write report                    Patient list        Select patient                                    
                                    Select patient 5,write report                 Report made         Report generated, PA5report.txt file formed
                                    Log in as DC0,discharge patient PA1           Done                Operation done
                                    Log in as PA1,select add doctor
                                    Add doctor DC2                                Done                Doctor added

Notes:- Add doctor button won't lead you anywhere if you already have assigned doctor
        If slot is not free for doctor,pressing confirm or reject both will do same thing,...reject the request.
        If doctor has no patients and still tries to discharge someone, nothing will happen.
        

