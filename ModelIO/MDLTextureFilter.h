//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDLTextureFilter : NSObject
{
    unsigned long long sWrapMode;
    unsigned long long tWrapMode;
    unsigned long long rWrapMode;
    unsigned long long minFilter;
    unsigned long long magFilter;
    unsigned long long mipFilter;
}

@property(nonatomic) unsigned long long mipFilter; // @synthesize mipFilter;
@property(nonatomic) unsigned long long magFilter; // @synthesize magFilter;
@property(nonatomic) unsigned long long minFilter; // @synthesize minFilter;
@property(nonatomic) unsigned long long rWrapMode; // @synthesize rWrapMode;
@property(nonatomic) unsigned long long tWrapMode; // @synthesize tWrapMode;
@property(nonatomic) unsigned long long sWrapMode; // @synthesize sWrapMode;
- (id)init;

@end

