//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBParagraphProperties : NSObject
{
}

+ (struct WrdParagraphProperties *)createTrackedPropertiesIfNeeded:(id)arg1;
+ (void)readFrom:(id)arg1 wrdProperties:(struct WrdParagraphProperties *)arg2 tracked:(struct WrdParagraphProperties *)arg3 document:(id)arg4 properties:(id)arg5;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;
+ (void)mapWordProperties:(struct WrdParagraphProperties *)arg1 reader:(id)arg2 toProperties:(id)arg3;

@end

