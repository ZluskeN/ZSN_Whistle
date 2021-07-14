# zsn_visselpipa

This mod adds an Acme Thunderer whistle item, which can be used through ACE 3 self interaction. It can be heard at a range of 1600 meters,
in accordance with the original specs from 1884. It can be found in the virtual arsenal under misc items. The classname is 'ZSN_Whistle'

## Build locally

Double click build.bat to generate pbo files in `addons` and `optionals` folders.

The main repository folder can be used as mod when Arma 3 is launched and it will use the built PBOs in the `addons` folder.

## Release locally

Double click `release.bat` to generate a release version in `releases`.

`bsl` key in the root `keys` folder will be used to sign the PBOs.
`bsl` key in the root `keys` folder will be copied to the mod folder.

## Build on GitHub Actions

Mod is automatically built on push and pull request.

A generated `bsl` key will be used to sign the PBOs.
