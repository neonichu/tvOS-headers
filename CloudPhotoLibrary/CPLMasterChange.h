//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLItemChange.h>

@class NSArray, NSData, NSDate, NSString;

@interface CPLMasterChange : CPLItemChange
{
    NSArray *_resources;
    NSDate *_creationDate;
    NSString *_itemType;
    NSDate *_importDate;
    NSString *_filename;
    NSString *_importGroupIdentifier;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    long long _originalOrientation;
    unsigned long long _fullSizeJPEGSource;
}

@property(nonatomic) unsigned long long fullSizeJPEGSource; // @synthesize fullSizeJPEGSource=_fullSizeJPEGSource;
@property(nonatomic) long long originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(retain, nonatomic) NSData *mediaMetaData; // @synthesize mediaMetaData=_mediaMetaData;
@property(copy, nonatomic) NSString *mediaMetaDataType; // @synthesize mediaMetaDataType=_mediaMetaDataType;
@property(copy, nonatomic) NSString *importGroupIdentifier; // @synthesize importGroupIdentifier=_importGroupIdentifier;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
- (void).cxx_destruct;
- (unsigned long long)dataClassType;
- (_Bool)supportsResources;
- (id)name;
- (void)setName:(id)arg1;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)propertiesDescription;
- (long long)dequeueOrder;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) _Bool isImage;
- (id)init;

@end

