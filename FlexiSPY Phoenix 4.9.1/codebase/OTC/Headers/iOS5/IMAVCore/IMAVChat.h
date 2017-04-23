/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "IMSystemMonitorListener-Protocol.h"

@class IMAVChatFeature, IMAVChatParticipant, IMAccount, IMHandle, IMPair, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer;

@interface IMAVChat : NSObject //<IMSystemMonitorListener>
{
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSNumber *_natType;
    NSMutableDictionary *_extraServerContext;
    NSDictionary *_errorDict;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSString *_participantNames;
    NSData *_connectData;
    NSDictionary *_callerProperties;
    NSMutableDictionary *_unknownPartyStates;
    struct dispatch_queue_s *_queue;
    NSTimer *_firstFrameTimeoutTimer;
    NSTimer *_inviteTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    NSTimer *_breakBeforeMakeTimeoutTimer;
    NSTimer *_screenSaverBlockingTimer;
    id _conferenceController;
    id _delegate;
    id _theaterDelegate;
    int _callID;
    unsigned int _sessionID;
    unsigned int _addStatus;
    NSError *_error;
    int _addableParticipants;
    unsigned int _localState;
    unsigned int _lastPostedState;
    IMPair *_pendingPreemptiveRelayInitate;
    NSString *_callStatisticsGUID;
    struct CGSize _portraitAspectRatios;
    struct CGSize _landscapeAspectRatios;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    BOOL _hasGatheredInfo;
    BOOL _hasReceivedFirstFrame;
    BOOL _silentConference;
    BOOL _isListening;
    BOOL _isCounterProposalConnect;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
    BOOL _isTerminating;
    BOOL _needToSendEndConferenceNotification;
    BOOL _Q8IrisOpen;
    BOOL _usingCoercedIDs;
    BOOL _suppressBeginChat;
    BOOL _isCaller;
    BOOL _isVideo;
    BOOL _dataOut;
    BOOL _dataIn;
    BOOL _didRemoteMute;
    BOOL _didRemotePause;
    BOOL _remoteNetworkStall;
    BOOL _participantOrderFinal;
    int _connectionType;
    BOOL _localCell;
    BOOL _remoteCell;
    BOOL _needsVideoRestart;
    BOOL _needsAudioRestart;
    int _ardRole;
    IMAVChatFeature *_recorder;
    IMAVChatFeature *_auxVideo;
    IMAVChatFeature *_ard;
}

