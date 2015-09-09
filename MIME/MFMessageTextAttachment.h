//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFMessageFileWrapper, NSMutableDictionary;

@interface MFMessageTextAttachment : NSObject
{
    NSMutableDictionary *_cache;
}

+ (unsigned long long)precedenceLevel;
- (id)persistentUniqueIdentifier;
- (id)fileWrapperForcingDownload:(_Bool)arg1;
- (void)inlineDisplayData:(id *)arg1 mimeType:(id *)arg2;
- (_Bool)isPlaceholder;
- (void)download;
- (_Bool)needsRedownload;
- (_Bool)hasBeenDownloaded;
- (unsigned int)approximateSize;
@property(retain, nonatomic) MFMessageFileWrapper *fileWrapper;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (id)cachedValueForKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithWrapper:(id)arg1;
- (id)init;
- (void)setMimePart:(id)arg1;
- (id)mimePart;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (id)textEncodingGuess;
- (_Bool)shouldDownloadAttachmentOnDisplay;

@end

