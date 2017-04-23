/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "BBMSubElement.h"

@class BBMTextMessageContext, BBMFileTransfer, BBMEphemeralMetaData, BBMPicture, NSString;

@interface BBMGenMessage_Ephemeral : NSObject {// BBMSubElement {
	NSString* _textMessageContextId;
	NSString* _fileTransferId;
	NSString* _message;
	NSString* _pictureTransferId;
	NSString* _ephemeralMetaDataId;
	BBMEphemeralMetaData* _resolvedEphemeralMetaDataId;
	BBMFileTransfer* _resolvedFileTransferId;
	BBMPicture* _resolvedPictureTransferId;
	BBMTextMessageContext* _resolvedTextMessageContextId;
}
@property(retain, nonatomic) BBMTextMessageContext* resolvedTextMessageContextId;
@property(retain, nonatomic) BBMPicture* resolvedPictureTransferId;
@property(retain, nonatomic) BBMFileTransfer* resolvedFileTransferId;
@property(retain, nonatomic) BBMEphemeralMetaData* resolvedEphemeralMetaDataId;
@property(retain, nonatomic, getter=getEphemeralMetaDataId) NSString* ephemeralMetaDataId;
@property(retain, nonatomic, getter=getPictureTransferId) NSString* pictureTransferId;
@property(retain, nonatomic, getter=getMessage) NSString* message;
@property(retain, nonatomic, getter=getFileTransferId) NSString* fileTransferId;
@property(retain, nonatomic, getter=getTextMessageContextId) NSString* textMessageContextId;
+(id)keyPathsForValuesAffectingValueForKey:(id)key;
//-(void).cxx_destruct;
-(id)debugDescription;
-(void)setValuesForKeysWithDictionary:(id)dictionary;
-(void)reset;
@end

