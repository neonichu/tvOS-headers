//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/JSExport-Protocol.h>

@class NSArray, NSString;

@protocol SGIntervalTreeProtocol <JSExport>
- (NSArray *)query:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (void)remove:(NSString *)arg1;
- (void)store:(unsigned long long)arg1 end:(unsigned long long)arg2 key:(NSString *)arg3;
- (id)init;

@optional
- (NSArray *)query:(unsigned long long)arg1 end:(unsigned long long)arg2 __JS_EXPORT_AS__query:(id)arg3;
- (void)store:(unsigned long long)arg1 end:(unsigned long long)arg2 key:(NSString *)arg3 __JS_EXPORT_AS__store:(id)arg4;
@end

