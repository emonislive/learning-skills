# What I learned

Mainly learning what is git and github and how to use it.

### Clone the repository
cd ~ <br>
git clone https://github.com/emonislive/learning-skills.git

### Navigate to the repository
cd learning-skills

### Navigate to the programming-hero-web-dev directory
cd programming-hero-web-dev

### Create the new folder module_3
mkdir module_3

### Create the index.html file inside the module_3 folder
touch module_3/index.html

### Stage the new file
git add module_3/index.html

### Commit the changes
git commit -m "Added module_3 folder with index.html"

### Set the remote URL with your Personal Access Token (replace <your-token> with your actual token)
git remote set-url origin https://<your-token>@github.com/emonislive/learning-skills.git

### Set user name and email
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"

### (Optional) Verify the configuration
git config --global --list

### Check current branch
git branch

### (If you're not on 'main', switch to it)
git checkout main

### Push the changes to the remote repository (main branch)
git push origin main

