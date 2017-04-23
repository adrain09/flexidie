/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "MMObject.h"

//#import "MMAssetBigImageDelegate-Protocol.h"
//#import "NSCopying-Protocol.h"

@class ALAsset, CLLocation, NSMutableArray, NSString;

@interface MMAsset : NSObject //MMObject <MMAssetBigImageDelegate, NSCopying>
{
//    id <MMAssetBigImageDelegate> m_bigImageDelegate;
    BOOL m_isNeedOriginImage;
    BOOL m_hasStartInitAsset;
    ALAsset *m_asset;
    NSString *m_assetUrlForSystem;
    NSMutableArray *m_bigImageResultBlocks;
    NSMutableArray *m_bigImageErrorBlocks;
    NSMutableArray *m_bigImageProcessBlocks;
    NSMutableArray *m_thumbImageResultBlocks;
    NSMutableArray *m_thumbImageErrorBlocks;
    int m_compressType;
    int m_resolutionType;
    CLLocation *m_location;
}

+ (id)getOriginImageDataFromRepresentaion:(id)arg1;
+ (id)decodeXmlString:(id)arg1;
@property(retain, nonatomic) CLLocation *m_location; // @synthesize m_location;
@property(nonatomic) int m_resolutionType; // @synthesize m_resolutionType;
@property(nonatomic) BOOL m_hasStartInitAsset; // @synthesize m_hasStartInitAsset;
@property(readonly, nonatomic) BOOL m_isNeedOriginImage; // @synthesize m_isNeedOriginImage;
@property(readonly, nonatomic) int m_compressType; // @synthesize m_compressType;
@property(retain, nonatomic) NSMutableArray *m_thumbImageErrorBlocks; // @synthesize m_thumbImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray *m_thumbImageResultBlocks; // @synthesize m_thumbImageResultBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageProcessBlocks; // @synthesize m_bigImageProcessBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageErrorBlocks; // @synthesize m_bigImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageResultBlocks; // @synthesize m_bigImageResultBlocks;
@property(retain, nonatomic) NSString *m_assetUrlForSystem; // @synthesize m_assetUrlForSystem;
@property(retain, nonatomic) ALAsset *m_asset; // @synthesize m_asset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)onGetBigImageError;
- (void)onGetBigImage:(id)arg1 data:(id)arg2;
- (void)callErrorBlocks;
- (void)callResultBlocksWith:(id)arg1 imageData:(id)arg2;
- (BOOL)needGetAssetFromLibrary;
- (id)longJpegImageFromAsset:(id)arg1;
- (void)onGetImageErrorFromAsset;
- (void)onGetImageFromAsset:(id)arg1 data:(id)arg2;
- (void)onGetImageAsset:(id)arg1;
- (void)setBigImageDelegate:(id)arg1;
- (id)encodeXmlString;
- (id)getThumbImage;
- (void)getBigImageWithProcessBlock:(id)arg1 ResultBlock:(void)arg2 ErrorBlock:(id)arg3;
- (id)alAssetReferenceUrl;
- (id)assetUrl;
- (double)longitude;
- (double)latitude;
- (BOOL)hasLocation;
- (id)initWithAsset:(id)arg1 IsNeedOrigin:(BOOL)arg2 CompressType:(int)arg3;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(BOOL)arg2 CompressType:(int)arg3;
- (id)init;
- (void)dealloc;

@end

