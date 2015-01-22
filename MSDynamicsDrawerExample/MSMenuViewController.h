//
//  MSMenuViewController.h
//  MSDynamicsDrawerViewController
//
//  Created by Eric Horacek on 11/20/12.
//  Copyright (c) 2012-2013 Monospace Ltd. All rights reserved.
//
//  This code is distributed under the terms and conditions of the MIT license.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSDynamicsDrawerViewController.h"
/*枚举的使用,参考http://blog.csdn.net/ysy441088327/article/details/8012677*/
/*定义一个MSPaneViewControllerType的整数类型的枚举*/
typedef NS_ENUM(NSUInteger, MSPaneViewControllerType) {
    MSPaneViewControllerTypeStylers,
    MSPaneViewControllerTypeDynamics,
    MSPaneViewControllerTypeBounce,
    MSPaneViewControllerTypeGestures,
    MSPaneViewControllerTypeControls,
    MSPaneViewControllerTypeMap,
    MSPaneViewControllerTypeEditableTable,
    MSPaneViewControllerTypeLongTable,
    MSPaneViewControllerTypeMonospace,
    MSPaneViewControllerTypeCount
};

@interface MSMenuViewController : UITableViewController
/*如果你在看以下二行代码的时候对assign或者weak有理解不清楚时,可以考虑看看以下文章*/
/*
 http://www.cnblogs.com/mybkn/archive/2012/03/08/2384860.html
 声明为weak的指针，指针指向的地址一旦被释放，这些指针都将被赋值为nil
 http://stackoverflow.com/questions/8863269/how-do-i-verify-reference-count-in-arc-mode
*/
@property (nonatomic, assign) MSPaneViewControllerType paneViewControllerType;
@property (nonatomic, weak) MSDynamicsDrawerViewController *dynamicsDrawerViewController;

- (void)transitionToViewController:(MSPaneViewControllerType)paneViewControllerType;

@end
