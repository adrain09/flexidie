/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class CNFConferenceController;

//@interface SBConferenceManager : NSObject
//{
//    CNFConferenceController *_conferenceController;
//    unsigned int _chatState;
//}
@interface SBConferenceManager (IOS6)
+ (void)initialize;
+ (id)sharedInstance;
@property(readonly) unsigned int chatState; // @synthesize chatState=_chatState;
- (void)_faceTimeAppActivationStateChanged:(id)arg1;
- (void)_updateStatusBar;
- (void)updateStatusBar;
- (void)_faceTimeCapabilityChanged:(id)arg1;
- (void)_faceTimeAvailabilityChanged:(id)arg1;
- (id)currentCallStatusDisplayString;
- (id)currentCallRemoteUserId;
- (void)endFaceTime;
- (void)_faceTimeStateChanged:(id)arg1;
- (void)_handleInvitation:(id)arg1;
- (void)dealloc;
- (BOOL)canStartFaceTime;
- (BOOL)inFaceTime;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)faceTimeInvitationExists;
- (BOOL)faceTimeIsAvailable;
- (id)_faceTimeApp;
@property(readonly) CNFConferenceController *conferenceController;
- (id)init;

@end

