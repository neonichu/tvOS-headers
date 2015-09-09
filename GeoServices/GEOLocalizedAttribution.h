//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOLocalizedAttribution : PBCodable <NSCopying>
{
    NSString *_displayName;
    NSString *_language;
    NSMutableArray *_logoURLs;
    NSMutableArray *_snippetLogoURLs;
}

@property(retain, nonatomic) NSMutableArray *snippetLogoURLs; // @synthesize snippetLogoURLs=_snippetLogoURLs;
@property(retain, nonatomic) NSMutableArray *logoURLs; // @synthesize logoURLs=_logoURLs;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)snippetLogoURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetLogoURLsCount;
- (void)addSnippetLogoURLs:(id)arg1;
- (void)clearSnippetLogoURLs;
- (id)logoURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)logoURLsCount;
- (void)addLogoURLs:(id)arg1;
- (void)clearLogoURLs;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasLanguage;
- (void)dealloc;
- (id)bestURLForLogos:(id)arg1 scale:(double)arg2;

@end

