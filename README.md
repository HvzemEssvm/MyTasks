# Task 7.2 Documentation
*For the maximum practice with linux commands (implemented in challenging environment) and SSH protocol basics:*
> I used [OverTheWire](https://overthewire.org/wargames/bandit/) website as a practice field in an challenging interesting way

1. First used `touch BanditPass.txt`  to store passwords in it.
2. Used `touch UpdatePass.sh` to copy file from git repo to another directory on my machine every time instead of cp.
**note that you won´t see except this README.md as it is the only file committed and push.**
3. Edit bash file by `nano UpdatePass.sh` and getting the final directory to copy to by `pwd` command
```
#!/bin/bash
cp BanditPass.txt "/home/hazem-essam/Test file" 
echo "Password File Updated" 
```
4. `chmod u+x UpdatePass.sh` to allow executing the bash script.

### Now we are ready !
- `ssh bandit0@bandit.labs.overthewire.org -p 2220`, then I entered the password for level0
- `ls -a -l` to show all files (Even the hidden files) and retrieving the password by `cat *` or just followed by the file name
- ctrl+ins to copy password & `exit` to logout then editing (BanditPass.txt) by `nano BanditPass.txt`
- Running bash file `./UpdatePass.sh`
- repeating the previous steps (with small differences each time) to advance in the game.

## Hopefully this was a small implementation that gathered all the commands mentioned in the task.
