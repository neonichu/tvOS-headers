//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface _MFTableCellAttributesCache : NSObject
{
    NSCache *_attributesCache;
}

+ (id)sharedInstance;
- (id)cachedAttributesForIdentifier:(id)arg1 constructionBlock:(CDUnknownBlockType)arg2;
- (void)_didReceiveFontSizeChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

