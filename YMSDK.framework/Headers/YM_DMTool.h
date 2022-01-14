#import <Foundation/Foundation.h>
@interface YM_DMTool : NSObject
#define isexamine96All  [NSString stringWithFormat:@"%@", [[NSUserDefaults standardUserDefaults] objectForKey:@"isexamine96"] ? [[NSUserDefaults standardUserDefaults] objectForKey:@"isexamine96"]:@"0" ]
#define KCNSSTRING_ISEMPTY(str) (str == nil || [str isEqual:[NSNull null]] || [str isEqualToString:@"(null)"] || str.length <= 0)
#define kScreenWidth [UIScreen mainScreen].bounds.size.width
#define kScreenHeight [UIScreen mainScreen].bounds.size.height
#define kWindow [UIApplication sharedApplication].keyWindow
#define kUserDefaults [NSUserDefaults standardUserDefaults]
#define NavigateHeight (KScreenHeight == 812.0 ? 88 : 64)
#define kHomeGoTopNotification          [NSString stringWithFormat:@"HomeGoTop"]
#define kHomeLeaveTopNotification       [NSString stringWithFormat:@"HomeLeaveTop"]
#define kWoDeShowGoTopNotification      [NSString stringWithFormat:@"WoDeShowGoTop"]
#define kWoDeShowLeaveTopNotification   [NSString stringWithFormat:@"WoDeShowLeaveTop"]
extern NSString *const kCDKAPIScheme;
#define kStatusBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height)
#define iPhoneX (kStatusBarHeight > 20.0f)
#define iPhoneXX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO) || ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) : NO) || ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhoneXAddHeight (iPhoneX ? 44 :0)
#define iPhoneXAddHeight2 (iPhoneXX ? 44 :20)
#define STATUS_BAR_BIGGER_THAN_20 [UIApplication sharedApplication].statusBarFrame.size.height > iPhoneXAddHeight2
#define iPhoneXR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define BiLi kScreenWidth/375.0
#define iOS9Later ([UIDevice currentDevice].systemVersion.floatValue >= 9.0f)
#define ColorMaker(r, g, b, a) [UIColor colorWithRed:((r) / 255.0) green:((g) / 255.0) blue:((b) / 255.0) alpha:((a) / 255.0)]
#define kUIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define allBackgroundColor  ColorMaker(245, 245, 245, 255)
#define halvingLineColor kUIColorFromRGB(0xfafafa)
#define DMColor kUIColorFromRGB(0xFF2741)
#define placeholderColor kUIColorFromRGB(0xF5F7F9)
#define textBlockColor kUIColorFromRGB(0x191919)
#define textGrayColor  kUIColorFromRGB(0xaaaaaa)
#define textPrimaryColor ColorMaker(0, 0, 0, 221) 
#define textMinorColor kUIColorFromRGB(0x666666) 
#define textMinorColor99 kUIColorFromRGB(0x999999) 
#define textMinorColor33 kUIColorFromRGB(0x333333) 
#ifdef DEBUG
#define DMLog(format, ...) printf(" method: %s \n%s\n",   __PRETTY_FUNCTION__, [[NSString stringWithFormat:(format), ##__VA_ARGS__] UTF8String] );
#else
#define DMLog(format, ...);
#endif
#define VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define APP_DOCUMENT                [NSSearchPathForDirectoriesInDomains (NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define DocumentPath(path)          [APP_DOCUMENT stringByAppendingPathComponent:path]



#define MD5LastStr       @"1axd@#hhjdxc"  //md5加密拼接
//#define tbNum               @""    //百川淘宝key


// **** 头部 ***
#define dmjapis @""
#define WWWUrl [NSString stringWithFormat:@"%@",dmjapis]
#define dmjapiNew @""

#define ymshapis @"http://api.ymlife.cn/ymsh-service/api/"
#define ymshUrl [NSString stringWithFormat:@"%@",ymshapis]//正式环境



