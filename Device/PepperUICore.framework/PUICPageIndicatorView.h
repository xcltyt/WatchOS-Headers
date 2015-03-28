//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImageView;

@interface PUICPageIndicatorView : UIView
{
    int _numberOfPages;
    int _currentPage;
    UIColor *_indicatorColor;
    UIImageView *_currentIndicator;
}

+ (id)_currentIndicatorImageWithColor:(id)arg1;
+ (id)_currentIndicatorImageSmallWithColor:(id)arg1;
+ (id)_indicatorImage;
+ (id)_indicatorImageSmall;
+ (id)_generateIndicatorImageWithSize:(float)arg1 andColor:(id)arg2;
@property(retain, nonatomic) UIImageView *currentIndicator; // @synthesize currentIndicator=_currentIndicator;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
- (float)_dotSpacing;
- (float)_dotSize;
- (void).cxx_destruct;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
