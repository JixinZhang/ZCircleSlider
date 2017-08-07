//
//  ZCircleSlider.h
//  LoadingView
//
//  Created by ZhangBob on 24/05/2017.
//  Copyright © 2017 JixinZhang. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * 圆环形滑块，和UISlider类似，既可以显示进度又可以改变进度
 */
@interface ZCircleSlider : UIControl

@property (nullable, nonatomic, strong) UIColor *backgroundTintColor;   //圆环的背景色
@property (nullable, nonatomic, strong) UIColor *minimumTrackTintColor; //圆环滑过的颜色
@property (nullable, nonatomic, strong) UIColor *maximumTrackTintColor; //圆环加载进度的颜色，加载完成后就相当于圆环未滑过的颜色
@property (nullable, nonatomic, strong) UIColor *thumbTintColor;        //滑块的颜色

@property (nonatomic, assign) CGFloat circleBorderWidth;    //圆的宽度
@property (nonatomic, assign) CGFloat circleRadius;         //圆形进度条的半径，一般比view的宽高中最小者还要小24
@property (nonatomic, assign) CGFloat thumbRadius;          //滑块正常的半径
@property (nonatomic, assign) CGFloat thumbExpandRadius;    //滑块放大的半径
@property (nonatomic, assign) CGFloat thumbStartPosition;   //滑块初始位置。From 0.0 to 1.0；0->圆心正上方，0.25->圆心正右侧，0.50->圆心正下方，0.75->圆心正左侧，1->圆心正上方

@property (nonatomic, assign, readonly) BOOL interaction;   //点击在限定的区域为YES，否则为NO.
@property (nonatomic, assign) BOOL canRepeat;               //是否可以重复拖动。默认为NO，即只能转到360；否则任意角度。

@property (nonatomic, assign) float value;                  //slider当前的value
@property (nonatomic, assign) float loadProgress;           //slider加载的进度

@end
