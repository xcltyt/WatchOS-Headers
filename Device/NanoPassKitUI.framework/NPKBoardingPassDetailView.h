//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoPassKitUI/NPKPassDetailView.h>

@class UIImageView, UILabel;

@interface NPKBoardingPassDetailView : NPKPassDetailView
{
    UIImageView *_transitIconImageView;
    UILabel *_tripSummaryLabel;
}

+ (id)_imageForTransitType:(int)arg1;
@property(retain, nonatomic) UILabel *tripSummaryLabel; // @synthesize tripSummaryLabel=_tripSummaryLabel;
@property(retain, nonatomic) UIImageView *transitIconImageView; // @synthesize transitIconImageView=_transitIconImageView;
- (BOOL)labelOnTopForPrimaryFields;
- (id)attributesForPrimaryValues;
- (id)attributesForPrimaryLabels;
- (BOOL)shouldArrangeSecondaryFieldsAfterAuxiliary;
- (void)setupPrimaryFieldViews;
- (Class)primaryFieldViewClass;
- (unsigned int)maxAuxiliaryFields;
- (unsigned int)maxSecondaryFields;
- (unsigned int)maxPrimaryFields;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end

