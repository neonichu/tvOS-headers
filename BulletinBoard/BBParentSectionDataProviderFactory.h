//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/BBSectionIdentity-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBSectionInfo, NSString;

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding>
{
    BBSectionInfo *_sectionInfo;
    NSString *_universalSectionIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)factoryFromSectionInfo:(id)arg1;
@property(copy, nonatomic) NSString *universalSectionIdentifier; // @synthesize universalSectionIdentifier=_universalSectionIdentifier;
@property(copy, nonatomic) BBSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)dataProviders;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

