//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSString;

@protocol BSLogging <NSObject>
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)logWithFormat:(NSString *)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)logWithFormat:(NSString *)arg1;
@end

