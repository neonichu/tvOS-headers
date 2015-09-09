//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/UIScrollViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKOverflowScrollViewDelegate : NSObject <UIScrollViewDelegate>
{
    struct ScrollingTreeOverflowScrollingNodeIOS *_scrollingTreeNode;
    _Bool _inUserInteraction;
}

@property(nonatomic, getter=_isInUserInteraction) _Bool inUserInteraction; // @synthesize inUserInteraction=_inUserInteraction;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithScrollingTreeNode:(struct ScrollingTreeOverflowScrollingNodeIOS *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

