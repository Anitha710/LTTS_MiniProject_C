# Requirements
## Hardware Requirements :-
* Ram 512MB or higher.
* Minimum 10MB hard disk space.
* Intel/Pentium powered system.
* Processor speed 1.7 GHZ.

## Software Requirements :-
* Windows 8 or higher versions.
* Visual Studio/Code::Blocks software/Dev-C++.



## Functional Requirements :-
   In this project I used the concept of file handling, data structures, pointer and functions.
   The basic user-defined functions used in this project are listed below:
   * int password() – contains/manages/handles password protection
   * void addrecord() – to add new diary record
   * void viewrecord() – to view added record in list
   * void editrecord() – to modify and update an added record
   * void editpassword() – to modify/change a password
   * void deleterecord() – to delete or remove a record permanently from system file

## Introduction
Digital Memo is a console application, where the user can add, view, edit and delete records.The user can add their details safely and it is not time consuming. This system makes easy to store daily records. The wholr project is designed in 'C' language. Records can be added with many information such as duration of task, name, address, time and date.User can keep records of the important things they do in their daily life, like meetings, activities, etc. By storing these kind of data, user can 
refer to information whenever necessary. File handling has been effectively used to store the records.

## Research
During the past decade, increasing attention has been focus on the Technology of Computer software. As manual computing system becomes more numerous, complex the need for the systematic approaches development becomes increasingly apparent. 
The objective of project work-Digital Memo is designing a convenient frame work including Adding records, edit, view and delete. A primary goal of this project is to develop good software to overcome the existing problem caused by manual systems. 
This application is developed for the users who want to store reminders and dead line notes through single application. The users who have computer knowledge will get more advantage from this application. 
Although every care has been taken to check mistakes through verifications and validations, yet it is difficult to claim absolute perfection.

## Benefits

Esaily unseratndable and used by novice users also. The user can access the information stored whenever needed and helps to reduce manual strength of carrying a dairy.


## Cost and Features
Almost each person have their known’s who are living apart from him having some contacts details. It is a very complex task to store contact details manually at diaries and searching them page by page. A user also want to do some specific tasks in the future for that he always makes diaries or separate applications with limited memory size to store reminder data and large number of reminders. Side by side a user also has to complete any work at some specific dates. A person having large number of task to be done at different dead line dates also have to make manual entries in the separate applications or in the manual diaries and he have to check those notes daily to know about which project’s deadline date is reached. All these tasks are very time consuming and very complex. 

## Drawbacks:
As seen clearly a lot of time is spent and much effort is made for managing contact details of the known future activities times and submission dates of the projects. In today’s world which is growing, these all tasks should take minimum effort and less time. But the present system does not support this. In the present system user install and operate on three different applications to complete about written task which is very difficult and complex.


## Defining Our System
I have developed Digital Memo application to makes ease the work of users by this computerised software. By this application a user can store contact details, retrieve contact details, set reminder for important meetings of works and make dead line notes on single platform. Thus the user can manage his contacts and daily working schedules through this application. This application avoids user to make manual contact diaries to store the contact address. A user who is working on system can set reminder for the important work while doing some another work. Reminder will remind him about that work. He can also set reminder message which will tell him what to do at which time by stealing his attention. 
So, this application is convenient platform for a user to manage, contacts, daily work schedules and to enhance the punctuality of the user.
## SWOT ANALYSIS
![image](https://user-images.githubusercontent.com/64318581/114844640-9c05ad00-9df8-11eb-9566-28e36aacf198.png)


# 4W&#39;s and 1&#39;H

## Who:
Only Admin who has an authorized acces through the password would be able to log in and perform storage, retrieval, deletion and manipulation of informative data of his choice.


## What:

The proposed system allows the Admin to can add, view, edit and delete records. Records can be added with many information such as duration of task, name, address, time and date. 

## When:
The Admin can access the proposed system whenever he/she is wishing to. The proposed system makes Admin feel comforatble and easy to store impoetant data, as the proposed systeem provides safety, by requesting a password before the acceptance of any actions to be performed by the Admin.

## Where:

The information provided by the Admin/User is safely handled through file handling system. All the data provided by the Admin will be stored in a file and it would be updated for each and every action performed by the Admin.

## How:

The entire project is developed in 'C' language, which makes the user feel simple and the it can be used by each and everyone, since the output screen displayed to User is eaily understandable and can provide the input of information like about the meetings, activities, etc. for his ease of access in future.

# Detail requirements
## High Level Requirements:
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new record | Techincal | IMPLEMENTED | 
| HR02 | User shall be able to view record by providing authorized password | Techincal |  IMPLEMENTED  |
| HR03 | User shall be able to edit record | Techincal |  IMPLEMENTED  |
| HR04 | User shall be able to delete record | Techincal |  IMPLEMENTED  |
| HR05 | User shall be able to edit password | Techincal |  IMPLEMENTED  |
| HR06 | User shall be able to read data from a file | Techincal |  IMPLEMENTED  |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |



##  Low level Requirements:
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | (1). New record shall be added by providing all the asked information                                                                                                    (2). Password should be authorized from persistant file or else the user would be able to add the memo deatils on to file. | HR01 |  IMPLEMENTED  |
| LR02 | viewing data should be possible in 2 ways (1) User can view the whole records stored on that particular day (2). User can view the data of fixed time mentioned during adding that particular record | HR02 |  IMPLEMENTED |
| LR03 | While viewing all the records, only 3 attempts for entering right password will be provided for the user. only on authorized password he can view records by entering the date of recored he wanted to view.| HR02 | IMPLEMENTED |
| LR04 | If user enters wrong password "Access Denied" message would be displayed | HR02 |  IMPLEMENTED  |
| LR05 | User can also edit the record by entering the date and time of the record he would like to edit | HR03 |  IMPLEMENTED  |
| LR06 | User can delete a particular record or the entire records of one particular day by entering specific details | HR04 |  IMPLEMENTED  |
| LR05 | User can edit password by entering his old password and confirming the new passowrd. Hence, next time he can login with the new password created | HR05 |  IMPLEMENTED |
