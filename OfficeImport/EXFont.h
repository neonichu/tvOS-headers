//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFont : NSObject
{
}

+ (id)edFontFromXmlFontElement:(struct _xmlNode *)arg1 inConditionalFormat:(_Bool)arg2 returnDefaultIfEmpty:(_Bool)arg3 state:(id)arg4;
+ (void)initialize;
+ (int)edUnderlineFromXmlUnderlineElement:(struct _xmlNode *)arg1;
+ (int)edScriptFromXmlVertAlignElement:(struct _xmlNode *)arg1;

@end

