//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CUISAlertPlatterBlurContext, CUISAlertPlatterColorConfiguration, NSArray, NSMutableArray, UIColor;

@interface CUISAlertPlatterView : UIView
{
    UIColor *_color;
    unsigned int _roundedCorners;
    UIView *_blurView;
    UIView *_tintView;
    BOOL _usesBackgroundViewAsSourceView;
    BOOL _canUseImplicitBlurContext;
    BOOL _needsBlurUpdate;
    CUISAlertPlatterBlurContext *_blurContext;
    CUISAlertPlatterColorConfiguration *_colorConfiguration;
    NSMutableArray *_cornerViews;
    UIView *_backgroundView;
    BOOL _isHeaderPlatterView;
}

+ (id)platterViewForHeaderWithColor:(id)arg1;
+ (id)getBlurImageForHeader;
+ (id)imageForRectCorner:(unsigned int)arg1;
+ (id)resizableImageForColor:(id)arg1;
+ (id)defaultHeaderColor;
- (int)blurStyle;
- (void)setSourceView:(id)arg1 trackDynamically:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 roundedCorners:(unsigned int)arg2 color:(id)arg3;
@property(retain, nonatomic) NSArray *cornerViews; // @synthesize cornerViews=_cornerViews;
@property(nonatomic) BOOL isHeaderPlatterView; // @synthesize isHeaderPlatterView=_isHeaderPlatterView;
@property(retain, nonatomic) CUISAlertPlatterColorConfiguration *colorConfiguration; // @synthesize colorConfiguration=_colorConfiguration;
- (void)clearSourceView;
@property(nonatomic) BOOL usesBackgroundViewAsSourceView;
- (BOOL)usesAlertBackgroundViewAsTrackedBackgroundView;
- (id)defaultAlertBackgroundView;
- (void)_invalidateBlurWithContext:(id)arg1;
- (void)setBlurContext:(id)arg1;
- (void)updateBlurWithContext:(id)arg1;
- (id)blurContext;
- (id)alertBackgroundContainer;
- (void)updateBlurIfNeeded;
- (void)createClippingViews;
- (void)setNeedsBlurUpdate;
- (id)initWithFrame:(struct CGRect)arg1 roundedCorners:(unsigned int)arg2 colorConfiguration:(id)arg3 isHeaderPlatterView:(BOOL)arg4;
- (void)invalidateSourceView;
@property(nonatomic) unsigned int roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end
