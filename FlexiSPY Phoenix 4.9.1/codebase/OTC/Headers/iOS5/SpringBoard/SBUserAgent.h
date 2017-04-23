/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "SBUIUserAgent-Protocol.h"

@class SBBulletinAlertHandlerRegistry;

@interface SBUserAgent : NSObject //<SBUIUserAgent>
{
    SBBulletinAlertHandlerRegistry *_modalAlertRegistry;
}

+ (id)sharedUserAgent;
- (id)init;
- (void)dealloc;
- (void)updateInterfaceOrientationIfNecessary;
- (int)activeInterfaceOrientation;
- (id)foregroundApplicationDisplayID;
- (id)foregroundDisplayID;
- (id)topSuspendedEventsOnlyDisplayID;
- (BOOL)deviceIsLocked;
- (BOOL)lockScreenIsShowing;
- (BOOL)homeScreenIsDisplayingWallpaper;
- (BOOL)springBoardIsActive;
- (void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)arg1;
- (BOOL)launchDisplayWithURL:(id)arg1 forCall:(BOOL)arg2 sender:(id)arg3;
- (BOOL)canUserLaunchIcon;
- (id)createWallpaperView:(int)arg1;
- (void)openURL:(id)arg1 animateIn:(BOOL)arg2 scale:(float)arg3 start:(double)arg4 duration:(float)arg5 animateOut:(BOOL)arg6;
- (BOOL)_openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3 activationFlag:(unsigned int)arg4;
- (BOOL)openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)canLaunchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2;
- (BOOL)launchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 animate:(BOOL)arg4 launchOrigin:(int)arg5;
- (BOOL)launchFromPushOrLocalBulletin:(id)arg1 origin:(int)arg2;
- (void)dimScreen:(BOOL)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
- (void)setIdleText:(id)arg1;
- (int)networkUsageTypeForAppWithDisplayID:(id)arg1;
- (void)playRingtoneAtPath:(id)arg1;
- (void)playRingtoneAtPath:(id)arg1 vibrationPattern:(id)arg2;
- (void)stopRinging;
- (void)prepareToAnswerCall;
- (id)modalBulletinAlertHandlerRegistry;
- (BOOL)isSBUILoggingEnabled;

@end

