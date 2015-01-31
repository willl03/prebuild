source build/envsetup.sh
sleep 1

# ------------------------------------------
# ------------------------------------------
# CHERRY-PICKS
# ------------------------------------------
# ------------------------------------------

# ---------------------
# vendor cm
cd vendor/cm
sleep 1
git fetch https://github.com/willl03/android_vendor_cm.git cm-12.0
sleep 1
###Add fstrim init.d script
git cherry-pick 357796dad6a9571a87ba37c5f61b52bba7f17d53
sleep 1
###Add cool panel color init.d script
git cherry-pick 525d52babda64f2d87b36c1d4b44a2c0e56db241
sleep 1
###Add a few Samsung media sounds
git cherry-pick 831833882d897bf6c145532496e1cacb454b5ee3
sleep 1
###apns-conf: Replace obsolete Luxgsm Internet with POST MMS & POST
git cherry-pick f4892fb17099bc1940618b38cb2fe5565b089196
sleep 1
###apns-conf: Remove Bell Canada web proxy
git cherry-pick 719300e56e3342e0f0bbeda8846345da5853cba6
sleep 1
###Remove CM Updater
git cherry-pick 1405ad54091e5b5f8a2be3d1b02ae9459db8d69b
sleep 1
###(1/2) W03ify build name
git cherry-pick 0df071aa1f276a8a819ec81c75d5d0ba26fe7571
sleep 1
###Change ring/notif/alarm defaults for Slim sounds
git cherry-pick d04b29e7c1aa92a51ebc7414bac42032cfe560f5
sleep 1
###Trim cm_audio.mk
git cherry-pick 2a1352154e44ac3f1f4495079fcd0f7196177882
sleep 1
croot
sleep 1

# ---------------------
# build
cd build
sleep 1
git fetch https://github.com/willl03/android_build.git cm-12.0
sleep 1
###(2/2) W03ify build name
git cherry-pick 8becdc1c96c3606a127cf2208c8a1b5c94623e0c
sleep 1
###W03'ify updater script
git cherry-pick 3ef2a6f37fc94fd6c6543b13e0283271c2e8cae1
sleep 1
###Build: slim up sounds and update (2/2)
git cherry-pick 163f5ed413b3e733ba775462029e9eb343fa5329
sleep 1
###Do not use block packaging
git cherry-pick c8ad214ea7ce6bcaeb472e40a14095a9ebc8246d
sleep 1
croot
sleep 1

# ---------------------
# InCallUI
cd packages/apps/InCallUI
sleep 1
git fetch https://github.com/willl03/android_packages_apps_InCallUI.git cm-12.0
sleep 1
###Revert "InCallUI: add volume boost and volume enhancement UI" 
git cherry-pick 11d01d78994adee20dccf254722c83d51852ef8f
sleep 1
croot
sleep 1

# ---------------------
# Frameworks AV
cd frameworks/av
sleep 1
git fetch https://github.com/willl03/android_frameworks_av.git cm-12.0
sleep 1
###Forward Port: Add Camera sound toggle [3/3]
git cherry-pick 75fbd1bfde670878027e2c7c0907a1e225dada70
sleep 1
croot
sleep 1


######################


###
git cherry-pick 
sleep 1
