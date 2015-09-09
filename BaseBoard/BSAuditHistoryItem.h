//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>

@class NSDate, NSString;

@interface BSAuditHistoryItem : NSObject <BSXPCCoding>
{
    NSDate *_date;
    NSString *_description;
}

+ (id)itemWithWithFormat:(id)arg1;
+ (id)itemWithString:(id)arg1;
@property(copy, nonatomic) NSString *value; // @synthesize value=_description;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_timeFormatter;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)itemWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

