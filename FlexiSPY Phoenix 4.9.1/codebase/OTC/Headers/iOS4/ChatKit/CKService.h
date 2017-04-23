/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class CKConversationList, NSString;

@interface CKService : NSObject
{
    NSString *_serviceID;
    CKConversationList *_conversationList;
}

- (id)initWithServiceID:(id)arg1;
@property(readonly, nonatomic) CKConversationList *conversationList;
- (int)createConversationWithRecipients:(id)arg1;
- (int)conversationIDWithRecipients:(id)arg1;
- (int)unreadConversationCount;
- (int)unreadCountForConversation:(id)arg1;
- (id)headerTitleForEntities:(id)arg1;
- (id)headerTitleForComposeRecipients:(id)arg1 mediaObjects:(id)arg2 subject:(id)arg3;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (void)markAllMessagesInConversationAsRead:(id)arg1;
- (BOOL)dbFull;
- (BOOL)canSendMessageWithMediaObjectTypes:(int *)arg1;
- (void)dealloc;
- (id)placeholderMessageForConversation:(id)arg1 withDate:(id)arg2;
- (id)newMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (id)newMessageWithMessage:(id)arg1 forConversation:(id)arg2 isForward:(BOOL)arg3;
- (BOOL)isSMSDeliverableComposition:(id)arg1 forConversationWithRecipientCount:(unsigned int)arg2 recipientsRequired:(BOOL)arg3;
- (id)newDeliverableMessageEncodingInfoWithComposition:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)conversationSummaries:(id *)arg1 groupIDs:(id *)arg2;
- (id)lookupRecipientsForConversation:(id)arg1;
- (void)fixupNames;
- (int)maxRecipientCount;
- (int)unreadCount;
- (id)messagesForConversation:(id)arg1 limit:(int)arg2 moreToLoad:(char *)arg3;
- (BOOL)restrictsMediaObjects;
- (BOOL)supportsMediaAttachments;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (id)copyEntityForAddressString:(id)arg1;
- (id)unknownEntity;
- (id)abPropertyTypes;
- (BOOL)isValidAddress:(id)arg1;
- (int)maxAttachmentCount;
- (void)deleteMessagesForConversationIDs:(id)arg1 removeConversations:(BOOL)arg2;
@property(readonly, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;

@end