//获取APP商城页面模块
#define kURLWithGetAppPageTemplate  [NSString stringWithFormat:@"%@%@",ymshUrl,@"merchantAppCustom/getAppPageTemplate"]
//获取商城导航模板
#define kURLWithGetNavTemplate   [NSString stringWithFormat:@"%@%@",ymshUrl,@"merchantAppCustom/getNavTemplate"]
//获取个人中心模块
#define kURLWithGetCenterTemplate  [NSString stringWithFormat:@"%@%@",ymshUrl,@"merchantAppCustom/getPersonalCenterTemplate"]

#define kURLWithGetGoodsByMerchantCategory  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/listGoodsByMerchantCategory"] //获取商户分类下的商品


#define kURLWithGetOrderList  [NSString stringWithFormat:@"http://api.ymlife.cn/ymsh-order-service/api/%@",@"order/pagingOrderList"] //获取订单列表 //获取订单列表

//商品详情接口
#define kURLWithGetYMGoodsDetails  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/goodsDetail"]
//查询猜你喜欢商品列表
#define kURLWithGetGuessLikeGoodsList  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getGuessLikeGoodsList"]
//相似推荐商品列表
#define kURLWithGetSimilarRecommendList  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getSimilarRecommendList"]


//商品搜索列表
#define kURLWithGetSearchGoods  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/searchGoods"]


//联合登录
#define kURLWithGetRegisterOrLogin  [NSString stringWithFormat:@"%@%@",ymshUrl,@"user/registerOrLogin"]

//获取商品转链信息
#define kURLWithGetGoodsPrivilegeLink  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getGoodsPrivilegeLink"]
//获取淘礼金商品转链信息
#define kURLWithGetUserAuthorizeStatus  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/checkUserAuthorizeStatus"]

//获取淘礼金商品分享信息（淘礼金商品分享调用）
#define kURLWithGetTljGoodsShareInfo  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getTljGoodsShareInfo"]

//获取店铺转链信息
#define kURLWithGetStorePrivilegeLink  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getStorePrivilegeLink"]

//收益报表中心接口
#define kURLWithGetCommissionRepor [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccount/getCommissionReport"]

//添加收藏
#define kURLWithGetSave [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/save"]


//是否收藏
#define kURLWithGetIsCollect [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/isCollect"]

//收藏足迹列表
#define kURLWithGetListOfCollect [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/listOfCollect"]

//批量移除收藏、足迹
#define kURLWithGetDelete [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/delete"]

//签到
#define kURLWithGetSign [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/sign"]
//抽红包
#define kURLWithGetDrawRedPacket [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/drawRedPacket"]
//用户积分流水列表
#define kURLWithGetPagingIntegralRecord [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/pagingIntegralRecord"]
//红包余额流水列表
#define kURLWithGetPagingRedPacketRecord [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/pagingRedPacketRecord"]
//获取积分说明
#define kURLWithGetIntegralDescription [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/getIntegralDescription"]

//获取积分商城页面数据
#define kURLWithGetIntegralHomeData [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/getIntegralHomeData"]


//用户余额提现记录列表
#define kURLWithGetWithdrawList [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrWithdraw/withdrawList"]

//用户余额明细记录 /ymsh-orderService/api/usrAccountDetail/pagingAccountDetail
#define kURLWithGetPagingAccountDetail [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccountDetail/pagingAccountDetail"]

