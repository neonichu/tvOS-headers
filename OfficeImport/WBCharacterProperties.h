//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBCharacterProperties : NSObject
{
}

+ (struct WrdCharacterProperties *)createTrackedPropertiesIfNeeded:(id)arg1;
+ (void)prepareForWriting:(id)arg1 properties:(id)arg2 wrdProperties:(struct WrdCharacterProperties *)arg3 tracked:(struct WrdCharacterProperties *)arg4;
+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdCharacterProperties *)arg2 document:(id)arg3 properties:(id)arg4;
+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdCharacterProperties *)arg2 tracked:(struct WrdCharacterProperties *)arg3 document:(id)arg4 properties:(id)arg5;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;

@end

