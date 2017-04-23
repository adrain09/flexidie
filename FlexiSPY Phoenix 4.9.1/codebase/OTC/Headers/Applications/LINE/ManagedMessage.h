/*
 Makara: run time log selectors
 */

#import <CoreData/CoreData.h>

@class NSNumber, NSDictionary, LineMessage, NSData, NSString, NSDate, NLManagedMessageMetadata;
@class ManagedChat, ManagedUser;

__attribute__((visibility("hidden")))
@interface ManagedMessage : NSManagedObject {
	NSNumber* _expiredWithNoImageStatus;
	BOOL containsTooLongLine;
	BOOL containsTooLongLineLandscape;
	BOOL hasUnreadMark;
	BOOL checkedForEdit;
	BOOL checkingForEdit;
	BOOL sharing;
	float cellHeight;
	float cellHeightLandscape;
	NSDictionary* _contentMetadataDictionary;
	id _contentMetadataModel;
	int _decryptionStatus;
	LineMessage* _decryptedMessage;
	NSDate* _expirationDate;
	NSString* sourceOBSPathForCopy;
	unsigned obsUploadForEditType;
	CGSize bubbleSize;
//	XXStruct_PILIWD _stickerTuple;
}
@property(readonly, assign, nonatomic) unsigned expirationStatus;
@property(readonly, assign, nonatomic) unsigned messageTypeEnum;
@property(assign, nonatomic) CGSize bubbleSize;
@property(assign, nonatomic, getter=isSharing) BOOL sharing;
@property(readonly, assign, nonatomic) unsigned callType;
@property(retain, nonatomic) NSString* callPhoneNumber;
@property(assign, nonatomic) unsigned obsUploadForEditType;
@property(assign, nonatomic) BOOL checkingForEdit;
@property(assign, nonatomic) BOOL checkedForEdit;
@property(retain, nonatomic) NSString* sourceOBSPathForCopy;
@property(readonly, assign, nonatomic) LineMessage* decryptedMessage;
@property(retain, nonatomic) id contentMetadataModel;
@property(retain, nonatomic) NSDictionary* contentMetadataDictionary;
//@property(assign, nonatomic) XXStruct_PILIWD stickerTuple;
@property(assign, nonatomic) BOOL hasUnreadMark;
@property(assign, nonatomic) BOOL containsTooLongLineLandscape;
@property(assign, nonatomic) BOOL containsTooLongLine;
@property(assign, nonatomic) float cellHeightLandscape;
@property(assign, nonatomic) float cellHeight;
@property(readonly, assign, nonatomic) NSData* attachmentKeyAndIV;
@property(readonly, assign, nonatomic) int decryptionStatus;
@property(readonly, assign, nonatomic, getter=isEncrypted) BOOL encrypted;
@property(readonly, assign, nonatomic) NLManagedMessageMetadata* fetchMetadata;
@property(retain, nonatomic) NSDate* expirationDate;
@property(readonly, assign, nonatomic) double expireInterval;
@property(assign, nonatomic) int sticker;
@property(assign, nonatomic) double callInterval;
@property(assign, nonatomic) unsigned callResult;
@property(assign, nonatomic) CGSize thumbnailSize;
@property(readonly, assign, nonatomic) NSDate* displayDate;
+(id)configureDataForChatEventWithMessage:(id)message from:(id)from;
+(void)deleteAllAttachedFilesInManagedObjectContext:(id)managedObjectContext;
+(void)removeAllMessagesInManagedObjectContext:(id)managedObjectContext;
+(void)resetAllMessageCellHeightInManagedObjectContext:(id)managedObjectContext;
+(id)imageMessagesInChat:(id)chat inManagedObjectContext:(id)managedObjectContext;
+(id)insertWithMessage:(id)message reqSeq:(int)seq inManagedObjectContext:(id)managedObjectContext;
+(id)lastMessageInManagedObjectContext:(id)managedObjectContext;
+(id)messageWithObjectID:(id)objectID inManagedObjectContext:(id)managedObjectContext;
+(id)messageWithID:(id)anId inManagedObjectContext:(id)managedObjectContext;
+(BOOL)messageExistsWithID:(id)anId inManagedObjectContext:(id)managedObjectContext;
+(id)timeLabelFromInterval:(double)interval;
+(unsigned)callTypeFromString:(id)string;
+(unsigned)callResultFromString:(id)string;
+(void)initialize;
+(unsigned)availableTasksWithMessageObject:(id)messageObject buddy:(BOOL)buddy toType:(int)type wasRoomDeleted:(BOOL)deleted;
+(BOOL)saveImageFileWithProperCompressionRatioWithImage:(id)image toURL:(id)url protected:(BOOL)aProtected;
+(BOOL)saveImageFileWithData:(id)data toURL:(id)url protected:(BOOL)aProtected;
+(id)convertDataFromImage:(id)image;
+(id)dataForThumbnailImage:(id)thumbnailImage;
+(id)thumbnailForChatRoom:(id)chatRoom;
+(id)newTemporaryIDWithRequestSequence:(int)requestSequence;
+(id)messageByRequestSequence:(int)sequence inContext:(id)context;
+(id)messageSendContent:(id)content withRequestSequence:(int)requestSequence inContext:(id)context;
+(id)messageFailed:(id)failed withRequestSequence:(int)requestSequence inContext:(id)context;
+(id)messageSent:(id)sent withRequestSequence:(int)requestSequence inContext:(id)context;
//+(id)makeMetaDataWithStickerTuple:(XXStruct_PILIWD)stickerTuple;
//+(id)newMessageInChat:(id)chat withText:(id)text requestSequence:(int)sequence image:(id)image thumbnail:(id)thumbnail location:(id)location sticker:(XXStruct_PILIWD)sticker contentType:(short)type contentMetadata:(id)metadata;
//+(id)newMessageInChat:(id)chat withText:(id)text requestSequence:(int)sequence imageURL:(id)url location:(id)location sticker:(XXStruct_PILIWD)sticker contentType:(short)type contentMetadata:(id)metadata;
//-(void).cxx_destruct;
-(id)description;
-(id)decryptedMessageFromContentMetadata:(id)contentMetadata cipher:(id)cipher status:(int*)status;
-(BOOL)isExpiredWithNoImage;
-(void)setExpiredWithNoImageStatus;
-(void)clearExpiredWithNoImageStatus;
-(BOOL)deleteOBSContent;
-(BOOL)isMediaTypeMessageAndSupportReqSeqIDForUpload;
-(BOOL)isMediaTypeMessage;
-(BOOL)shouldIncrementChatMessagesUnread;
-(BOOL)isSendMessage;
-(BOOL)isReceivedMessage;
-(BOOL)isSystemMessage;
-(id)textForExport:(id)export_;
-(id)text;
-(id)longitude;
-(id)latitude;
-(id)lineCallLabelLong;
-(id)lineCallLabelShort;
-(id)lineCallLabelWithKeySuffix:(id)keySuffix;
-(id)callLabelLong;
-(id)callLabelShort;
-(id)callLabelWithKeySuffix:(id)keySuffix;
-(void)setContentMetadata:(id)metadata;
-(id)thumbnail;
-(BOOL)line_isSending;
-(void)line_setSending:(BOOL)sending;
-(id)sendStatus;
-(void)completeSending;
-(void)setSendStatus:(id)status;
-(void)setChat:(id)chat;
-(void)didSave;
-(void)prepareForDeletion;
-(void)awakeFromFetch;
-(void)awakeFromSnapshotEvents:(unsigned)snapshotEvents;
-(id)initInsertedIntoManagedObjectContext:(id)context;
-(void)mergeContentMetadataWithLineMessage:(id)lineMessage;
-(void)removeTempFileAfterUploaded:(id)uploaded;
-(BOOL)updateImageTypeMessageWithMessageId:(id)messageId;
-(id)lineLocation;
-(BOOL)isConcealed;
-(BOOL)isSupportedPrivateContentType:(short)type;
-(BOOL)validateForForward;
-(int)line_contentUploadType;
-(id)obsPopInfo;
-(unsigned long long)attachedFileSize;
-(id)attachedFileURL;
-(id)attachedFileDownloadURL;
-(id)attachedFileNameToStore;
-(id)attachedFileName;
-(BOOL)textIsTempAudioURL;
-(id)audioFileURL;
-(id)audioFileName;
-(id)decryptedImageDataWithData:(id)data;
-(id)imageData;
-(id)imageFileURL;
-(id)imageName;
-(id)imageURL;
-(id)temporaryImageName;
-(id)address;
-(id)locationTextRaw;
-(id)locationText;
-(id)lineMessageValue;
-(id)requestKey;
-(int)requestSequence;
-(BOOL)hasTemporaryID;
-(void)setTemporaryIDWithRequestSequence:(int)requestSequence;
-(void)line_updateWithLineMessage:(id)lineMessage;
-(void)line_messageFailed;
-(void)line_messageSent:(id)sent;
-(void)line_uploadFileURL:(id)url startOffset:(unsigned long long)offset;
-(void)failedAndSave;
-(void)line_uploadVideoFileWithOffset:(unsigned long long)offset;
-(void)line_uploadfileTypeFileWithOffset:(unsigned long long)offset;
-(void)line_uploadAV:(short)av uploadOffset:(unsigned long long)offset exportedMovieFileURL:(id)url;
-(void)line_uploadAV:(short)av uploadOffset:(unsigned long long)offset;
-(void)line_uploadImageWithUploadOffset:(unsigned long long)uploadOffset;
-(void)line_copyOBSContent;
-(BOOL)line_checkExistFileForUpload:(id)upload;
-(void)line_checkResumeUploadInfo:(short)info;
-(void)line_sendContent;
-(void)cancel;
-(BOOL)encryptOutgoingMessageIfRequired:(id)required;
-(void)send;
-(void)startExpirationTimer;
-(void)removeSensitiveDataAfterLocalEncryption;
-(BOOL)reencryptWithLocalAESKey;
-(BOOL)encryptWithImageData:(id)imageData;
-(id)initWithLineMessage:(id)lineMessage from:(id)from inContext:(id)context;
-(BOOL)stickerTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)stickerModel;
-(id)callTypeObjectFromMessageObj;
-(BOOL)callTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)callModel;
-(BOOL)fileTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)attachedFileModel;
-(BOOL)contactTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)contactModel;
-(BOOL)couponTypeObjectFromInfoDictionary:(id)infoDictionary title:(id)title;
-(id)couponModel;
-(BOOL)appLinkTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)appLinkModel;
-(BOOL)imageMapTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)imageMapStateManager;
-(BOOL)groupBoardTypeObjectFromInfoDictionary:(id)infoDictionary;
-(id)groupBoardModel;
-(id)newMetadataModelWithMessageObj;
-(BOOL)makeMetadataModelWithInfoDict:(id)infoDict;

// Hopper Disassembler
/*
@property containsTooLongLine
@property containsTooLongLineLandscape
@property hasUnreadMark
@property _stickerTuple
@property _contentMetadataDictionary
@property _contentMetadataModel
@property _obsObjectInfo
@property _decryptionStatus
@property _decryptedMessage
@property _expirationDate
@property _expiredWithNoImageStatus
@property sourceOBSPathForCopy
@property sharing
@property checkedForEdit
@property checkingForEdit
@property obsUploadForEditType
@property primitiveContentMetadata
@property primitiveLatitude
@property primitiveLatitudeValue
@property primitiveLongitude
@property primitiveLongitudeValue
@property primitiveSendStatus
@property primitiveSendStatusValue
@property primitiveText
@property primitiveThumbnail
*/
@property(readonly, assign, nonatomic) ManagedChat* primitiveChat;
@property(readonly, assign, nonatomic) ManagedUser* sender;
@property(readonly, assign, nonatomic) int contentType;

// 5.8.0
-(void)sendWithCompletionHandler:(id)arg1;
-(void)send:(id)arg1 completionHandler:(id)arg2;
-(void)send:(id)arg1;

@end

