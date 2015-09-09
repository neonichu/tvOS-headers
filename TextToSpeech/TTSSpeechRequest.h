//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString, NSURL, TTSSpeechChannel;
@protocol TTSSpeechRequestDelegate;

@interface TTSSpeechRequest : NSObject <NSSecureCoding>
{
    id <TTSSpeechRequestDelegate> _delegate;
    TTSSpeechChannel *_speechChannel;
    _Bool _useCustomVoice;
    _Bool _maintainsInput;
    _Bool _audioSessionIDIsValid;
    _Bool _useVoiceBooster;
    _Bool _useMonarchStyleRate;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_languageCode;
    long long _footprint;
    long long _gender;
    NSURL *_outputPath;
    double _rate;
    double _pitch;
    double _volume;
    double _latency;
    double _dispatchTime;
    double _handledTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool useMonarchStyleRate; // @synthesize useMonarchStyleRate=_useMonarchStyleRate;
@property(nonatomic) _Bool useVoiceBooster; // @synthesize useVoiceBooster=_useVoiceBooster;
@property(nonatomic) double handledTime; // @synthesize handledTime=_handledTime;
@property(nonatomic) double dispatchTime; // @synthesize dispatchTime=_dispatchTime;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) _Bool audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;
@property(nonatomic) _Bool maintainsInput; // @synthesize maintainsInput=_maintainsInput;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool useCustomVoice; // @synthesize useCustomVoice=_useCustomVoice;
@property(nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) TTSSpeechChannel *speechChannel; // @synthesize speechChannel=_speechChannel;
- (void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4;
- (void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2 forService:(id)arg3;
- (void)speechRequestDidContinueForService:(id)arg1;
- (void)speechRequestDidPauseForService:(id)arg1;
- (void)speechRequestDidStartForService:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechChannel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)vocalizerGender;
- (long long)vocalizerFootprint;

@end