//积分红包提现记录 /ymsh-service/api/redPacketWithdraw/pagingWithdrawRecord
#define kURLWithGetWithdrawRecord [NSString stringWithFormat:@"%@%@",ymshUrl,@"redPacketWithdraw/pagingWithdrawRecord"]
//积分红包申请提现接口 /ymsh-service/api/redPacketWithdraw/applyWithdraw
#define kURLWithGetWithdraw [NSString stringWithFormat:@"%@%@",ymshUrl,@"redPacketWithdraw/applyWithdraw"]
//积分商城提现中心接口 /ymsh-service/api/integralWithdraw/getWithdrawInfo
#define kURLWithGetWithdrawInfo [NSString stringWithFormat:@"%@%@",ymshUrl,@"integralWithdraw/getWithdrawInfo"]
//个人中心获取用户账户信息 /ymsh-service/api/usrAccount/getUserAccount
#define kURLWithGetUserAccount [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccount/getUserAccount"]
//获取用户提现账户信息 /ymsh-service/api/usrAccountSet/getAccountInfo
#define kURLWithGetAccountInfo [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccountSet/getAccountInfo"]
//保存提现账户信息 /ymsh-service/api/usrAccountSet/saveAccountSet
#define kURLWithGetSaveAccountSet [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccountSet/saveAccountSet"]

//用户余额申请提现接口 /ymsh-service/api/usrWithdraw/applyWithdraw
#define kURLWithGetAPPlyWithdraw [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrWithdraw/applyWithdraw"]
//获取提现设置信息接口 /ymsh-service/api/usrWithdrawSet/getWithdrawSetInfo

#define kURLWithGetWithdrawSetInfo [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrWithdrawSet/getWithdrawSetInfo"]
//获取APP设置信息  goods/getAppSet
#define kURLWithGetAppSet [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getAppSet"]

//积分规则说明
#define kURLWithGetIntegralDescription [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/getIntegralDescription"]


//消息提示
#define kURLWithGetPagingUserMessage [NSString stringWithFormat:@"%@%@",ymshUrl,@"userMessage/pagingUserMessage"]

//有美搜索词联想
#define kURLWithGetSearchGoodsSuggestion [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/searchGoodsSuggestion"]


//删除足迹
#define kURLWithGetDeleteFootProint [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/delete"]







#define KaiFa @"0" //1测试版，0发布版


#define kURLWithGetHighComm [NSString stringWithFormat:@"%@%@",WWWUrl,@"gethighcomm"]
#define kURLWithGetAdvertisement [NSString stringWithFormat:@"%@%@",WWWUrl,@"getadvertisement"]
#define kURLWithGetSmsCode [NSString stringWithFormat:@"%@%@",WWWUrl,@"getsmscode"]
#define kURLWithAppShare [NSString stringWithFormat:@"%@%@",WWWUrl,@"appshare"]
#define kURLWithGetRatio [NSString stringWithFormat:@"%@%@",WWWUrl,@"getratio"]
+(NSString *)getArrayFilePath;
+(NSString *)getNoWriteIDArrayFilePath;
+ (NSDictionary*)dictionaryWithJsonString:(NSString*)jsonString;
+ (BOOL)checkUrl:(NSString *)url;
+ (void)networkRequestHaveVibration;

#define kURLWithGetWechetAbout [NSString stringWithFormat:@"%@%@",WWWUrl,@"getWechetAbout"]
#define kURLWithActivitychain [NSString stringWithFormat:@"%@%@",WWWUrl,@"activitychain"]
#define WWWNewUrl [NSString stringWithFormat:@"%@",dmjapiNew]
#define kURLWithGetLoginToken   [NSString stringWithFormat:@"%@%@",WWWNewUrl,@"cps/user/dmjLogin"]
#define kURLWithGenAdvUrl [NSString stringWithFormat:@"%@%@",WWWNewUrl,@"cps/business/xxx/genAdvUrl"]
#define kURLWithGetHomeImgClick  [NSString stringWithFormat:@"%@%@",WWWUrl,@"homeImgClick"]
#define kURLWithGetOtherCat   [NSString stringWithFormat:@"%@%@",WWWNewUrl,@"cps/business/xxx/cat"]
#define kURLWithGetOthergenByGoodsId   [NSString stringWithFormat:@"%@%@",WWWNewUrl,@"cps/business/xxx/genByGoodsId"]
#define SDDownloaderHeaderValue @"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/bmp,image/x-bmp,*/*;q=0.8"
+(NSString *)reviseString:(NSString *)string;
@end
