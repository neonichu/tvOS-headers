//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

#import <StoreKitUI/SKUIPerspectiveView-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>
#import <StoreKitUI/UIScrollViewAccessibilityDelegate-Protocol.h>

@class NSString, SKUIButtonViewElement, SKUICellScrollView, SKUICheckboxInputViewElement, SKUIHorizontalLockupView, UIButton, UIColor, UIImageView, UIView;

@interface SKUIHorizontalLockupCollectionViewCell : SKUICollectionViewCell <UIScrollViewAccessibilityDelegate, SKUIPerspectiveView, SKUIViewElementView>
{
    UIButton *_actionButton;
    SKUIButtonViewElement *_actionButtonViewElement;
    SKUICellScrollView *_actionsScrollView;
    struct UIEdgeInsets _contentInset;
    SKUICheckboxInputViewElement *_editModeCheckboxElement;
    UIImageView *_editModeControl;
    UIView *_highlightBackgroundView;
    SKUIHorizontalLockupView *_lockupView;
    UIColor *_lockupViewBackgroundColor;
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)_removeEditControlAnimated:(_Bool)arg1;
- (void)_reloadLockupViewBackgroundColor;
- (void)_reloadHighlightBackgroundView;
- (void)_reloadActionsScrollViewWithViewElement:(id)arg1 context:(id)arg2;
- (_Bool)_isActionsScrollViewEnabled;
- (id)_highlightBackgroundColor;
- (id)_editControlImage;
- (id)_attributedStringForActionButton:(id)arg1 context:(id)arg2;
- (void)_addEditControlAnimated:(_Bool)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_actionButtonAction:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isScrollingCellToHideActionButton) _Bool scrollingCellToHideActionButton;
- (_Bool)isDeleteButtonHidden;
- (void)hideDeleteButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

