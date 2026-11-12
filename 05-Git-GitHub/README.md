# 05 — Git and GitHub

## What is Git?

Git is a distributed version control system. It records changes to files over time, allowing developers to review previous versions and work on different features safely.

## What is GitHub?

GitHub is an online platform for hosting Git repositories. It supports collaboration through remote repositories, branches, pull requests, and issue tracking.

## Important terms

- **Repository:** a project folder tracked by Git.
- **Working directory:** the files currently being edited.
- **Staging area:** the changes selected for the next commit.
- **Commit:** a saved snapshot of staged changes.
- **Branch:** an independent line of development.
- **Remote:** a version of the repository hosted elsewhere, such as GitHub.
- **Clone:** a local copy of a remote repository.

## Basic workflow

```bash
git init
git status
git add .
git commit -m "Initial commit"
git branch
git remote add origin REPOSITORY_URL
git push -u origin main
```

## Common commands

See `GIT-COMMAND-PRACTICE.md` for explanations and a practice sequence.

## What I learned

Git tracks project history locally, while GitHub makes repositories available online and supports collaboration. Commits should have clear messages, and changes should be checked with `git status`.

## Practical task

Create a test repository, add a file, commit it, create a branch, merge the branch, and push the repository to GitHub.
