//
//  ViewController.h
//  MTStarEvaluationView
//
//  Created by  Mr.Tung on 15/7/1.
//  Copyright (c) 2015年  Mr.Tung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MTStarEvaluation.h"

@interface ViewController : UIViewController<MTStarEvaluationDelegate>

@property (nonatomic, strong) MTStarEvaluation *starView;

@end

