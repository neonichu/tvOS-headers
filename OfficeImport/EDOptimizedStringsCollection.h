//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDOptimizedStringsCollection : EDCollection
{
    NSMutableDictionary *mStringDictionary;
}

- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (unsigned long long)addOrEquivalentObject:(id)arg1;
- (unsigned long long)addObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

