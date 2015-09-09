//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface TKTLVRecord : NSObject
{
    unsigned long long _tag;
    NSData *_value;
    NSData *_data;
}

+ (id)sequenceOfRecordsFromData:(id)arg1;
+ (id)recordFromData:(id)arg1;
+ (id)parseFromDataSource:(id)arg1;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSData *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2 data:(id)arg3;

@end

