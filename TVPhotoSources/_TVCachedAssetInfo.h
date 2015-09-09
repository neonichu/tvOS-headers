//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPhotoSources/NSSecureCoding-Protocol.h>

@class NSString;

@interface _TVCachedAssetInfo : NSObject <NSSecureCoding>
{
    NSString *_assetIdentifier;
    NSString *_assetPath;
}

+ (_Bool)supportsSecureCoding;
+ (id)assetInfoWithIdentifier:(id)arg1;
@property(retain, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
@property(retain, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (void).cxx_destruct;
- (id)_comparisonString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cachedPath:(id)arg2;

@end

