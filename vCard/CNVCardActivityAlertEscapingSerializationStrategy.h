//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardActivityAlertAbstractSerializationStrategy-Protocol.h>

@class NSString;

@interface CNVCardActivityAlertEscapingSerializationStrategy : NSObject <CNVCardActivityAlertAbstractSerializationStrategy>
{
}

+ (id)regex;
+ (id)serializeString:(id)arg1;
+ (id)charactersToTriggerStrategy;
+ (_Bool)strategyWouldAlterString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

