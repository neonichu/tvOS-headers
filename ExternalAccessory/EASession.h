//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAAccessory, NSInputStream, NSOutputStream, NSString;

@interface EASession : NSObject
{
    EAAccessory *_accessory;
    unsigned int _sessionID;
    NSString *_protocolString;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    _Bool _openCompleted;
    int _sock;
}

@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly, nonatomic) NSString *protocolString; // @synthesize protocolString=_protocolString;
@property(readonly, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void)setOpenCompleted:(_Bool)arg1;
- (_Bool)isOpenCompleted;
- (void)_endStreams;
- (void)_streamClosed;
- (unsigned int)_sessionID;
- (id)_shortDescription;
- (id)description;
- (void)dealloc;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (id)init;

@end

