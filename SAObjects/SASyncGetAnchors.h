//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SASyncGetAnchors : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getAnchors;
@property(copy, nonatomic) NSArray *sources;
@property(nonatomic) _Bool includeAllKnownAnchors;
@property(copy, nonatomic) NSDictionary *customVocabSources;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

