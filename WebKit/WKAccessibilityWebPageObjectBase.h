//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKAccessibilityWebPageObjectBase : NSObject
{
    struct WebPage *m_page;
    id m_parent;
}

- (id)accessibilityFocusedUIElement;
- (void)setRemoteParent:(id)arg1;
- (void)setWebPage:(struct WebPage *)arg1;
- (id)accessibilityRootObjectWrapper;

@end

