//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCXmlPrefixStreamWriterState : NSObject
{
    NSString *_elementPrefix;
    NSString *_attributePrefix;
}

@property(copy, nonatomic) NSString *attributePrefix; // @synthesize attributePrefix=_attributePrefix;
@property(copy, nonatomic) NSString *elementPrefix; // @synthesize elementPrefix=_elementPrefix;
- (void)dealloc;

@end

