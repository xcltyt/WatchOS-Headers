//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "PUICWheelHandlerDelegate.h"
#import "PUICZoomModelDelegate.h"

@class NSString, PUICWheelHandler, PUICZoomModel, UIColor, UIViewController, UIWindow;

@interface PUICApplication : UIApplication <PUICWheelHandlerDelegate, PUICZoomModelDelegate>
{
    _Bool _networkActivityIndicatorVisible;
    double _zoomLevel;
    double _maxZoomLevel;
    UIWindow *_iconWindow;
    long long _orientation;
    PUICWheelHandler *_wheelHandler;
    PUICZoomModel *_zoomModel;
}

+ (_Bool)supportsOrb;
+ (id)_defaultContentSizeCategory;
+ (Class)_statusBarClass;
+ (id)sharedPUICApplication;
+ (id)_puicUserDefaults;
@property(retain, nonatomic) PUICZoomModel *zoomModel; // @synthesize zoomModel=_zoomModel;
@property(retain, nonatomic) PUICWheelHandler *wheelHandler; // @synthesize wheelHandler=_wheelHandler;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) UIWindow *iconWindow; // @synthesize iconWindow=_iconWindow;
@property(nonatomic) double maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
- (void).cxx_destruct;
- (void)_applicationHandleSiriTask:(id)arg1;
- (_Bool)isNetworkActivityIndicatorVisible;
- (void)setNetworkActivityIndicatorVisible:(_Bool)arg1;
- (id)_puicStatusBar;
- (id)_snapshotContextWithName:(id)arg1 screen:(id)arg2;
@property(readonly, nonatomic) UIColor *primaryApplicationColor;
- (void)dealloc;
- (_Bool)_shouldDelayTouchesForControlCenter;
- (void)statusBarReleaseDisableAppContextAnimationsAssertion;
- (void)statusBarTakeDisableAppContextAnimationsAssertion;
- (id)statusBarCurrentApplicationContextDataSource;
- (void)setStatusBarAppContextDataSource:(id)arg1 animated:(_Bool)arg2;
- (id)statusBarKeyController:(_Bool)arg1;
@property(nonatomic) __weak UIViewController *statusBarKeyController;
- (void)setStatusBarKeyController:(id)arg1 animated:(_Bool)arg2;
- (id)_takeStatusBarGlobalContextAssertion;
- (id)_takeStatusBarAppContextAssertion;
- (void)_setStatusBarTimeHidden:(_Bool)arg1 duration:(double)arg2 animation:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setStatusBarTimeHidden:(_Bool)arg1 animation:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setStatusBarTimeHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)wheelChange:(long long)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)zoomModel:(id)arg1 animatedLevelChanged:(double)arg2 from:(double)arg3;
- (void)_updateCurrentStatusBarViewControllerAppearance;
- (struct CGAffineTransform)_rotationTransformForOrientation:(long long)arg1;
- (void)_orientationChanged:(id)arg1;
- (void)_keyWindowChange:(id)arg1;
- (void)_overrideMainScreenDefaultTraitCollection;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (id)init;
- (void)setupZoomModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
