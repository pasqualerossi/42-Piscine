# 42-Adelaide
I was part of the 1st ever piscine at 42 Adelaide between June - July of 2021 📆 </br>

What the piscine teaches you is the following:

- Vim or Visual Studio Code (depending on which one you use)
- iTerm
- C Language Programming 
- Shell Commands
- Git
- GitHub
- Use an iMac well =)
- Discord
- Nuclino
- Stack Overflow

and much more...

# Feeling Stuck?

**Feel stuck on a question?** </br>
Do either or all of the following:

- Ask anyone and everyone and show them what's happening.
- Check the Discord by either typing your problem in the right channel or searching the whole server in the top right corner of the Discord application. 
- Google Search the specific problem.
- Check out specific sites like GitHub and Stack Overflow. 

# Evaluations

**Evaluations** </br>
Recommend you open eval slots as much as you can, that way you get a couple of things out of it.

- You meet them 1 on 1 and get to know them more and their skillset.
- You get 1 eval point for every eval done.
- They explain their code to you, which helps you further understand the project. 
- You have a copy of their repo, which could you figure out their logic.

**How To Open Evaluation Slots**

Step 1 - Head to the 42Intra page - intra.42.fr </br>
Step 2 - On the 42Intra page, click on Managed Slots in the Evaluations section. </br>
Step 3 - Click and drag open the evaluation slots you are free to evaluation other people's .c projects. </br>
Step 4 - You would know when you are book for an evaluation as it popus up on the 42Intra Dashboard states the following: </br>

You are evaluating someone on C00 (for example) in 30 mins (for example) and when it is less than 15 mins, it will show who exactly you are evaluating. 

**Can't Find The Person?**

This is for when you are evaluating someone else's C Project or they are evaluating you on your C Project and you can't seem to find them?

- Click on their 42 Intra Username to see where they are located on 42 Campus - Available FN2065 (for example). 
- Find their Discord username and message them. 
- Check their 42Intra for their phone number to contact them.
- If none of those work, then talk to 42 Bocal (Staff).

# Shell Commands
These are the most common Shell commands in iTerm that you would be using for your C Projects.

- ```cd``` - heads back to your user folder
- ```cd ...``` - goes back one folder
- ```ls``` - lists the folders and files your in
- ```ls -l``` - shows the list of the folder and files your in
- ```ls -la``` - shows the list of the folder and files your in, including your hidden files
- ```pwd``` - prints the current path to the folder your in
- ```cat``` - displays what is in a file to the iTerm
- ```mkdir``` - makes a folder
- ```rmdir``` - removes a folder
- ```touch``` - creates a file
- ```rm``` - removes a file
- ```rm -f``` - force removes a file, in-case ```rm``` isn't working
- ```mv``` - it moves a file to another folder and also you can rename a file as well
- ```man``` - shows the manual
- ```man man``` - shows the overview of the entire manual
- ```vi``` - opens up a vim text editor program
- ```vim``` - also opens up a vim text editor program
- ```gcc``` <.c file> - to compile your .c project
- ```./a.out``` - to view the output of your .c project

To see what you have previously typed in the iTerm, click on the up key 🔼 on your keyboard ⌨️ or </br>
you can also type in Shell ```history```.

# First Week of the Piscine

Shell00, Shell01, C00. </br>

- Learn the shell projects on Monday and Tuesday. On Wednesday, start on the C projects (C00) as the exam itself is on the C Language.</br>
- Suggest you work on the 1st Rush (Rush00) to get an idea of what a group coding project is like. 

# Week 2 of the Piscine

C00, C01 and C02. </br>

- Contine with Projects C00 and C01 this week. </br>
- Focus on the C Projects this weekend rather then the Rush project, if you missed the first Rush (Rush00), then maybe take part in this Rush project (Rush01). </br> 
- For those that ain't doing the Rush, prepare for exam on weekends and know your mistakes that you made on the previous exams and continue with your C Projects. 

# Week 3 of the Piscine

C02, C03 and C04. </br>

- If you missed the first and second Rush projects (Rush00 & Rush01), then don't really worry about this Rush project (Rush02). </br>
- This week continue with your C Projects and prepare for the Exam Preparation. Improving your C concepts & coding skills, along with your algorithms.

# Last Week of the Piscine

C04, C05 and C06 (with possibly C07 if you want to) </br>

- This week continue with your C Projects and suggest that from Wednesday onwards to prepare for your final exam.
- Continue and push your C Projects on the final weekend of the piscine as Sunday at 5pm, the 42 Intra closes and piscine is over.  
</br>
NOTE: Don't stress with the exams, I failed the first 3 exams (Exam 00, Exam 01 and Exam 02) and only passed the last exam (Exam 03). 

# C Projects Checklist
A checklist you can use before you submit your C Projects. 

- Make sure all of the right files are there and are named correctly, check the c.pdf if needed.
- Run Norminette in the folder of your C Projects in iTerm.
- Make sure all .c projects have headers in them, to place a header type in vim - :Stdheader
- gcc to compile your .c project
- Make sure only the .c files are in there and not any a.out or other files are there. 
- Git clone your repo before clicking on 'set project as finished' to check that everything is there. 

