//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSSet, _UIKBHandRestRecognizer;

@protocol _UIKBHandRestRecognizerDelegate <NSObject>
- (void)recognizer:(_UIKBHandRestRecognizer *)arg1 didConsumeRestingTouches:(NSSet *)arg2;
- (void)recognizer:(_UIKBHandRestRecognizer *)arg1 didReleaseFailedTouches:(NSSet *)arg2;
@end

