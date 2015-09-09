//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerFormattedString-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying>
{
    NSMutableArray *_formatArguments;
    NSString *_formatString;
}

@property(retain, nonatomic) NSMutableArray *formatArguments; // @synthesize formatArguments=_formatArguments;
@property(retain, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)formatArgumentAtIndex:(unsigned long long)arg1;
- (unsigned long long)formatArgumentsCount;
- (void)addFormatArgument:(id)arg1;
- (void)clearFormatArguments;
@property(readonly, nonatomic) _Bool hasFormatString;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *formatTokens;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

