//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextRange.h>

#import <UIKit/NSCopying-Protocol.h>

@class UITextPosition, _UITextKitTextPosition;

__attribute__((visibility("hidden")))
@interface _UITextKitTextRange : UITextRange <NSCopying>
{
    _UITextKitTextPosition *_start;
    _UITextKitTextPosition *_end;
}

+ (id)defaultRange;
+ (id)rangeWithRange:(struct _NSRange)arg1 affinity:(long long)arg2;
+ (id)rangeWithRange:(struct _NSRange)arg1;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
@property(retain, nonatomic) UITextPosition *end; // @synthesize end=_end;
@property(retain, nonatomic) UITextPosition *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (struct _NSRange)asRange;
- (_Bool)isEmpty;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long affinity;
- (id)init;

@end

