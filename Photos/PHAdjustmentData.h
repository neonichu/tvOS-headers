//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PHAdjustmentData : NSObject <NSSecureCoding>
{
    NSString *_formatIdentifier;
    NSString *_formatVersion;
    NSData *_data;
    long long _baseVersion;
}

+ (_Bool)supportsSecureCoding;
+ (long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)arg1;
+ (long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromImageRequestVersion:(long long)arg1;
+ (long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (id)opaqueAdjustmentData;
@property(nonatomic) long long baseVersion; // @synthesize baseVersion=_baseVersion;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(copy) NSString *formatVersion; // @synthesize formatVersion=_formatVersion;
@property(copy) NSString *formatIdentifier; // @synthesize formatIdentifier=_formatIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, getter=isOpaque) _Bool opaque;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3;

@end

