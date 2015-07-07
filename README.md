# MTStarEvaluation
五星评价控件，可以用在显示星级，也可以评分操作
self.starView = [[MTStarEvaluation alloc] initWithFrame:CGRectMake(30, 200, 100, 20) numberOfStar:5];
self.starView.delegate = self;
[self.view addSubview:self.starView];
[self.starView setScore:8 withAnimation:YES];
