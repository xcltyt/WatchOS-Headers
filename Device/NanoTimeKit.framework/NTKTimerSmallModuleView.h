//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationModuleView.h>

#import "NTKTimerComplicationDisplay.h"

@class NSString, NTKColoringImageView, NTKColoringLabel, PUICDynamicTextSizingParams;

@interface NTKTimerSmallModuleView : NTKComplicationModuleView <NTKTimerComplicationDisplay>
{
    PUICDynamicTextSizingParams *_countdownLabelSizingParams;
    NTKColoringImageView *_timerGlyph;
    NTKColoringLabel *_countdownLabel;
    BOOL _isGlyphActive;
}

- (void)setStoppedWithTime:(double)arg1;
- (void)_setLayoutForTime:(double)arg1;
- (void)setAnimatesForegroundColors:(BOOL)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)layoutContentView;
- (void).cxx_destruct;
- (void)setForegroundColor:(id)arg1;
- (void)setTime:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

