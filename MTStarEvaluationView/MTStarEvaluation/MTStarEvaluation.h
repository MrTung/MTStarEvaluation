//
//  MTStarEvaluation.h
//  MTStarEvaluationView
//
//  Created by  Mr.Tung on 15/7/1.
//  Copyright (c) 2015年  Mr.Tung. All rights reserved.
//

#define BACKGROUND_STAR @"backgroundStar"
#define FOREGROUND_STAR @"foregroundStar"

#import <UIKit/UIKit.h>
@class MTStarEvaluation;

@protocol MTStarEvaluationDelegate <NSObject>

@optional
-(void)starRatingView:(MTStarEvaluation *)view score:(float)score;
@end

@interface MTStarEvaluation : UIView

@property (nonatomic, readonly) int numberOfStar;

@property (nonatomic, weak) id <MTStarEvaluationDelegate> delegate;

/**
 *  初始化MTStarEvaluation
 *
 *  @param number 星星个数
 */
- (id)initWithFrame:(CGRect)frame numberOfStar:(int)number;

/**
 *  设置评价星级
 *
 *  @param score     分数，必须在 0 － 1 之间
 */
- (void)setScore:(float)score withAnimation:(bool)isAnimate;

/**
 *  设置控件星级
 *  @param score  分数，必须在 0 － 1 之间
 */
- (void)setScore:(float)score withAnimation:(bool)isAnimate completion:(void (^)(BOOL finished))completion;

@end
