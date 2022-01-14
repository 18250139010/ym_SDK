#import <UIKit/UIKit.h>
#import "YM_AETabBarBadge.h"
#import "YM_AETabBarItem.h"
@class YM_AETabBar;
@class AxcAE_TabBarConfigModel;
@protocol AxcAE_TabBarDelegate <NSObject >
- (void)axcAE_TabBar:(YM_AETabBar *)tabbar selectIndex:(NSInteger)index;
@end
@interface YM_AETabBar : UIView
#pragma mark - 主动属性
- (instancetype)initWithTabBarConfig:(NSArray <AxcAE_TabBarConfigModel *> *)tabBarConfig;
@property(nonatomic, strong)NSArray <AxcAE_TabBarConfigModel *>*tabBarConfig;
- (void)viewDidLayoutItems;
@property(nonatomic, strong)UIImageView *backgroundImageView;
@property (nonatomic, strong) YM_AETabBarItem *currentSelectItem;
- (void)setBadge:(NSString *)Badge index:(NSUInteger)index;
@property(nonatomic, assign)BOOL translucent;
@property(nonatomic, strong)UIBlurEffect* effect;
@property(nonatomic, strong)UIVisualEffectView* effectView;
#pragma mark - 存储/获取属性
@property (nonatomic, assign) NSInteger selectIndex;
- (void)setSelectIndex:(NSInteger)selectIndex WithAnimation:(BOOL )animation;
@property (nonatomic, readonly, strong) NSArray <YM_AETabBarItem *> *tabBarItems;
@property (nonatomic, weak) id <AxcAE_TabBarDelegate>delegate;
@end
