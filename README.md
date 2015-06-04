# MSDynamicsDrawerViewController_Sample1
#Introduction
This sample project uses [MSDynamicsDrawerViewController](https://github.com/erichoracek/MSDynamicsDrawerViewController) for a simple scenario. 
>MSDynamicsDrawerViewController is a container view controller that manages the presentation of a single "pane" view controller overlaid over one or two "drawer" view controllers. The drawer view controllers are hidden by default, but can be exposed by a user-initiated swipe in the direction that that drawer view controller is hidden in. It uses UIKit Dynamics for all animation—there's not a single call to animateWithDuration:animations: in the project.
>_Source: (https://github.com/erichoracek/MSDynamicsDrawerViewController)_

##Scenario
You have a project in which you want to show the side menu on swipe gesture towards left. But you also have a login screen in your project where this side menu should not be visible. You also don't want to enable this side menu on a view controller, if this view controller was navigated from a Navigation View Controller.

#Usage
This project is just an example to show the use of MSDynamicsDrawerViewController for a particular scenario. But it can be easily modified for other projects as well.

#Installation
Either clone or download zip file from the github. Pod file is already present in the project. In case you get into some complication regarding pod file, you can install it yourself.

Add the following to your Podfile and run $pod install

>pod 'MSDynamicsDrawerViewController'

If you don't have CocoaPods installed or integrated into your project, you can learn how to do so [here](https://cocoapods.org).

#Requirements
Requires iOS 7.0 or higher, ARC, and the QuartzCore Framework.

#Note
This project runs just fine. But some clean ups are necessary on the code. I will continue updating this project as soon as I can scrape some free time from my schedule. Comments are appreciated.
