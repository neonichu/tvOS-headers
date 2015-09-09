//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Speech/AFDictationDelegate-Protocol.h>
#import <Speech/SFSpeechRecognitionBufferDelegate-Protocol.h>

@class AFDictationConnection, NSError, NSOperationQueue, NSString, SFSpeechRecognitionRequest;
@protocol OS_dispatch_queue;

@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFSpeechRecognitionBufferDelegate>
{
    AFDictationConnection *_dictationConnection;
    NSOperationQueue *_queue;
    NSString *_languageCode;
    SFSpeechRecognitionRequest *_request;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    _Bool _completed;
    _Bool _running;
    _Bool _finishing;
    _Bool _cancelled;
    _Bool _powerAvailable;
    long long _taskHint;
    NSError *_error;
    NSString *_requestIdentifier;
}

+ (id)recognizedUtteranceFromSpeechPhrases:(id)arg1 final:(_Bool)arg2;
+ (id)transcriptions:(id)arg1;
@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic, getter=isPowerAvailable) _Bool powerAvailable; // @synthesize powerAvailable=_powerAvailable;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic, getter=isFinishing) _Bool finishing; // @synthesize finishing=_finishing;
@property(readonly, nonatomic) long long _taskHint; // @synthesize _taskHint;
- (void).cxx_destruct;
- (void)stopSpeech;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
@property(readonly, nonatomic) float averagePower;
@property(readonly, nonatomic) float peakPower;
- (void)cancel;
- (void)finish;
@property(readonly, nonatomic) long long state;
- (void)_start;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

