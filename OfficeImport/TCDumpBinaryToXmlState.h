//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpBinaryToXmlState : NSObject
{
    NSString *mCurrentFieldName;
    NSMutableDictionary *mFieldNameToValueMap;
}

- (id)valueForField:(id)arg1;
- (id)valueForCurrentField;
- (void)cacheValueforCurrentField:(id)arg1;
- (void)setCurrentField:(id)arg1;
- (void)dealloc;
- (id)init;

@end

