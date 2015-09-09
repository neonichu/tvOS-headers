//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSArray, NSSet, NSString;

@interface IBICIssue : NSObject <IBBinaryArchiving>
{
    NSString *_message;
    NSString *_catalogPath;
    NSSet *_catalogItemIdentifiers;
    long long _severity;
    long long _classification;
}

+ (id)conflictIssueForItem:(id)arg1 onName:(id)arg2;
+ (id)descriptionForSeverity:(long long)arg1;
+ (id)descriptionForClassification:(long long)arg1;
+ (id)noticeWithCatalogItem:(id)arg1 classification:(long long)arg2 message:(id)arg3;
+ (id)errorWithCatalogItem:(id)arg1 classification:(long long)arg2 message:(id)arg3;
+ (id)warningWithCatalogItem:(id)arg1 classification:(long long)arg2 message:(id)arg3;
+ (id)relativeIdentifierPathsForItems:(id)arg1;
@property(readonly) long long classification; // @synthesize classification=_classification;
@property(readonly) long long severity; // @synthesize severity=_severity;
@property(readonly) NSSet *catalogItemIdentifiers; // @synthesize catalogItemIdentifiers=_catalogItemIdentifiers;
@property(readonly) NSString *catalogPath; // @synthesize catalogPath=_catalogPath;
@property(readonly) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly) NSString *classificationDescription;
@property(readonly) NSString *severityDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSArray *orderedCatalogItemIdentifiers;
- (id)copyWithReplacedCatalogItems:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithAffectedCatalogItem:(id)arg1 classification:(long long)arg2 severity:(long long)arg3 message:(id)arg4;
- (id)initWithAffectedCatalogItems:(id)arg1 classification:(long long)arg2 severity:(long long)arg3 message:(id)arg4;
- (id)initWithAffectedCatalogItemIdentifiers:(id)arg1 catalogPath:(id)arg2 classification:(long long)arg3 severity:(long long)arg4 message:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

