//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSString;

@interface SAStructuredDictationPlaceResult : AceObject <SAAceSerializable>
{
}

+ (id)structuredDictationPlaceResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)structuredDictationPlaceResult;
@property(copy, nonatomic) NSData *resultData;
@property(copy, nonatomic) NSString *placeResultType;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

