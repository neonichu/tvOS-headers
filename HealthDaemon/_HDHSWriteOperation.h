//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPeripheral, NSData;

@interface _HDHSWriteOperation : NSObject
{
    _Bool _expectResponse;
    CBPeripheral *_peripheral;
    NSData *_data;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool expectResponse; // @synthesize expectResponse=_expectResponse;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (void).cxx_destruct;

@end

