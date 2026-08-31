read -p "enter commit msg" msg

git add .
git commit -m "$msg"
git push
