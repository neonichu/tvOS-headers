//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SASStartSpeech.h>

@class NSArray;

@interface SASStartSpeechRequest : SASStartSpeech
{
}

+ (id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeechRequest;
@property(nonatomic) _Bool wasLaunchedForRequest;
@property(copy, nonatomic) NSArray *voiceTriggerPhrases;
@property(nonatomic) _Bool textToSpeechIsMuted;
@property(nonatomic) _Bool talkOnly;
@property(nonatomic) _Bool handsFree;
@property(nonatomic) _Bool eyesFree;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