+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2 isARD:(BOOL)arg3;
+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;
+ (id)allowedClassesForArchives;
@property(readonly) NSDictionary *_extraServerContext; // @synthesize _extraServerContext;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) IMAVChatParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_localState;
@property(readonly, nonatomic) unsigned int addStatus; // @synthesize addStatus=_addStatus;
@property(readonly, nonatomic) int addableParticipants; // @synthesize addableParticipants=_addableParticipants;
@property(readonly, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(nonatomic, assign, setter=_setConferenceController:) id _conferenceController; // @synthesize _conferenceController;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSString *conferenceID; // @synthesize conferenceID=_conferenceID;
@property(nonatomic) int callID; // @synthesize callID=_callID;
@property(readonly, nonatomic) BOOL dataIn; // @synthesize dataIn=_dataIn;
@property(readonly, nonatomic) BOOL dataOut; // @synthesize dataOut=_dataOut;
@property(readonly, nonatomic) BOOL isCaller; // @synthesize isCaller=_isCaller;
@property(setter=setConferenceSilent:) BOOL isConferenceSilent; // @synthesize isConferenceSilent=_silentConference;
@property(nonatomic, setter=_setNeedsVideoRestart:) BOOL _needsVideoRestart; // @synthesize _needsVideoRestart;
@property(nonatomic, setter=_setNeedsAudioRestart:) BOOL _needsAudioRestart; // @synthesize _needsAudioRestart;
@property(nonatomic, setter=_setRemoteCell:) BOOL _remoteCell; // @synthesize _remoteCell;
@property(nonatomic, setter=_setLocalCell:) BOOL _localCell; // @synthesize _localCell;
@property(retain, nonatomic, setter=_setNatType:) NSNumber *_natType; // @synthesize _natType;
@property(readonly, nonatomic) IMHandle *initiatorIMHandle; // @synthesize initiatorIMHandle=_initiator;
@property(retain, nonatomic, setter=_setCallerProperties:) NSDictionary *callerProperties; // @synthesize callerProperties=_callerProperties;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) BOOL isQ8IrisOpen; // @synthesize isQ8IrisOpen=_Q8IrisOpen;
@property(retain, nonatomic, setter=_setCallStatisticsGUID:) NSString *_callStatisticsGUID; // @synthesize _callStatisticsGUID;
@property(nonatomic, setter=_setConnectionType:) int _connectionType; // @synthesize _connectionType;
@property(readonly, nonatomic) struct dispatch_queue_s *_queue; // @synthesize _queue;
- (void)_noteFirstFrame;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_reportError:(id)arg1;
- (void)_setErrorDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *errorDictionary;
- (void)_handleAVError:(id)arg1;
- (id)error;
- (void)_setCreationDate;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, nonatomic) int endedError;
- (void)_setConferenceID:(id)arg1;
@property(readonly, nonatomic) NSDictionary *vcErrorReport;
@property(readonly, nonatomic) BOOL isAOLInterop;
@property(readonly, nonatomic) BOOL isVideo;
@property(readonly, nonatomic) BOOL isOneWay;
@property(readonly, nonatomic) IMAccount *account;
@property(readonly, nonatomic) IMHandle *otherIMHandle;
//@property(nonatomic) id <IMAVChatTheaterDelegate> theaterDelegate;
//@property(nonatomic) id <IMAVChatDelegate> delegate;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (id)participantWithID:(id)arg1;
@property(readonly, nonatomic) NSString *participantNames;
- (void)invalidateParticipantNames;
- (void)handleVideoConferenceNotification:(id)arg1;
- (void)_participantsChanged:(id)arg1;
- (void)_inviteeInfoChanged:(id)arg1;
- (void)_initiatorInfoChanged:(id)arg1;
- (void)_imHandleStatusChanged:(id)arg1;
- (void)_subscribeToVCNotifications;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (void)_VCCounterProposal:(id)arg1;
- (void)_responseToVCInvite:(id)arg1;
- (void)_counterPropose:(id)arg1;
- (BOOL)_checkVCResponseDict:(id)arg1;
- (void)_threadedPrepareConnectionForInvitedParty:(id)arg1;
- (void)_mainThreadFinishPrepareConnectionForInvitedParty:(id)arg1;
- (void)_prepareConnectionForParticipant:(id)arg1;
- (void)_connectTo:(id)arg1 withData:(id)arg2;
- (void)_setStateDisconnected;
- (void)sendARDFileTransferAuthorization:(id)arg1 to:(id)arg2;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (void)acceptInvitation;
- (void)invite:(id)arg1;
- (void)_sendVCUpdateTo:(id)arg1 skipConnected:(BOOL)arg2;
- (void)cancelInvitation;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)inviteAll;
- (id)inviteesInfoAsPlist:(BOOL)arg1 account:(id)arg2;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)endChatWithError:(int)arg1;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)endChat;
- (void)beginChat;
- (id)description;
- (void)dealloc;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 ARDRole:(int)arg3;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 sessionID:(unsigned int)arg4 video:(BOOL)arg5 extraProperties:(id)arg6;
- (void)_determineDataIn;
- (id)initPersistentAVChatWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(int)arg3 sessionID:(unsigned int)arg4 video:(BOOL)arg5;

// Remaining properties
@property(readonly, nonatomic) BOOL canUseRelay; // @dynamic canUseRelay;
@property(readonly, nonatomic) IMAVChatParticipant *initiatorParticipant; // @dynamic initiatorParticipant;
@property(readonly, nonatomic) BOOL isActive; // @dynamic isActive;
@property(readonly, nonatomic) BOOL isStateFinal; // @dynamic isStateFinal;
@property(readonly, nonatomic) int numActiveParticipants; // @dynamic numActiveParticipants;
@property(readonly, nonatomic) NSArray *remoteParticipants; // @dynamic remoteParticipants;

@end

