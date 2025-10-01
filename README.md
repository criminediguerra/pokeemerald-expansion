# Outfits System

## What is this?

This is a feature branch that implements _Outfits System_ into Pokémon Emerald, which also adds:
*  SDH's [commit](<https://github.com/ShinyDragonHunter/pokeemerald/commit/05f8f2688b22454e9d2400db1621375f1e4ccb3c>) for simplifying the player states system and thus making this system easier to implement. (Required)
* An item called _`OUTFIT BOX`_ for storing and changing the player's current outfit.
* A menu for changing outfits that is called in the OUTFIT BOX item. (Can also be configured to be called somewhere else if wanted)
* Several scripting macros for unlocking an outfit, checking the state of an outfit and buffers an outfit's name/description.

This is _not_ a faithful port of Gen 6's Outfits System. So, if you want it to behave similarly to Gen 6's system, you're likely gonna have to go on your own there. However, questions regarding the Outfits System is welcomed.

Note that this feature branch is still missing some of the features that's necessary, such as the ability to purchase outfits. So, stay tune for more until then!

## Known Bugs

<!-- TODO: Too busy to fix, so I'll put it here -->
### - Trainer Card shows Player's trainer pic for Link (Cable) Players

## Credits

If you use **`pokeemerald-expansion`**, please credit **RHH (Rom Hacking Hideout)**. Optionally, include the version number for clarity.

```
Based off RHH's pokeemerald-expansion 1.12.0 https://github.com/rh-hideout/pokeemerald-expansion/
```

Please consider [crediting all contributors](CREDITS.md) involved in the project!

# Choosing `pokeemerald` or **`pokeemerald-expansion`**

- **`pokeemerald-expansion`** supports multiplayer functionality with other games built on **`pokeemerald-expansion`**. It is not compatible with official Pokémon games.
- If compatibility with official games is important, use [`pokeemerald`](https://github.com/pret/pokeemerald). Otherwise, we recommend using **`pokeemerald-expansion`**.
- **`pokeemerald-expansion`** incorporates regular updates from `pokeemerald`, including bug fixes and documentation improvements.

# [Getting Started](INSTALL.md)

❗❗ **Important**: Do not use GitHub's "Download Zip" option as it will not include commit history. This is necessary if you want to update or merge other feature branches. 

If you're new to git and GitHub, [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/) has a [guide on forking and cloning the repository](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub). Then you can follow one of the following guides:

## 📥 [Installing **`pokeemerald-expansion`**](INSTALL.md)
## 🏗️ [Building **`pokeemerald-expansion`**](INSTALL.md#Building-pokeemerald-expansion)
## 🚚 [Migrating from **`pokeemerald`**](INSTALL.md#Migrating-from-pokeemerald)
## 🚀 [Updating **`pokeemerald-expansion`**](INSTALL.md#Updating-pokeemerald-expansion)

# [Documentation](https://rh-hideout.github.io/pokeemerald-expansion/)

For detailed documentation, visit the [pokeemerald-expansion documentation page](https://rh-hideout.github.io/pokeemerald-expansion/).

# [Contributions](CONTRIBUTING.md)
If you are looking to [report a bug](CONTRIBUTING.md#Bug-Report), [open a pull request](CONTRIBUTING.md#Pull-Requests), or [request a feature](CONTRIBUTING.md#Feature-Request), our [`CONTRIBUTING.md`](CONTRIBUTING.md) has guides for each.

# [Community](https://discord.gg/6CzjAG6GZk)

[![](https://dcbadge.limes.pink/api/server/6CzjAG6GZk)](https://discord.gg/6CzjAG6GZk)

Our community uses the [Rom Hacking Hideout (RHH) Discord server](https://discord.gg/6CzjAG6GZk) to communicate and organize. Most of our discussions take place there, and we welcome anybody to join us!
### Start Menu Clock

_Written for pokeemerald-expansion 1.7.X_

Adds a clock that tracks the in-game time to the start menu, as seen below. There are comments in the branch if you're interested in full day names vs shortened day names.

![Start Menu Clock](https://github.com/Pawkkie/pokeemerald-expansion/assets/61265402/2cf0306f-e367-4208-ba41-1fdcf26aab32)
- Slawter666, for their original costumes system that inspires me for doing this. 
- SDH for his commit that simplify the player states system and thus helps makes the process of creating this much easier.
- RavePossum for helping me with my silly mistakes that causes bugs and bringing ideas.
