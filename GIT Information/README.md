## Setting Up Your GIT SSH Key

How to set up your SSH Key for your Projects:

Step 1 - First you need to open your iTerm. <br>
Step 2 - Run this command `ssh-keygen -t rsa -b 4096` <br>
Step 3 - Press Enter. <br>
Step 4 - Continue Pressing Enter until your screen looks like this:

<img width="458" alt="Screen Shot 2022-02-11 at 12 26 01 PM" src="https://user-images.githubusercontent.com/58959408/153526481-819cb9e6-c02a-4fe1-b452-cfca07d1f2d3.png">

Step 5 - Run this commmand `ssh key cat .ssh/id_rsa.pub` <br>
Step 6 - Copy The Public Key. <br>
Step 7 - Copy into your 42 Intra Account
- Click Edit Profile
- Then Click Public Key
- Paste Your Public Key
- Press Submit
