# Deploy a Django project to GitHub for version control.

print("""

1. Prerequisites
A GitHub account (Sign up if you don’t have one).

Git installed on your system. Check by running:git --version

2. Initialize Git in the Django Project
Navigate to your Django project folder and initialize Git:cd /path/to/your/django-project
git init


3. Create a .gitignore File
To avoid pushing unnecessary files, create a .gitignore file in your project root and add the following:
# Ignore Python cache and virtual environment
__pycache__/
*.py[cod]
venv/
env/

# Ignore database files
*.sqlite3

# Ignore secret settings
.env
*.log

# Ignore Django migrations cache
*/migrations/__pycache__/

4. Connect the Project to GitHub
Go to GitHub and create a new repository. Do not initialize it with a README or .gitignore (we’ll do this locally).

Copy the repository URL.

Back in your terminal, add the remote repository:

bash
Copy
Edit
git remote add origin https://github.com/your-username/your-repository.git

git remote -v


5.Add and Commit Files
Stage all project files for commit:

bash
Copy
Edit
git add .

6. Push to GitHub
Push your project to the repository:

bash
Copy
Edit
git branch -M main  # Rename the branch to main (if needed)
git push -u origin main

7. Verify on GitHub
Go to your GitHub repository page and refresh. Your Django project should now be there!

8. Updating Your Repository (Future Changes)
Whenever you make changes, update GitHub with:

bash
Copy
Edit
git add .
git commit -m "Updated feature"
git push origin main

git clone https://github.com/your-username/your-repository.git

""")