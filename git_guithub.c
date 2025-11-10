// version control system is git . this work in the laptop.
/*
guithub is a website
job a guithub submit hoi
comment means = changes
*/
/*
git config--global user.name "my name"
git config--global user.email"someone@gmail.com"
git config--list
*/
// local- laptop
// remote- github
/*
comands-
for copy we use clone
Clone- cloning and repository on our local machine
git clone<-some link->

*/
//cd folder name --change directory
/*
status- display the state of the vode
git status
*/
////////modify--add--aommit


/*
untracked-- new files that git doesnot yet track
modified-- changed
unmodified-- unchanced
staged-- file is ready to be commited


process--changed--add--commit


add command = adds new or changed files in your working dictionary to the git staging area
git add<-file name->          (not any chinho)
all file add comand ;
git add .
commit command = it is the record of change
git commit-m"some massage"

///push command add kore vs code thake github
git push origin main
*/
/*
first file --- git init -- git add . --- git commit -m"add initial files" -- git push --
*/

/*
laptop code uplode in github = your repositories --new -- repository name -- creat -- git remote add origin (then ripo link pest) -- git remote -v  --- git branch --- git branch -M main ---  git push origin main ---- 
*/
/*
Init comand:
init- used to creat a new git repo
git init
git remote add origin<-link->
git remote-v    (to verify remote)
git branch -M main      (to rename branch that which branch i am in)
git push origin main
git push -u origin main
*/

/*
file make kora ache then add file=
git add .   ---   git commit -m"  "  ---  git push
*/

/*
Workflow
local git=
1.github repo/file
2.clone
3.change
4.add
5.commit
6.push
*/


/*
git branches:
branch commands;

git branch     (to check branch)
git branch-m main   (to rename branch)
git checkout <-branch name->     (to navigate)
git checkout-b <-new branch name->     (to creat new branch)
git branch-d <-branch name->     (to delale branch)
git checkout main         (another branch to main branch)

when we creat and write some thing in new branch then push github
all step same and last push

git push origin <- branch nname  ->

then we go git and see the different


*/


/*
Marge code   (main branch er sathe extre branch add)

way 1
git diff<-branch name->    (to compare commits, branches files and more)
git merge<-branch name->   (to merge 2 branches)


way 2
using github
Creat a PR  (pull request)

pull request  ( it lets you tell others about changes you have pushed to a branch in a repoository on github )
pull comand
git pull origin main   (used to fetch and diwnload from a remote repo and immediately update the local repo to match that content)

*/


/*
Marge conflicts resolving
if in one poin there is many changes then when we get marge we will see marge conflecl
then we see many option there and we change what we need 
and last to push github previous step will followed
*/



/*
undoing changes

case1: staged changes
       git reset<-file name->
       git reset

case2: commited changes(for one commit)
       git reset HEAD~1

case3: commited changes(for many commits)
       git reset<-commit hassh->
       git reset--hard<-commit hash->

*/

kjkjknnkkh u i li k y  g fyfj          uf