//
//  XYZModelController.h
//  Niss-x
//
//  Created by Jacky on 13-7-26.
//  Copyright (c) 2013年 NiSS. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XYZDataViewController;

@interface XYZModelController : NSObject <UIPageViewControllerDataSource>

- (XYZDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(XYZDataViewController *)viewController;

@end
