//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSPurchase.h>

#import <StoreServices/NSCoding-Protocol.h>
#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying>
{
    NSArray *_allowedToneStyles;
    NSNumber *_assigneeIdentifier;
    NSString *_assigneeToneStyle;
    _Bool _shouldMakeDefaultRingtone;
    _Bool _shouldMakeDefaultTextTone;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;
@property _Bool shouldMakeDefaultTextTone;
@property _Bool shouldMakeDefaultRingtone;
@property(copy) NSString *assigneeToneStyle;
@property(retain) NSNumber *assigneeIdentifier;
@property(copy) NSArray *allowedToneStyles;
- (void)dealloc;
- (id)initWithItem:(id)arg1 offer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

