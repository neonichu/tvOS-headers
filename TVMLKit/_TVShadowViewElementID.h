//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElementID : NSObject <NSCopying>
{
    void *_pointerValue;
    NSString *_URIValue;
}

@property(copy, nonatomic) NSString *URIValue; // @synthesize URIValue=_URIValue;
@property(nonatomic) void *pointerValue; // @synthesize pointerValue=_pointerValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithViewElement:(id)arg1;

@end

