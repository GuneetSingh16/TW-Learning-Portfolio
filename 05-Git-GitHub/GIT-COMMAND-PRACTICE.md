# Git Command Practice

> Run these commands in a practice folder or test repository. Replace placeholder URLs and names with your own values.

## 1. Configure Git

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --list
```

## 2. Create or copy a repository

```bash
git init
git clone REPOSITORY_URL
```

`git init` starts tracking a folder. `git clone` downloads an existing repository.

## 3. Check repository status

```bash
git status
git log
git log --oneline
```

## 4. Stage and commit changes

```bash
git add filename
git add .
git commit -m "Describe the changes"
```

- `git add` stages changes.
- `git commit` saves staged changes in the repository history.

## 5. View changes

```bash
git diff
git diff --staged
git show
```

## 6. Branch commands

```bash
git branch
git branch feature-notes
git switch feature-notes
git switch -c new-feature
git merge feature-notes
git branch -d feature-notes
```

Create a branch to work separately, then merge it into the current branch when ready.

## 7. Remote repository commands

```bash
git remote -v
git remote add origin REPOSITORY_URL
git push -u origin main
git push
git fetch
git pull
```

- `push` uploads local commits.
- `fetch` downloads remote updates without merging them.
- `pull` fetches and integrates remote updates.

## 8. Undo and restore commands

```bash
git restore filename
git restore --staged filename
git revert COMMIT_ID
```

Use these carefully. `git restore` discards working-tree changes to a file; `git restore --staged` removes a file from staging. `git revert` creates a new commit that reverses an earlier commit.

## 9. Remove or rename files

```bash
git rm filename
git mv oldname newname
```

## 10. Ignore files

Create a `.gitignore` file and list files or folders Git should not track, for example:

```text
.DS_Store
*.log
build/
```

## Practice sequence

1. Make a new folder and run `git init`.
2. Create `notes.txt`.
3. Run `git status`.
4. Stage the file using `git add notes.txt`.
5. Commit it using `git commit -m "Add first notes file"`.
6. Create and switch to a branch named `practice`.
7. Edit `notes.txt`, stage it, and commit the change.
8. Switch back to `main` and merge `practice`.
9. Connect a GitHub repository using `git remote add origin REPOSITORY_URL`.
10. Push your commits using `git push -u origin main`.

## Important note

Some repositories use `master` instead of `main`. Check the current branch using `git branch` and use the correct branch name in your commands. Never run destructive commands on a repository containing work you need.
