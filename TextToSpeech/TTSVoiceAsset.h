//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface TTSVoiceAsset : NSObject <NSSecureCoding>
{
    _Bool _isInstalled;
    _Bool _isBuiltInVoice;
    NSString *_name;
    NSArray *_languages;
    long long _gender;
    long long _footprint;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *masteredVersion; // @synthesize masteredVersion=_masteredVersion;
@property(readonly, nonatomic) NSNumber *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(readonly, nonatomic) _Bool isBuiltInVoice; // @synthesize isBuiltInVoice=_isBuiltInVoice;
@property(readonly, nonatomic) _Bool isInstalled; // @synthesize isInstalled=_isInstalled;
@property(readonly, nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(_Bool)arg5 isBuiltIn:(_Bool)arg6;

@end

