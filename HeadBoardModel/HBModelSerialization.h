//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface HBModelSerialization : NSObject
{
}

+ (id)_rawRootItemFromPlistRepresentation:(id)arg1;
+ (id)deserializeRootFolderFromURL:(id)arg1 error:(id *)arg2;
+ (_Bool)serializeRootFolder:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)rawFolderFromPlistRepresentation:(id)arg1;
+ (id)rawAppFromPlistRepresentation:(id)arg1;
+ (id)plistRepresentationFromRawRootItem:(id)arg1;
+ (id)plistRepresentationFromRawFolder:(id)arg1;
+ (id)plistRepresentationFromRawApp:(id)arg1;

@end

