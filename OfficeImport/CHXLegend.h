//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXLegend : NSObject
{
}

+ (id)chdLegendFromXmlLegendElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)chdLegendPositionFromXmlLegendPositionElement:(struct _xmlNode *)arg1;
+ (id)chdLegendEntryFromXmlLegendEntryElement:(struct _xmlNode *)arg1 defaultFont:(id)arg2 state:(id)arg3;
+ (void)setDefaultLegendBounds:(id)arg1 legendPosition:(int)arg2;

@end

