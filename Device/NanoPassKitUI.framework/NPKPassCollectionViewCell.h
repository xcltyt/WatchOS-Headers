//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "NPKPassViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NPKActivatingUIAssertion, NPKGenericPassView, NPKPassDescription, NPKPassView, NSMutableArray, NSString, UIImageView, UIScrollView, UITapGestureRecognizer;

@interface NPKPassCollectionViewCell : UICollectionViewCell <UIScrollViewDelegate, NPKPassViewDelegate>
{
    BOOL _showFullPass;
    BOOL _useRasterizedPass;
    BOOL _showShadow;
    BOOL _shrinkCardView;
    BOOL _orbEnabled;
    BOOL _isHelperCardCell;
    id <NPKPassCollectionViewCellDelegate> _delegate;
    NPKPassDescription *_passDescription;
    NPKActivatingUIAssertion *_activatingUIAssertion;
    NPKGenericPassView *_genericPassView;
    NPKPassView *_passView;
    float _contentHeight;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIImageView *_rasterizedImageView;
    NSMutableArray *_scrollViewDidEndScrollingAnimationBlocks;
}

+ (Class)_contentViewClass;
- (void)_handleTap:(id)arg1;
- (BOOL)canProvideActionController;
- (id)actionController;
@property(nonatomic) BOOL showShadow; // @synthesize showShadow=_showShadow;
- (void)scrollViewCrownWillScrollToOffset:(struct CGPoint *)arg1;
- (void)scrollToBarcode;
@property(nonatomic) BOOL scrollingAllowed; // @dynamic scrollingAllowed;
@property(readonly) BOOL hasBarcode;
@property(retain, nonatomic) NSMutableArray *scrollViewDidEndScrollingAnimationBlocks; // @synthesize scrollViewDidEndScrollingAnimationBlocks=_scrollViewDidEndScrollingAnimationBlocks;
@property(retain, nonatomic) NPKPassView *passView; // @synthesize passView=_passView;
@property(nonatomic) BOOL shrinkCardView; // @synthesize shrinkCardView=_shrinkCardView;
@property(retain, nonatomic) UIImageView *rasterizedImageView; // @synthesize rasterizedImageView=_rasterizedImageView;
@property(retain, nonatomic) NPKGenericPassView *genericPassView; // @synthesize genericPassView=_genericPassView;
- (void)_createPassView;
- (void)setShowShadow:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_manuallyScrollToOffsetPerformingDelegateCalls:(struct CGPoint)arg1;
- (void)_clearOutAllContentViews;
- (void)_handlePassRasterizationInvalidation:(id)arg1;
- (void)passView:(id)arg1 didUpdateHeight:(float)arg2;
@property(nonatomic) BOOL showFullPass; // @synthesize showFullPass=_showFullPass;
- (void)passView:(id)arg1 hideStatusBar:(BOOL)arg2 animated:(BOOL)arg3;
- (void)passViewNeedsResetState:(id)arg1;
@property(retain, nonatomic) UIScrollView *passScrollView; // @dynamic passScrollView;
@property(nonatomic) BOOL isHelperCardCell; // @synthesize isHelperCardCell=_isHelperCardCell;
- (void)willAnimateToListViewWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NPKPassDescription *passDescription; // @synthesize passDescription=_passDescription;
- (void)didScrollToPass;
- (void)didScrollAwayFromPass;
@property(nonatomic) BOOL useRasterizedPass; // @synthesize useRasterizedPass=_useRasterizedPass;
@property(retain, nonatomic) NPKActivatingUIAssertion *activatingUIAssertion; // @synthesize activatingUIAssertion=_activatingUIAssertion;
@property(nonatomic, getter=isOrbEnabled) BOOL orbEnabled; // @synthesize orbEnabled=_orbEnabled;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)_updateContentView;
@property(readonly) float height;
- (void)prepareForReuse;
- (void)didMoveToSuperview;
@property(nonatomic) __weak id <NPKPassCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) float contentHeight; // @synthesize contentHeight=_contentHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

