/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "FBMAttachment.h"

#import "OutgoingAttachment-Protocol.h"

@class FBMVideoAttachmentExportListenerAnnouncer, NSData, NSMutableArray, NSString, NSURL;

@interface FBMVideoAttachment : FBMAttachment <OutgoingAttachment>
{
    NSURL *_location;
    BOOL _exportToNSDataInProgress;
    NSMutableArray *_fileCreationCompletionBlocks;
    FBMVideoAttachmentExportListenerAnnouncer *_exportAnnouncer;
    BOOL _customTranscoding;
    BOOL _performStandardization;
    int _videoType;
//    id <FBVideoAttachmentProtocol> _mediaAttachment;
    NSString *_offlineVideoId;
    NSData *_attachmentData;
    double _duration;
}

+ (id)mimeType;
@property(retain, nonatomic) NSData *attachmentData; // @synthesize attachmentData=_attachmentData;
@property(copy, nonatomic) NSString *offlineVideoId; // @synthesize offlineVideoId=_offlineVideoId;
@property(nonatomic) double duration; // @synthesize duration=_duration;
//@property(retain, nonatomic) id <FBVideoAttachmentProtocol> mediaAttachment; // @synthesize mediaAttachment=_mediaAttachment;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
//- (void).cxx_destruct;
- (void)cancelPrepareAttachmentData;
- (BOOL)canCancelPrepareAttachmentData;
- (void)removeExportListener:(id)arg1;
- (void)addExportListener:(id)arg1;
- (void)disassociateMediaAttachment;
- (void)prepareAttachmentDataWithCompletedBlock:(id)arg1;
- (void)contentUrlAsynchronouslyWithCompletion:(id)arg1;
@property(readonly, nonatomic) NSURL *localUrl;
- (id)fileSystemUrl;
- (id)attachmentFilename;
- (id)attachmentHandle;
- (void)addAsAttachFile:(id)arg1;
- (void)addAsParamsToDictionary:(id)arg1;
- (void)addAsParamsToRequest:(id)arg1;
- (id)getThumbnailOfSize:(struct CGSize)arg1;
- (id)initWithMediaAttachment:(id)arg1 customTranscoding:(BOOL)arg2 performStandardization:(BOOL)arg3;

@end

