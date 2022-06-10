# Logging Into The Exam

Step 1 - Login in with username ```exam``` and the password is also ```exam``` at the Login Screen. </br>
Step 2 - Open the iTerm and type ```examshell```. </br>
Step 3 - Then type in your Intra username and password.  </br>
Step 4 - Type in ```yes``` for fingerprint ID and type in ```y``` to start the exam. </br>
Step 5 - You should now get your first .c exam question (only_z for example). </br>
Step 6 - Now you need to find two things before starting the .c exam question (rendu directory and subject.txt) </br>
Step 7 - To find rendu and subject.txt, type in the following in another iTerm ```cd```, NOT in your examshell, and that would put you in your users folder. </br>
Step 8 - There you would find both the rendu and subjects folder. </br>
Step 8 Bonus - Another alternative is to click finder located at your taskbar and then right-click on the applications folder located at the top of the finder application. 

# During The Exam

1 - Don't forget to clean up, comment, remove your testing code execs, and libraries prior to submission. </br>
2 - Don't forget to push your code regularly in the rendu/ directory to vogsphere before typing grademe and y in the examshell terminal. </br>
3 - Read through all of the subjects and examples again before final submission.

Also in the iTerm Examshell, you will see the following 3 options:

1. ```grademe``` - Used for the system to grade your C Project in /rendu. </br>
2. ```status``` - Shows how much time you have left in the exam and if you have failed a question, how long you have to wait to use ```grademe``` again. </br>
3. ```finish``` - This is used to end your exam session. 

Make sure that in your /rendu folder, you have this structure:

Below is an example only  </br>

only_z (Folder) in /rendu  </br>

To make a directory type ```mkdir <folder name>``` </br>

Inside that only_z folder, you should have a .c file - only_z.c  </br>

To create a .c file inside a folder, type ```vim <file name> .c```  </br>

# To Compile your C Project 

This is how you compile your .c file in both your projects and the exam. You can do this both ways and I suggest that you do. 

```gcc <file name>.c```

```gcc -Wall -Wextra -Werror <filename.c>```

To view your output, type the following:

```./a.out```

You can also gcc your file and ./a.out at the same time by writing the following:

```gcc <file name.c> && ./a.out```

Once you have compiled your .c file and it returns the excepted output, you are ready for the next part: 

- Head to Git Push Exam Project Section Below ⬇️

# Git Push Exam Project

How to push your C project to be graded, cause the way you push your project for the 42 Intra is different to the way you push your project for the Exam.

Step 1 - In your iterm shell, ```cd``` into the folder - rendu. </br>
Step 2 - Now that your in rendu, you should see your C folder in there. </br>
Step 3 - In your iterm shell, type in ```git add <C folder>```. </br>
Step 4 - Then type in ```git status``` to check if your .c file has been added to the git. </br> 
Step 5 - Then type in ```git commit -m``` "with your message". </br>
Step 6 - Then type in ```git status``` again to check if your .c file has been commited to the git. </br> 
Step 7 - Then type in shell ```git push``` to push your .c project, ready for grading. </br> 
Step 8 - Then click on the examshell and type in ```grademe``` to be graded. </br>

If you passed, congrats! </br> 
If not, then head back to your .c file and fix what's gone wrong and repeat from Step 1.

# Best Desktop Setup
Recommend best setup you should have on your desktop when your on 42 Campus for the Exam:

- 1st iTerm Examshell Window
- 2nd iTerm Window (For Exam C Question)
- 3rd iTerm Window (For Compiling the C Project)
- Rendu Folder
- Subject.txt (The subject text file of the exam C question)

Recommend best setup you should have on your desktop when your doing the Exam remotely:

- Coming Soon 🖥️
