/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSString;

@interface SKPTMXAsyncMediaProfile : NSObject
{
    NSString *_profile;
    NSString *_path;
    unsigned int _mediaStatus;
    unsigned int _uploadStatus;
    unsigned int _uploadProgress;
    unsigned int _downloadProgress;
    unsigned int _fileSizeDownloaded;
}

@property(nonatomic) unsigned int fileSizeDownloaded; // @synthesize fileSizeDownloaded=_fileSizeDownloaded;
@property(nonatomic) unsigned int downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) unsigned int uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) unsigned int uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(nonatomic) unsigned int mediaStatus; // @synthesize mediaStatus=_mediaStatus;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile=_profile;
//- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;

@end

