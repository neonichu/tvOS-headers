//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SAUIDecoratedText, SAUINanoImageResource;

@interface SASTComparisonEntity : AceObject <SAAceSerializable>
{
}

+ (id)comparisonEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)comparisonEntity;
@property(retain, nonatomic) SAUINanoImageResource *imageResource;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property(retain, nonatomic) SAUIDecoratedText *decoratedTitle;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

