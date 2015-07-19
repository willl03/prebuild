source build/envsetup.sh
sleep 1

# ------------------------------------------
# ------------------------------------------
# CHERRY-PICKS
# ------------------------------------------
# ------------------------------------------

echo ---------------------
echo vendor/cm
echo ---------------------
cd vendor/cm
sleep 1
git fetch https://github.com/willl03/android_vendor_cm.git cm-12.1
sleep 1
###Add fstrim init.d script
git cherry-pick bc5070dae9288a48ac2a262ef1ad4e0a8d2a1c82
sleep 1
###Add cool panel color init.d script
git cherry-pick e7953ea323e9f5a2f83214715111a083d548c00d
sleep 1
###Add a few Samsung media sounds
git cherry-pick 27e01105ee681926f7a84b9f9d476a9d8ce15234
sleep 1
###Remove CM Updater
git cherry-pick 3c368f311e7eef413598f9fba82850d39a57438b
sleep 1
###(1/2) W03ify build name
git cherry-pick 2513f2e97fa2d27882c2977c591ffba0c8dddc39
sleep 1
###Change ring/notif/alarm defaults for Slim sounds
git cherry-pick 1757e853343de2ac733613d40a469bbb126b8a7d
sleep 1
###Trim cm_audio.mk
git cherry-pick d9ef3c0228da7841d9747e31ec778a7adbde7aad
sleep 1
###red 1080 bootanimation 
git cherry-pick cf7855b77ebe88d8febeb9e8bf1f85454771c39a
sleep 1
###Do not build CM Setup Wizard
git cherry-pick 3ef649f59682965b12ae5fced5e56b81b82cf26a
sleep 1
###Do not build CM Account app 
git cherry-pick aa4ae9e7092964262cf8a1806ba57a11e3c49fdf
sleep 1
###apns-conf: Remove Bell Canada web proxy
git cherry-pick a4bd392f31a4e5c5b34e5e1ec81ba4aaabb0d393
sleep 1
croot
sleep 1

echo ---------------------
echo build
echo ---------------------
cd build
sleep 1
git fetch https://github.com/willl03/android_build.git cm-12.1
sleep 1
###(2/2) W03ify build name
git cherry-pick d4cb3034634d706200506f98d2a04aa2b868019b
sleep 1
###Build: slim up sounds and update (2/2)
git cherry-pick 710eee32af82bf81d024c957b5b781b1993c5125
sleep 1
###Create 0 compression ratio jar files
git cherry-pick ca8a88493fb27ff4d45acd4d9b0b0ef178bc27aa
sleep 1
###W03'ify updater script
git cherry-pick 79c6bfc7bc9d948f13330e70c80f7333bbdfe508
sleep 1
###Do not use block packaging
git cherry-pick 60c3ecb4cb91120312136a68e013d548fe5a3d00
sleep 1
croot
sleep 1

echo ---------------------
echo InCallUI
echo ---------------------
cd packages/apps/InCallUI
sleep 1
git fetch https://github.com/willl03/android_packages_apps_InCallUI.git cm-12.1
sleep 1
###Hide volume boost button
git cherry-pick 1a0520a776a2b365c176fcdbacf41c780ff41048
sleep 1
croot
sleep 1

echo ---------------------
echo Dialer
echo ---------------------
cd packages/apps/Dialer
sleep 1
git fetch https://github.com/willl03/android_packages_apps_Dialer.git cm-12.1
sleep 1
###Enable Call Recording
git cherry-pick 06b520262c9903bff11cdae9f31e9626eb6d0a33
sleep 1
croot
sleep 1

echo ---------------------
echo frameworks/native
echo ---------------------
cd frameworks/native
sleep 1
git fetch https://github.com/willl03/android_frameworks_native.git cm-12.1
sleep 1
###Add 3GB dalvik heap and hwui memory 
git cherry-pick 339b4fb28c4fb5f6bd276fc35881ce473e5ab42f
sleep 1
croot
sleep 1

echo ---------------------
echo frameworks/av
echo ---------------------
cd frameworks/av
sleep 1
git fetch https://github.com/willl03/android_frameworks_av.git cm-12.1
sleep 1
###Forward Port: Add Camera sound toggle [3/3]
git cherry-pick bc6ae500ed2b21b427221bca5e133f3e6d651ca8
sleep 1
croot
sleep 1

echo ---------------------
echo hlte kernel
echo ---------------------
cd kernel/samsung/hlte
sleep 1
git fetch https://github.com/willl03/android_kernel_samsung_hlte.git staging-v2
sleep 1
###Fix build
###git reset --hard bc46e505217f43d53fe8818f5649699132fd7045
###sleep 1
###Downgrade Faux sound to more reliable v3.0
git cherry-pick ca969d4ba57f6824e91e52f51dcf301329412439
sleep 1
croot
sleep 1


######################


###
git cherry-pick 
sleep 1
