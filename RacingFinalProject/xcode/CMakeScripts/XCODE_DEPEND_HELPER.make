# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.RacingGame.Debug:
/Users/wheeler/JacobWheeler/GabeJacob/xcode/Debug/RacingGame:\
	/Library/Frameworks/./sfml-graphics.framework/Versions/2.5.1/sfml-graphics\
	/Library/Frameworks/./sfml-window.framework/Versions/2.5.1/sfml-window\
	/Library/Frameworks/./sfml-system.framework/Versions/2.5.1/sfml-system
	/bin/rm -f /Users/wheeler/JacobWheeler/GabeJacob/xcode/Debug/RacingGame


PostBuild.RacingGame.Release:
/Users/wheeler/JacobWheeler/GabeJacob/xcode/Release/RacingGame:\
	/Library/Frameworks/./sfml-graphics.framework/Versions/2.5.1/sfml-graphics\
	/Library/Frameworks/./sfml-window.framework/Versions/2.5.1/sfml-window\
	/Library/Frameworks/./sfml-system.framework/Versions/2.5.1/sfml-system
	/bin/rm -f /Users/wheeler/JacobWheeler/GabeJacob/xcode/Release/RacingGame


PostBuild.RacingGame.MinSizeRel:
/Users/wheeler/JacobWheeler/GabeJacob/xcode/MinSizeRel/RacingGame:\
	/Library/Frameworks/./sfml-graphics.framework/Versions/2.5.1/sfml-graphics\
	/Library/Frameworks/./sfml-window.framework/Versions/2.5.1/sfml-window\
	/Library/Frameworks/./sfml-system.framework/Versions/2.5.1/sfml-system
	/bin/rm -f /Users/wheeler/JacobWheeler/GabeJacob/xcode/MinSizeRel/RacingGame


PostBuild.RacingGame.RelWithDebInfo:
/Users/wheeler/JacobWheeler/GabeJacob/xcode/RelWithDebInfo/RacingGame:\
	/Library/Frameworks/./sfml-graphics.framework/Versions/2.5.1/sfml-graphics\
	/Library/Frameworks/./sfml-window.framework/Versions/2.5.1/sfml-window\
	/Library/Frameworks/./sfml-system.framework/Versions/2.5.1/sfml-system
	/bin/rm -f /Users/wheeler/JacobWheeler/GabeJacob/xcode/RelWithDebInfo/RacingGame




# For each target create a dummy ruleso the target does not have to exist
/Library/Frameworks/./sfml-graphics.framework/Versions/2.5.1/sfml-graphics:
/Library/Frameworks/./sfml-system.framework/Versions/2.5.1/sfml-system:
/Library/Frameworks/./sfml-window.framework/Versions/2.5.1/sfml-window:
