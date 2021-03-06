# chrlauncher

![chrlauncher](http://www.henrypp.org/images/chrlauncher.jpg)

Small and very fast portable launcher and updater for Chromium.

```
To set as default internet browser run SetDefaultBrowser.bat (as admin).
```

#### Command line
```
/f - forced update checking
/q - no error messages visible (quiet)
```
#### Supported browser
- Launcher - Chromium and their clones (like Google Chrome, Yandex Browser and other legitimate trojans!).
- Updater - Chromium only.

#### Folder structure
- \bin - binaries directory.
- \profile - profile directory.

#### Settings
~~~
[chrlauncher]

# Command line for Chromium:
#
# See here:
# http://peter.sh/experiments/chromium-command-line-switches/
#
ChromiumCommandLine=--user-data-dir=..\profile --no-default-browser-check --allow-outdated-plugins --disable-component-update

# Chromium binaries directory:
#
ChromiumDirectory=.\bin

# Adobe Flash Player PPAPI DLL path:
#
# See here:
# http://effect8.ru/soft/media/adobe-flash-player-portable.html
#
FlashPlayerPath=.\plugins\pepflashplayer.dll

# Set Chromium binaries architecture:
#
# 0	-> autodetect (default)
# 64	-> 64-bit
# 32	-> 32-bit
#
ChromiumArchitecture=0

# Type of Chromium builds:
#
# dev-official		-> official development builds from snapshots repository (default)
# dev-codecs-sync	-> unofficial development builds with codecs from "github.com/henrypp/chromium"
# stable-codecs-sync	-> unofficial stable builds with codecs from "github.com/henrypp/chromium"
# dev-codecs-nosync	-> unofficial development builds with codecs and without the profile button from "github.com/henrypp/chromium"
# stable-codecs-nosync	-> unofficial stable builds with codecs and without the profile button from "github.com/henrypp/chromium"
#
ChromiumType=dev-codecs-sync

# Check for new Chromium version once in X days:
#
# 0	-> disable update checking
# 1	-> once in day (default)
#
ChromiumCheckPeriod=1

# Last update checking timestamp:
#
ChromiumCheckPeriodLast=0
~~~
Website: www.henrypp.org<br />
Support: support@henrypp.org<br />
<br />
(c) 2016 Henry++
