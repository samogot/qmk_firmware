#!/usr/bin/env zsh
URL=$1
BASENAME=${${URL##*/}%%.zip}
VER=${BASENAME##*_}
KB=${BASENAME%%_*}
KM=${${BASENAME#*_}%_*_$VER}

git checkout oryx || exit 1

if [[ $(git log -n 1 --pretty='format:%s') == $VER ]]; then
  echo Up to date
  git checkout master
  exit 0
fi

curl -Lo $BASENAME.zip $URL || (git checkout master; exit 1)
unzip -o -j $BASENAME "${KB}_${KM}_source/*" -d keyboards/$KB/keymaps/$KM
rm $BASENAME.zip

git commit -m "$VER" keyboards/$KB/keymaps/$KM/* || exit 1
git checkout master