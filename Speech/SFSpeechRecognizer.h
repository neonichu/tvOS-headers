//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Speech/AFDictationDelegate-Protocol.h>

@class AFDictationConnection, NSLocale, NSOperationQueue, NSString;
@protocol SFSpeechRecognizerDelegate;

@interface SFSpeechRecognizer : NSObject <AFDictationDelegate>
{
    AFDictationConnection *_dictationConnection;
    NSString *_languageCode;
    NSLocale *_locale;
    id <SFSpeechRecognizerDelegate> _delegate;
    long long _defaultTaskHint;
    NSOperationQueue *_queue;
}

+ (id)supportedLocales;
+ (void)initialize;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) long long defaultTaskHint; // @synthesize defaultTaskHint=_defaultTaskHint;
@property(nonatomic) __weak id <SFSpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (void)_sendEngagementFeedback:(long long)arg1 requestIdentifier:(id)arg2;
- (id)recognitionTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (id)recognitionTaskWithRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)recognitionTaskWithResultHandler:(CDUnknownBlockType)arg1;
- (void)prepareWithRequest:(id)arg1;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
