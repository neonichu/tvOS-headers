//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SALocalSearchPeriod-Protocol.h>

@class NSString;

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>
{
}

+ (id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2;
+ (id)rangePeriod;
@property(nonatomic) long long startSecondsSinceMidnight;
@property(nonatomic) long long endSecondsSinceMidnight;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

