//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIFoundation/NSCoding-Protocol.h>
#import <UIFoundation/NSCopying-Protocol.h>

@class NSString;

@interface NSTextList : NSObject <NSCoding, NSCopying>
{
    NSString *_markerFormat;
    unsigned long long _listFlags;
    long long _startIndex;
    void *_listSecondary;
}

+ (id)_standardMarkerAttributesForAttributes:(id)arg1;
+ (void)initialize;
- (id)_markerAtIndex:(unsigned long long)arg1 inText:(id)arg2;
- (id)_markerSuffix;
- (id)_unaffixedMarkerTitle;
- (id)_unaffixedMarkerForItemNumber:(long long)arg1;
- (id)_unaffixedMarkerFormat;
- (id)_markerSpecifier;
- (id)_markerPrefix;
- (id)_markerTitle;
- (_Bool)_isOrdered;
- (id)markerForItemNumber:(long long)arg1;
- (id)_markerForMarkerFormat:(id)arg1 itemNumber:(long long)arg2 isNumbered:(_Bool *)arg3 substitutionStart:(unsigned long long *)arg4 end:(unsigned long long *)arg5 specifierStart:(unsigned long long *)arg6 end:(unsigned long long *)arg7;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property long long startingItemNumber;
- (unsigned long long)options;
@property(readonly) unsigned long long listOptions;
@property(readonly, copy) NSString *markerFormat;
- (void)dealloc;
- (id)initWithMarkerFormat:(id)arg1 options:(unsigned long long)arg2;

@end
