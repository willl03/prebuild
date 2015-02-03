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
git cherry-pick b3d3c2785ee65c2b6714eac752124f76956d406c
sleep 1
###Change ring/notif/alarm defaults for Slim sounds
git cherry-pick c80007de9d83031b91c3bbe94d191a73ca0ea69f
sleep 1
###Trim cm_audio.mk
git cherry-pick 3a67d61744f309b1ba9491c858c078adae7f6e6f
sleep 1
###red 1080 bootanimation 
git cherry-pick d3855e89c45c1cf8388301a1154d57c6988ecdc5
sleep 1
croot
sleep 1

echo ---------------------
echo build
echo ---------------------
cd build
sleep 1
git fetch https://github.com/willl03/android_build.git cm-12.0
sleep 1
###(2/2) W03ify build name
git cherry-pick 8becdc1c96c3606a127cf2208c8a1b5c94623e0c
sleep 1
###W03'ify updater script
git cherry-pick ae9b0d1c49e122c976fe7ad8885de57d7477a8ab
sleep 1
###Build: slim up sounds and update (2/2)
git cherry-pick 83309bdcb36b188c10d270ce5c842df31a29e618
sleep 1
###Do not use block packaging
git cherry-pick 43054b01e86301c669352d03fcd0537848d1901b
sleep 1
croot
sleep 1

echo ---------------------
echo InCallUI
echo ---------------------
cd packages/apps/InCallUI
sleep 1
git fetch https://github.com/willl03/android_packages_apps_InCallUI.git cm-12.0
sleep 1
###Revert "InCallUI: add volume boost and volume enhancement UI" 
git cherry-pick 1873a05d44bc1a9e9fe755f56742bed734576144
sleep 1
croot
sleep 1

echo ---------------------
echo frameworks/av
echo ---------------------
cd frameworks/av
sleep 1
git fetch https://github.com/willl03/android_frameworks_av.git cm-12.0
sleep 1
###Forward Port: Add Camera sound toggle [3/3]
git cherry-pick 75fbd1bfde670878027e2c7c0907a1e225dada70
sleep 1
croot
sleep 1

echo ---------------------
echo frameworks/native
echo ---------------------
cd frameworks/native
sleep 1
git fetch https://github.com/willl03/android_frameworks_native.git cm-12.0
sleep 1
###Add 3GB dalvik heap and hwui memory 
git cherry-pick ec1170ae02540dab60bc2698da96fcade6a272e8
sleep 1
croot
sleep 1


######################


###
git cherry-pick 
sleep 1
