//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPUFoundation/NSCopying-Protocol.h>

@class NSString;

@interface MPUTextDrawingCacheKey : NSObject <NSCopying>
{
    NSString *_text;
    struct CGSize _allowedSize;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct CGSize allowedSize; // @synthesize allowedSize=_allowedSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

