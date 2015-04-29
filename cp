source build/envsetup.sh
sleep 1

# ------------------------------------------
# ------------------------------------------
# CHERRY-PICKS
# ------------------------------------------
# ------------------------------------------


echo ---------------------
echo hlte kernel
echo ---------------------
cd kernel/samsung/hlte
sleep 1
git fetch https://github.com/willl03/android_kernel_samsung_hlte.git staging-v2
sleep 1
###Downgrade Faux sound to more reliable v3.0
git cherry-pick ca969d4ba57f6824e91e52f51dcf301329412439
sleep 1
croot
sleep 1


######################


###
git cherry-pick 
sleep 1
