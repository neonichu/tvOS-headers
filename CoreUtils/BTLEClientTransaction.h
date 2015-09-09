//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BTLEClient, NSData, NSString;

__attribute__((visibility("hidden")))
@interface BTLEClientTransaction : NSObject
{
    BTLEClient *_client;
    NSString *_writeCharacteristic;
    NSData *_writeData;
    NSString *_readCharacteristic;
    NSData *_readData;
    CDUnknownBlockType _readHandler;
    CDUnknownBlockType _writeHandler;
    CDUnknownBlockType _replyHandler;
}

@property(copy, nonatomic) CDUnknownBlockType replyHandler; // @synthesize replyHandler=_replyHandler;
@property(copy, nonatomic) CDUnknownBlockType writeHandler; // @synthesize writeHandler=_writeHandler;
@property(copy, nonatomic) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
@property(copy, nonatomic) NSData *readData; // @synthesize readData=_readData;
@property(copy, nonatomic) NSString *readCharacteristic; // @synthesize readCharacteristic=_readCharacteristic;
@property(copy, nonatomic) NSData *writeData; // @synthesize writeData=_writeData;
@property(copy, nonatomic) NSString *writeCharacteristic; // @synthesize writeCharacteristic=_writeCharacteristic;
@property(retain, nonatomic) BTLEClient *client; // @synthesize client=_client;

@end

