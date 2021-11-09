# Simulation of Studies 👨‍🏫
The program written in C++ which simulates the studies, specifically "the users" of studies.
We distinguish many types of users, the basic one is Human (basic class). He can only apply for studies - either as a Student or as a Teacher. 
Additionally, he has basic identification data in the form of parameters: name, surname, PESEL number, e-mail address and telephone number.
We also have two categories of users in college - Student and Employee, that you can become by being Human.
  👩‍🎓 The student has a date of enrollment and an average grade (simply one, unweighted) and can quit studies (and simply become Human again).
  👷 The employee may quit his job and become a Human again :).
The Employee is categorized into two types of end-users: Teacher and Dean.
  👩‍🏫 The Teacher can change the grade of a specific Student from the list.
  👨‍💼 The Dean can dismiss any Employee (except himself) or Student and accept an applicant base user (Human type) to the position for which he is applying.


The basic settings in the program are: 3 users (3 objects) of the Human type, 2 of the Student type, 2 of the Teacher type and 1 of the Dean type.
After starting the program, you can select one of the users, and then perform one "action", eg. "apply for studies".
Then the program makes changes related to the action and returns to the start menu. 
From the start menu you can also pick an option to "add a new Human". In this case, you need to provide the basic human identification data which will be validated 
(name and surname must start with a capital letter, PESEL number consits of 11 digits, email contains @ and a period between the strings, telephone number ia a 9-digit number)
A new person will be added only if all these data are correct.
 


