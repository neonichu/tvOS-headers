//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKActivityViewController, NSString;

@protocol MKActivityViewControllerDelegate <NSObject>
- (void)mapkitActivityViewController:(MKActivityViewController *)arg1 postCompletedActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;
- (void)mapkitActivityViewController:(MKActivityViewController *)arg1 preCompletedActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;
@end

