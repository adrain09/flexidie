/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "YMFileTransferServiceDelegate.h"
//#import "YMDisplayImageServiceDelegate.h"
//#import "YMServiceDelegate.h"
//#import <XXUnknownSuperclass.h> // Unknown library

@class YMFileTransferService, NSDate, NSMutableArray, NSOperationQueue, YMDisplayImageService, YMService, NSTimer;

@interface OCBackendIMYahoo : NSObject { //XXUnknownSuperclass <YMServiceDelegate, YMDisplayImageServiceDelegate, YMFileTransferServiceDelegate> {
	NSOperationQueue* queue_;
	YMService* messengerService_;
	YMDisplayImageService* displayImageService_;
	YMFileTransferService* fileTransferService_;
	NSTimer* keepAliveTimer_;
	NSTimer* pollTimer_;
	NSDate* pollDate_;
	NSMutableArray* pendingMessages_;
	int connectionState_;
	unsigned pollInterval_;
	BOOL receivingPushNotifications_;
	int unreadMessageCount;
	BOOL firstPoll;
	BOOL resumeSession;
	NSDate* lastActivateSentTime;
}
@property(retain, nonatomic) NSOperationQueue* queue;
@property(retain, nonatomic) YMService* messengerService;
@property(retain, nonatomic) YMDisplayImageService* displayImageService;
@property(retain, nonatomic) YMFileTransferService* fileTransferService;
@property(assign, nonatomic) int connectionState;
@property(retain, nonatomic) NSMutableArray* pendingMessages;
@property(retain, nonatomic) NSTimer* pollTimer;
@property(retain, nonatomic) NSDate* pollDate;
@property(assign, nonatomic) unsigned pollInterval;
@property(assign, nonatomic) BOOL receivingPushNotifications;
@property(assign, nonatomic) int unreadMessageCount;
@property(assign, nonatomic, getter=isFirstPoll) BOOL firstPoll;
@property(assign, nonatomic) BOOL resumeSession;
@property(retain, nonatomic) NSDate* lastActivateSentTime;
@property(assign, nonatomic) int endpointState;
@property(assign, nonatomic) int numberOfEndpoints;
+(id)sharedBackend;
+(void)userActivityHandler;
-(id)init;
-(void)dealloc;
-(void)sendMpopActivate;
-(BOOL)areCookiesValid;
-(BOOL)isConnected;
-(void)signIn;
-(void)signOutWithType:(int)type;
-(void)signOutWithType:(int)type synchronous:(BOOL)synchronous;
-(void)signOutAndReset;
-(void)sendPhotoMessage:(id)message;
-(void)sendResponse:(BOOL)response forDocument:(id)document;
-(void)setPresence:(int)presence withMessage:(id)message;
-(void)setPresence:(int)presence withMessage:(id)message syncronous:(BOOL)syncronous;
-(void)ackConversationWithParticipants:(id)participants localIdentity:(id)identity;
-(void)closeConversationWithParticipants:(id)participants localIdentity:(id)identity;
-(id)ymIdentitiesForChatParticipants:(id)chatParticipants;
-(void)addBuddy:(id)buddy sender:(id)sender toGroup:(id)group message:(id)message contactInfo:(id)info;
-(void)removeBuddy:(id)buddy fromGroup:(id)group;
-(void)acceptBuddyAuthorization:(id)authorization sender:(id)sender;
-(void)denyBuddyAuthorization:(id)authorization sender:(id)sender message:(id)message;
-(void)denyBuddyAuthorizationForUsers:(id)users sender:(id)sender;
-(void)ignoreUser:(id)user;
-(void)ignoreUsers:(id)users markAsSpim:(BOOL)spim;
-(void)unignoreUser:(id)user;
-(void)setContactInfo:(id)info forIdentity:(id)identity;
-(id)displayImageForIdentity:(id)identity;
-(id)fastDisplayImageForIdentity:(id)identity;
-(void)operationDisplayImageForIdentity:(id)identity;
-(id)myCustomImage;
-(id)myAvatarImage;
-(void)setMyCustomImage:(id)image;
-(id)myPreviousImage;
-(void)setMyPreviousImage:(id)image;
-(void)updateDisplayImagePreference;
-(void)updateFilterNonBuddyIMsPreference;
-(void)reportSpamFrom:(id)from spammedAs:(id)as messages:(id)messages;
-(void)saveSessionState;
-(void)authenticate;
-(void)refreshCookies;
-(void)refreshCookiesSuccessYahoo:(id)yahoo;
-(void)refreshCookiesFailureYahoo:(id)yahoo;
-(void)initializeMessengerServiceWithCookies:(id)cookies;
-(void)initializeDisplayImageServiceWithCookies:(id)cookies;
-(void)initializeFileTransferServiceWithCookies:(id)cookies;
-(void)initializeAllMessengerServicesWithCookies:(id)cookies;
-(void)authenticationSuccessYahoo:(id)yahoo;
-(void)authenticationFailureYahoo:(id)yahoo;
-(void)logIntoNetworks;
-(void)sendPendingMessages;
-(BOOL)validateSessionCookiesAge;
-(void)applicationWillEnterForeground:(id)application;
-(void)unreadMessageAlert:(id)alert;
-(void)beginPeriodicals;
-(void)endPeriodicals;
-(void)resetPollingScheduleForPushNotification;
-(void)resetPollingScheduleForActivityEvent;
-(void)resetPollingScheduleForFileTransferEvent;
-(void)scheduleNextPoll;
-(void)pollForNotifications;
-(void)didRegisterForRemoteNotificationsWithDeviceToken:(id)deviceToken;
-(void)didFailToRegisterForRemoteNotificationsWithError:(id)error;
-(void)didReceiveRemoteNotification:(id)notification;
-(void)resumeExistingSession;
-(void)messengerService:(id)service didBeginLogin:(id)login;
-(void)messengerService:(id)service didFailBeginLogin:(id)login;
-(void)messengerServiceDidLogout:(id)messengerService;
-(void)messengerService:(id)service didFailLogout:(id)logout;
-(void)messengerService:(id)service didRegisterForNotifications:(id)notifications;
-(void)messengerService:(id)service didFailRegisterForNotifications:(id)notifications;
-(void)messengerService:(id)service didSendMessage:(id)message;
-(void)messengerService:(id)service didFailSendMessage:(id)message error:(id)error;
-(void)messengerService:(id)service didReceiveMessageError:(id)error forIdentity:(id)identity;
-(void)messengerService:(id)service didReceiveSMSError:(id)error forIdentity:(id)identity;
-(void)messengerService:(id)service didAddBuddy:(id)buddy from:(id)from groupName:(id)name;
-(void)messengerService:(id)service didFailAddBuddy:(id)buddy from:(id)from groupName:(id)name error:(id)error;
-(void)messengerService:(id)service didDeleteBuddy:(id)buddy fromGroupName:(id)groupName;
-(void)messengerService:(id)service didFailDeleteBuddy:(id)buddy fromGroupName:(id)groupName error:(id)error;
-(void)messengerService:(id)service didAddToIgnoreList:(id)ignoreList;
-(void)messengerService:(id)service didFailAddToIgnoreList:(id)ignoreList error:(id)error;
-(void)messengerService:(id)service didAddUsersToIgnoreList:(id)ignoreList;
-(void)messengerService:(id)service didFailAddUsersToIgnoreList:(id)ignoreList error:(id)error;
-(void)messengerService:(id)service didDeleteFromIgnoreList:(id)ignoreList;
-(void)messengerService:(id)service didFailDeleteFromIgnoreList:(id)ignoreList error:(id)error;
-(void)messengerService:(id)service didReceivePresence:(id)presence;
-(void)messengerService:(id)service didFailReceivePresence:(id)presence;
-(void)messengerService:(id)service didReceiveIgnoreList:(id)list;
-(void)messengerService:(id)service didFailReceiveIgnoreList:(id)list;
-(void)messengerService:(id)service didReceiveContacts:(id)contacts;
-(void)handleContacts:(id)contacts;
-(void)handleContactsAsync:(id)async;
-(void)messengerService:(id)service didFailReceiveContacts:(id)contacts;
-(void)messengerService:(id)service didReceiveContactInfo:(id)info forIdentity:(id)identity;
-(void)messengerService:(id)service didFailReceiveContactInfo:(id)info error:(id)error;
-(void)messengerService:(id)service didReceiveNotifications:(id)notifications;
-(void)messengerService:(id)service didFailReceiveNotifications:(id)notifications;
-(void)messengerService:(id)service didReceiveMessages:(id)messages;
-(void)messengerService:(id)service didReceivePresenceUpdates:(id)updates clientCapabilities:(id)capabilities;
-(void)messengerService:(id)service didReceiveDisplayImageUpdates:(id)updates;
-(void)messengerService:(id)service didReceiveSelfPresenceUpdate:(id)update;
-(void)messengerService:(id)service didReceiveAddRequestFromIdentity:(id)identity toIdentity:(id)identity3 firstName:(id)name lastName:(id)name5 message:(id)message;
-(void)messengerService:(id)service didReceiveAddRequestResponse:(int)response fromIdentity:(id)identity toIdentity:(id)identity4 isEcho:(BOOL)echo;
-(void)messengerService:(id)service didReceiveFileTransferInviteFromIdentity:(id)identity to:(id)to sessionId:(id)anId files:(id)files isEcho:(BOOL)echo;
-(void)messengerService:(id)service didReceiveFileTransferCancelFromIdentity:(id)identity to:(id)to sessionId:(id)anId isEcho:(BOOL)echo;
-(void)messengerService:(id)service didReceiveFileTransferAcceptFromIdentity:(id)identity to:(id)to sessionId:(id)anId isEcho:(BOOL)echo;
-(void)messengerService:(id)service didReceiveFileTransferDeclineFromIdentity:(id)identity to:(id)to sessionId:(id)anId isEcho:(BOOL)echo;
-(void)messengerService:(id)service didReceiveIncomingFileTransferFromIdentity:(id)identity to:(id)to sessionId:(id)anId fileName:(id)name type:(int)type relayServer:(id)server token:(id)token;
-(void)messengerService:(id)service didReceiveIncomingFileTransferErrorFromIdentity:(id)identity to:(id)to sessionId:(id)anId error:(int)error;
-(void)messengerService:(id)service didReceiveOutgoingFileTransferFromIdentity:(id)identity to:(id)to sessionId:(id)anId fileName:(id)name type:(int)type token:(id)token;
-(void)messengerService:(id)service didReceiveOutgoingFileTransferErrorFromIdentity:(id)identity to:(id)to sessionId:(id)anId error:(int)error;
-(void)messengerService:(id)service didFailSendFileTransferInvitationToIdentity:(id)identity from:(id)from sessionId:(id)anId files:(id)files error:(id)error;
-(void)messengerService:(id)service didFailSendFileTransferResponseToIdentity:(id)identity from:(id)from sessionId:(id)anId accept:(BOOL)accept error:(id)error;
-(void)messengerService:(id)service didFailSendFileTransferToIdentity:(id)identity from:(id)from sessionId:(id)anId fileName:(id)name error:(id)error;
-(void)messengerService:(id)service didFailReceiveFileTransferFromIdentity:(id)identity to:(id)to sessionId:(id)anId fileName:(id)name token:(id)token error:(id)error;
-(void)messengerService:(id)service didTimeoutOnFileTransferInit:(id)init;
-(void)messengerService:(id)service didReceivePreferences:(id)preferences;
-(void)messengerService:(id)service didReceiveCrumb:(id)crumb;
-(void)messengerService:(id)service didFailSubscribePresence:(id)presence;
-(void)messengerService:(id)service didCheckForExistingLogin:(BOOL)existingLogin;
-(void)messengerService:(id)service didFailCheckForExistingLogin:(id)existingLogin;
-(void)messengerService:(id)service didReceiveEndpointState:(int)state numberOfEndpoints:(int)endpoints;
-(void)messengerService:(id)service didReceiveTriggerMobileIdle:(int)idle;
-(void)messengerService:(id)service didReceiveVisibilityState:(int)state type:(int)type echo:(BOOL)echo;
-(void)messengerService:(id)service didReceiveRenameGroup:(id)group newGroupName:(id)name;
-(void)messengerService:(id)service didReceiveBuddyMoves:(id)moves;
-(void)messengerService:(id)service didReceivePendingBuddyResponse:(id)response;
-(void)messengerServiceDidSendKeepAlive:(id)messengerService;
-(void)displayImageService:(id)service downloadedDisplayImageData:(id)data forIdentity:(id)identity error:(id)error;
-(void)displayImageService:(id)service downloadedCustomImageData:(id)data forIdentity:(id)identity error:(id)error;
-(void)displayImageService:(id)service downloadedAvatarImageData:(id)data forIdentity:(id)identity size:(int)size error:(id)error;
-(void)fileTransferService:(id)service updateTransferProgress:(float)progress sessionId:(id)anId;
-(void)fileTransferService:(id)service transferCompleteForSession:(id)session path:(id)path;
-(void)fileTransferService:(id)service transferFailedWithError:(id)error sessionId:(id)anId;
-(void)fileTransferService:(id)service transferTimedOutForSession:(id)session;
-(id)ymIdentityForOCIdentity:(id)ocidentity;
-(id)ocIdentityForYMIdentity:(id)ymidentity;
-(id)ocIdentityForYMIdentity:(id)ymidentity withLabel:(id)label;
-(id)y_smsNumberForTelephoneIdentity:(id)telephoneIdentity;
-(id)ymMessageForOCMessage:(id)ocmessage;
-(id)ocMessageForYMMessage:(id)ymmessage;
-(id)presenceForAvailability:(int)availability message:(id)message;
-(id)savedPresence;
-(int)ocAvailabilityForYMPresence:(id)ympresence;
-(void)setupUserAgent;
-(id)allowedPhotoTransferTypes;
-(id)allowedMovieTransferTypes;
-(id)allowedDocumentTransferTypes;
-(void)resetSelfDisplayImages;
-(void)operationResetSelfDisplayImages:(id)images;
-(void)resetDisplayImageForIdentities:(id)identities;
-(void)operationResetDisplayImageForIdentities:(id)identities;
@end

