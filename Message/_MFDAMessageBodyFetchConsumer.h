//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/DAMailAccountStreamConsumerFactory-Protocol.h>
#import <Message/MFRequestQueueResponseConsumer-Protocol.h>

@class MFError, NSData, NSString;
@protocol MFDAStreamingContentConsumer;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory>
{
    id <MFDAStreamingContentConsumer> _streamConsumer;
    _Bool _succeeded;
    MFError *_error;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <MFDAStreamingContentConsumer> streamConsumer; // @synthesize streamConsumer=_streamConsumer;
- (void)dealloc;
- (id)streamingContentConsumer;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (_Bool)wantsData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