# Submit a C Project
Quickest way to submit a C project.

1 - Head to the intra C project page (link to the intra - intra.42.fr) </br>
2 - Copy the link of that C project git repo in the intra C project page. </br>
3 - With that link, head over to iTerm and cd into desktop. </br>
4 - Once you have cd into desktop, type in the following - git clone <paste url link from intra here> (space) type in Project name here. </br>
5 - Hit enter and the repo from the intra will popup on your desktop. </br>
6 - Copy the projects from your other C folder that you are submitting into this folder that you git cloned from the intra. </br>
7 - Once you have copied the .c files over to this git cloned folder, do the following:

Type in shell, the following commands in order to submit your C Project:

1 - ```git status``` </br>
2 - ```git add *``` (* - the star adds all of your .c files all together instead of .c files in one at a time). </br>
3 - ```git status``` (shows all of your .c files have been added - make sure only .c shows up and remove the files other files like - a.out, etc.). </br>
4 - ```git commit -m "my commit"``` "leave your commit message here" </br>
5 - ```git push```


You have now pushed your project!

Before you click on 'Set Project as Finished' on the 42 Intra C Project page, make sure to git clone that Intra C Project to make sure all of 
the folders and .c files are in there. 

If all of the folders and .c files are there, go ahead and click on 'Set Project as Finished', subscribe to 2 evaluations and good luck!

If you folders and .c files ain't all there, go back to Step 1 and repeat the proccess.  

Another method you can also do is before you even begin to work on your C Project, head over to the intra C Project page your working on and git clone the project
and work straight from in there instead. 

# 42-Piscine-Exam
Links to Exam Questions and Solutions

http://nigal.freeshell.org/42/exam-solutions/ </br>
https://github.com/gcamerli/examshell </br>
https://github.com/barimehdi77/42-piscine-exam </br>
all exam questions and solutions.pdf - available above 🔼

# Before Exams and C Concepts

You should learn the following fundamental C Concepts in the Piscine:
- Functions 
- Loops 
- Conditions 
- Arrays 
- Pointers
- Strings
- Argc & Argv 
- Malloc and Free

The Additional Concepts includes:

- Headers (C08)
- Makefile (C09)

# Logging Into The Exam

Step 1 - Login in with username ```exam``` and the password is also ```exam``` at the Login Screen. </br>
Step 2 - Open the iTerm and type ```examshell```. </br>
Step 3 - Then type in your Intra username and password.  </br>
Step 4 - Type in ```yes``` for fingerprint ID and type in ```y``` to start the exam. </br>
Step 5 - You should now get your first .c exam question (only_z for example). </br>
Step 6 - Now you need to find two things before starting the .c exam question (rendu and subject.txt) </br>
Step 7 - To find rendu and subject.txt, type in the following in another iTerm ```cd```, NOT in your examshell, and that would put you in your users folder. </br>
Step 8 - There you would find both the rendu and subjects folder. </br>
Step 8 Bonus - Another alternative is to click finder located at your taskbar and then right-click on the applications folder located at the top of the finder application. 

# During The Exam

1 - Don't forget to clean up, comment, remove your testing code execs, and libraries prior to submission. </br>
2 - Don't forget to push your code regularly in the rendu/ directory to vogsphere before typing grademe and y in the examshell terminal. </br>
3 - Read through all of the subjects and examples again before final submission.

# Git Push Exam Project

How to push your C project to be graded, cause the way you push your project for the 42 Intra is different to the way you push your project for the Exam.

Step 1 - In your iterm shell, ```cd``` into the folder - rendu. </br>
Step 2 - Now that your in rendu, you should see your .c file in there. </br>
Step 3 - In your iterm shell, type in ```git add .c file```. </br>
Step 4 - Then type in ```git status``` to check if your .c file has been added to the git. </br> 
Step 5 - Then type in ```git commit -m``` "with your message". </br>
Step 6 - Then type in ```git status``` again to check if your .c file has been commited to the git. </br> 
Step 7 - Then type in shell ```git push``` to push your .c project, ready for grading. </br> 
Step 8 - Then click on the examshell and type in ```grademe``` to be graded. </br>

If you passed, congrats! </br> 
If not, then head back to your .c file and fix what's gone wrong and repeat from Step 1.

# 42 School
To increase your chance to get into the 42 School, I would recommend the following:
- Complete enough C Projects
- Pass an exam
- Do alot of evals
- Get alot of Voxtron votes

Note: Nothing is guaranteed though as the 42 Entrance to the school information isn't public. 

# Essential Items List
Items that you should bring with you on Campus just about everyday.

📱        Your Phone </br>
🔌  A Phone Charger </br>
🎧  Your Headphones </br>
🖱️   Your Mouse </br>
🚰  A Water Bottle </br>
📓  A Notebook + Pen </br>
🥪  Your Lunch or Credit Card </br>
😷  A Mask

Enjoy coding and GOOD LUCK in the piscine.
