# Visualise C Code

This tool will help you visualise your code, step-by-step: <br>
https://pythontutor.com/c.html#mode=edit

# C Concepts

You should learn the following fundamental C Concepts in the Piscine:
- Functions 
- Variables
- Loops 
- Conditions 
- Arrays 
- Pointers
- Strings
- Argc & Argv 
- Malloc and Free

The Additional Concepts includes:

- Libraries
- Headers (C08)
- Makefile (C09)
- Make

# C Projects Checklist
A checklist you can use before you submit your C Projects. 

- Make sure all of the right files are there and are named correctly, check the c.pdf if needed.
- Run Norminette in the folder of your C Projects in iTerm.
- Make sure all .c projects have headers in them, to place a header type in vim - :Stdheader or press ```fn``` + ```esc``` + ```F1``` in that order on the keyboard ⌨️
- gcc to compile your .c project
- Make sure only the .c files are in there and not any a.out or other files are there. 
- Git clone your repo before clicking on 'set project as finished' to check that everything is there. 

# To Compile your C Project 

This is how you compile your .c file in both your projects and the exam. You can do this both ways and I suggest that you do. 

```gcc <file name>.c```

```gcc -Wall -Wextra -Werror <filename.c>```

To view your output, type the following:

```./a.out```

You can also gcc your file and ./a.out at the same time by writing the following:

```gcc <file name.c> && ./a.out```

Once you have compiled your .c file and it returns the excepted output, you are ready for the next part: 

For C Projects
- Head to Submit a C Project Section Below

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

Tip: </br>
Another method you can also do is before you even begin to work on your C Project, is to head over to the intra C Project page your working on and git clone the project
and work straight from in there instead. 
