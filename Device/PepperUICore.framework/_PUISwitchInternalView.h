//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_UISwitchInternalViewProtocol.h"

@class NSString, UIColor, UIImage, _PUISwitchThumbView, _PUISwitchWellView;

@interface _PUISwitchInternalView : UIView <_UISwitchInternalViewProtocol>
{
    BOOL _on;
    BOOL _pressed;
    BOOL _sendAction;
    BOOL _useAlternateColor;
    BOOL _isAlwaysAccessible;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    UIColor *_thumbTintColor;
    UIImage *_onImage;
    UIImage *_offImage;
    _PUISwitchWellView *_wellView;
    _PUISwitchThumbView *_thumbView;
}

- (void)_updateWell:(BOOL)arg1;
@property(retain, nonatomic) _PUISwitchWellView *wellView; // @synthesize wellView=_wellView;
- (void)_updateThumb:(BOOL)arg1;
@property(retain, nonatomic) _PUISwitchThumbView *thumbView; // @synthesize thumbView=_thumbView;
- (void)_invalidateThumb;
- (void).cxx_destruct;
@property(nonatomic) BOOL isAlwaysAccessible; // @synthesize isAlwaysAccessible=_isAlwaysAccessible;
- (void)_invalidateWell;
- (void)_accessibilitySettingChanged;
- (void)_invalidateControl;
@property(nonatomic) BOOL sendAction; // @synthesize sendAction=_sendAction;
@property(nonatomic) BOOL useAlternateColor; // @synthesize useAlternateColor=_useAlternateColor;
@property(nonatomic) BOOL on; // @synthesize on=_on;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage=_offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage=_onImage;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
- (void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_prepareForInteraction;
- (void)_setProgress:(float)arg1;
- (void)_setProgress:(float)arg1 animated:(BOOL)arg2 withDuration:(float)arg3 force:(BOOL)arg4 sendAction:(BOOL)arg5;
- (void)_cleanUpAfterAnimating;
- (void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
- (void)_setPressed:(BOOL)arg1;
@property(nonatomic) BOOL pressed; // @synthesize pressed=_pressed;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
