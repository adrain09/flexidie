/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

//#import <XXUnknownSuperclass.h> // Unknown library
//#import "SCFetchableList.h"
//#import "NSCoding.h"

@class NSMutableArray, NSDate, SCArchivedChats, NSMutableDictionary, SCChat, NSArray, NSString;
/*
__attribute__((visibility("hidden")))
@interface SCChats : XXUnknownSuperclass <SCFetchableList, NSCoding> {
	BOOL _clearing;
	BOOL _failedToLoadMoreChats;
	BOOL _loadingMoreChats;
	BOOL _moreChatsToLoad;
	NSString* _activeChatRecipientBeforeBackgrounded;
	NSString* _lastChatIdWhenActiveChatEntered;
	NSArray* _chatsAndUnstartedChats;
	NSMutableDictionary* _chats;
	NSString* _username;
	SCChat* _visibleChatInChatView;
	NSArray* _clearableChatsCache;
	NSString* _iterToken;
	NSDate* _lastCleanClearedMessagesDate;
	SCArchivedChats* _archivedInitialChats;
	SCArchivedChats* _archivedPaginatedChats;
	NSMutableArray* _unstartedChats;
	NSMutableDictionary* _unstartedChatsDictionary;
	unsigned _unstartedChatsMutationVersion;
	double _lastFullUpdateTime;
}*/
@interface SCChats (Snapchat_9_13_0)
@property(assign, nonatomic) unsigned unstartedChatsMutationVersion;
@property(retain, nonatomic) NSMutableDictionary* unstartedChatsDictionary;
@property(retain, nonatomic) NSMutableArray* unstartedChats;
@property(retain, nonatomic) SCArchivedChats* archivedPaginatedChats;
@property(retain, nonatomic) SCArchivedChats* archivedInitialChats;
@property(assign, nonatomic) double lastFullUpdateTime;
@property(retain, nonatomic) NSDate* lastCleanClearedMessagesDate;
@property(copy, nonatomic) NSString* iterToken;
@property(retain, nonatomic) NSArray* clearableChatsCache;
@property(retain, nonatomic) SCChat* visibleChatInChatView;
@property(retain, nonatomic) NSString* username;
@property(assign, nonatomic) BOOL moreChatsToLoad;
@property(assign, nonatomic, getter=isLoadingMoreChats) BOOL loadingMoreChats;
@property(assign, nonatomic) BOOL failedToLoadMoreChats;
@property(assign, nonatomic, getter=isClearing) BOOL clearing;
@property(retain, nonatomic) NSMutableDictionary* chats;
@property(retain, nonatomic) NSArray* chatsAndUnstartedChats;
@property(retain, nonatomic) NSString* lastChatIdWhenActiveChatEntered;
@property(retain, nonatomic) NSString* activeChatRecipientBeforeBackgrounded;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)hasUnviewedChats:(id)chats;
+(BOOL)hasUnviewedCash:(id)cash;
+(BOOL)hasUnviewedSnaps:(id)snaps;
+(id)filterOrphanedChats:(id)chats;
+(int)unreadCountForChats:(id)chats;
+(id)archivedPaginatedChatsPath;
+(id)archivedInitialChatsPath;
+(id)chatsWithUsername:(id)username fromResponse:(id)response;
+(void)uploadChatMediaWithParameters:(id)parameters data:(id)data successBlock:(id)block failureBlock:(id)block4;
+(void)fetchGatewayAuthTokenWithParameters:(id)parameters successBlock:(id)block failureBlock:(id)block3;
+(void)fetchConversationAuthTokenWithParameters:(id)parameters successBlock:(id)block failureBlock:(id)block3;
+(void)sendTypingNotificationWithParameters:(id)parameters successBlock:(id)block failureBlock:(id)block3;
+(void)clearConversationWithParameters:(id)parameters successBlock:(id)block failureBlock:(id)block3;
+(void)clearAllConversationsWithParameters:(id)parameters successBlock:(id)block failureBlock:(id)block3;
+(void)fetchConversationWithParameters:(id)parameters successBlock:(id)block failureBlock:(id)block3;
+(void)fetchAllConversationsWithParameters:(id)parameters successBlock:(id)block failureBlock:(id)block3;
//-(void).cxx_destruct;
-(void)resetChatsAndUnstartedChats;
-(void)changedUnstartedChats;
-(void)resetAllUnstartedChatsWithCompletionBlock:(id)completionBlock;
-(void)resetAllUnstartedChats;
-(void)removeUnstartedChatForRecipient:(id)recipient;
-(void)addUnstartedChatForRecipient:(id)recipient;
-(id)chatRecipientToRemoveFromUnstartedChats:(id)unstartedChats;
-(id)chatRecipientToAddToUnstartedChats:(id)unstartedChats;
-(void)updateUnstartedChatsIfNecessaryWithInfo:(id)info;
-(id)unstartedChatForRecipient:(id)recipient;
-(BOOL)isRecipientInUnstartedChats:(id)unstartedChats;
-(void)clearChatForBlockedFriend:(id)blockedFriend;
-(void)removeAllChats;
-(void)removeChat:(id)chat;
-(void)clearChat:(id)chat;
-(void)clearAll;
-(void)cleanUpClearedMessages;
-(void)releaseLeftoverMessages;
-(void)handleRemoteNotification:(id)notification completion:(id)completion;
-(void)loadMoreChatsFromServer;
-(void)loadMoreChats;
-(id)getIterToken;
-(void)removeOldChats;
-(void)removeSentGroupedDiscoverSharedMessages:(id)messages;
-(void)removeSentGroupSnaps;
-(BOOL)removeInvalidChats;
-(void)removeExpiredMessages;
-(void)retryFailedScreenshotMessages;
-(void)sendSnapState:(id)state;
-(void)removeMedia:(id)media;
-(void)sendMedia:(id)media;
-(void)discoverMessageDidSentWithSuccess:(BOOL)discoverMessage discoverMessage:(id)message;
-(void)insertSendingMedia:(id)media;
-(id)chatForInlineChatContentMessage:(id)inlineChatContentMessage;
-(id)allChats;
-(id)clearableChats;
-(id)orderedChats;
-(id)uniqueChats;
-(id)findOrCreateChatForUsername:(id)username;
-(id)chatForUsername:(id)username;
-(BOOL)firstChatHasLoadedSnap;
-(BOOL)activeChatBeforeBackgroundedHasUnreadMessages;
-(BOOL)hasUnviewedChats;
-(BOOL)hasUnviewedCash;
-(BOOL)hasUnviewedSnaps;
-(int)unreadCount;
-(int)count;
-(void)updateSnap:(id)snap oldSnap:(id)snap2;
-(void)removeSnap:(id)snap;
-(void)addSnap:(id)snap;
-(id)startNewChatWithRecipient:(id)recipient;
-(id)startNewChatWithRecipient:(id)recipient triggeredByNotification:(BOOL)notification;
-(BOOL)fetchUpdatesToUpdateReadsIfNecessaryForChat:(id)chat;
-(void)receivedChatPersistedPushForChatId:(id)chatId sender:(id)sender;
-(BOOL)shouldAcceptMessageFromSender:(id)sender;
-(void)updateWithSCCPJSONResponse:(id)sccpjsonresponse;
-(void)logReceivedMessagesForNewChat:(id)newChat;
-(void)appendChats:(id)chats shouldUpdate:(BOOL)update;
-(void)updateWithChat:(id)chat;
-(void)updateWithChats:(id)chats;
-(void)sccpConnected;
-(void)sccpDisconnected:(id)disconnected;
-(void)pruneChats;
-(void)chatsDidChange;
-(void)blockCurrentThreadUntilInitialChatsLoaded;
-(void)unarchiveAdditionalChats;
-(void)ensureNonNilObjects;
-(id)appendArchivedChatsBlock;
-(id)initWithCoder:(id)coder;
-(void)archiveChatsWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithUsername:(id)username;
-(id)init;
-(int)fetchableCount;
-(void)loadMoreItems;
-(BOOL)failedToLoadMoreItems;
-(BOOL)moreItemsToLoad;
-(BOOL)canLoadMoreItems;
@end

