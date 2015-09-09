//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSURL;

@interface CKPackageItem : NSObject
{
    int _sectionIndex;
    long long _packageIndex;
    NSURL *_fileURL;
    unsigned long long _itemID;
    NSData *_signature;
    long long _size;
    long long _offset;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSData *_wrappedAssetKey;
}

@property(retain, nonatomic) NSData *wrappedAssetKey; // @synthesize wrappedAssetKey=_wrappedAssetKey;
@property(retain, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) long long packageIndex; // @synthesize packageIndex=_packageIndex;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (id)initWithFileURL:(id)arg1;

@end

