//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMapTable.h>

__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable
{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
        void *notAKeyMarker;
    } _keyCallBacks;
    struct {
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _valueCallBacks;
    struct __CFBasicHash *_ht;
}

- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;
- (id)allValues;
- (id)allKeys;
- (id)description;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)arg1;
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;
- (id)copy;
- (_Bool)isEqual:(id)arg1;
- (void)removeAllItems;
- (void)dealloc;
- (id)init;

@end

