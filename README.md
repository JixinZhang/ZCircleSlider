# ZCircleSlider

圆环型Slider，其作用和UISlider一样。
特点：
    * 拖动滑块时，点击的响应区域限定在圆环上并且限定在滑块的附近；
    * 点击滑块后会有放大的动画；
    * 圆环有三层，可以做三个量的指示。

## 0. Demo

![1.重复拖动](https://github.com/JixinZhang/ZCircleSlider/blob/master/CircleSlider1.gif) ![2.限定360度](https://github.com/JixinZhang/ZCircleSlider/blob/master/CircleSlider2.gif)

## 1. 接入
直接将ZCircleSlider文件夹中的`ZCircleSlider.h 和 ZCircleSlider.m`拖到项目中

## 2. 使用

```
- (ZCircleSlider *)circleSlider {
    if (!_circleSlider) {
        _circleSlider = [[ZCircleSlider alloc] initWithFrame:CGRectMake((kScreenWidth - 300) / 2.0, (kScreenHeight - 300) / 2.0, 300, 300)];
        _circleSlider.minimumTrackTintColor = kUIColorFromRGB(0x1482f0);
        _circleSlider.maximumTrackTintColor = kUIColorFromRGB(0xE62E2E);
        _circleSlider.backgroundTintColor = [UIColor colorWithWhite:0 alpha:0.2];
        _circleSlider.circleBorderWidth = 5.0f;
        _circleSlider.thumbRadius = 8;
        _circleSlider.thumbExpandRadius = 12.5;
        _circleSlider.thumbTintColor = [UIColor redColor];
        _circleSlider.circleRadius = 260 / 2.0 + 2;
        _circleSlider.value = 0;
        _circleSlider.loadProgress = 0;
        [_circleSlider addTarget:self
                          action:@selector(circleSliderTouchDown:)
                forControlEvents:UIControlEventTouchDown];
        [_circleSlider addTarget:self
                          action:@selector(circleSliderValueChanging:)
                forControlEvents:UIControlEventValueChanged];
        [_circleSlider addTarget:self
                          action:@selector(circleSliderValueDidChanged:)
                forControlEvents:UIControlEventTouchUpInside];
    }
    return _circleSlider;
}

```
