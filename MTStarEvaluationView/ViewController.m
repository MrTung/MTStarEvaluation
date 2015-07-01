//
//  ViewController.m
//  MTStarEvaluationView
//
//  Created by  Mr.Tung on 15/7/1.
//  Copyright (c) 2015年  Mr.Tung. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.starView = [[MTStarEvaluation alloc] initWithFrame:CGRectMake(30, 200, 100, 20)
                                                 numberOfStar:5];
    self.starView.delegate = self;
    [self.view addSubview:self.starView];
    [self.starView setScore:8 withAnimation:YES];
}


@end
