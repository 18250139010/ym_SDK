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



#define MD5LastStr       @"1axd@#hhjdxc"  //md5????????????
//#define tbNum               @""    //????????????key


// **** ?????? ***
#define dmjapis @""
#define WWWUrl [NSString stringWithFormat:@"%@",dmjapis]
#define dmjapiNew @""

#define ymshapis @"http://api.ymlife.cn/ymsh-service/api/"
#define ymshUrl [NSString stringWithFormat:@"%@",ymshapis]//????????????



//??????APP??????????????????
#define kURLWithGetAppPageTemplate  [NSString stringWithFormat:@"%@%@",ymshUrl,@"merchantAppCustom/getAppPageTemplate"]
//????????????????????????
#define kURLWithGetNavTemplate   [NSString stringWithFormat:@"%@%@",ymshUrl,@"merchantAppCustom/getNavTemplate"]
//????????????????????????
#define kURLWithGetCenterTemplate  [NSString stringWithFormat:@"%@%@",ymshUrl,@"merchantAppCustom/getPersonalCenterTemplate"]

#define kURLWithGetGoodsByMerchantCategory  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/listGoodsByMerchantCategory"] //??????????????????????????????


#define kURLWithGetOrderList  [NSString stringWithFormat:@"http://api.ymlife.cn/ymsh-order-service/api/%@",@"order/pagingOrderList"] //?????????????????? //??????????????????

//??????????????????
#define kURLWithGetYMGoodsDetails  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/goodsDetail"]
//??????????????????????????????
#define kURLWithGetGuessLikeGoodsList  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getGuessLikeGoodsList"]
//????????????????????????
#define kURLWithGetSimilarRecommendList  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getSimilarRecommendList"]


//??????????????????
#define kURLWithGetSearchGoods  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/searchGoods"]


//????????????
#define kURLWithGetRegisterOrLogin  [NSString stringWithFormat:@"%@%@",ymshUrl,@"user/registerOrLogin"]

//????????????????????????
#define kURLWithGetGoodsPrivilegeLink  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getGoodsPrivilegeLink"]
//?????????????????????????????????
#define kURLWithGetUserAuthorizeStatus  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/checkUserAuthorizeStatus"]

//??????????????????????????????????????????????????????????????????
#define kURLWithGetTljGoodsShareInfo  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getTljGoodsShareInfo"]

//????????????????????????
#define kURLWithGetStorePrivilegeLink  [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getStorePrivilegeLink"]

//????????????????????????
#define kURLWithGetCommissionRepor [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccount/getCommissionReport"]

//????????????
#define kURLWithGetSave [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/save"]


//????????????
#define kURLWithGetIsCollect [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/isCollect"]

//??????????????????
#define kURLWithGetListOfCollect [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/listOfCollect"]

//???????????????????????????
#define kURLWithGetDelete [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/delete"]

//??????
#define kURLWithGetSign [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/sign"]
//?????????
#define kURLWithGetDrawRedPacket [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/drawRedPacket"]
//????????????????????????
#define kURLWithGetPagingIntegralRecord [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/pagingIntegralRecord"]
//????????????????????????
#define kURLWithGetPagingRedPacketRecord [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/pagingRedPacketRecord"]
//??????????????????
#define kURLWithGetIntegralDescription [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/getIntegralDescription"]

//??????????????????????????????
#define kURLWithGetIntegralHomeData [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/getIntegralHomeData"]


//??????????????????????????????
#define kURLWithGetWithdrawList [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrWithdraw/withdrawList"]

//???????????????????????? /ymsh-orderService/api/usrAccountDetail/pagingAccountDetail
#define kURLWithGetPagingAccountDetail [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccountDetail/pagingAccountDetail"]

//???????????????????????? /ymsh-service/api/redPacketWithdraw/pagingWithdrawRecord
#define kURLWithGetWithdrawRecord [NSString stringWithFormat:@"%@%@",ymshUrl,@"redPacketWithdraw/pagingWithdrawRecord"]
//?????????????????????????????? /ymsh-service/api/redPacketWithdraw/applyWithdraw
#define kURLWithGetWithdraw [NSString stringWithFormat:@"%@%@",ymshUrl,@"redPacketWithdraw/applyWithdraw"]
//?????????????????????????????? /ymsh-service/api/integralWithdraw/getWithdrawInfo
#define kURLWithGetWithdrawInfo [NSString stringWithFormat:@"%@%@",ymshUrl,@"integralWithdraw/getWithdrawInfo"]
//???????????????????????????????????? /ymsh-service/api/usrAccount/getUserAccount
#define kURLWithGetUserAccount [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccount/getUserAccount"]
//?????????????????????????????? /ymsh-service/api/usrAccountSet/getAccountInfo
#define kURLWithGetAccountInfo [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccountSet/getAccountInfo"]
//???????????????????????? /ymsh-service/api/usrAccountSet/saveAccountSet
#define kURLWithGetSaveAccountSet [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrAccountSet/saveAccountSet"]

//?????????????????????????????? /ymsh-service/api/usrWithdraw/applyWithdraw
#define kURLWithGetAPPlyWithdraw [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrWithdraw/applyWithdraw"]
//?????????????????????????????? /ymsh-service/api/usrWithdrawSet/getWithdrawSetInfo

#define kURLWithGetWithdrawSetInfo [NSString stringWithFormat:@"%@%@",ymshUrl,@"usrWithdrawSet/getWithdrawSetInfo"]
//??????APP????????????  goods/getAppSet
#define kURLWithGetAppSet [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/getAppSet"]

//??????????????????
#define kURLWithGetIntegralDescription [NSString stringWithFormat:@"%@%@",ymshUrl,@"integral/getIntegralDescription"]


//????????????
#define kURLWithGetPagingUserMessage [NSString stringWithFormat:@"%@%@",ymshUrl,@"userMessage/pagingUserMessage"]

//?????????????????????
#define kURLWithGetSearchGoodsSuggestion [NSString stringWithFormat:@"%@%@",ymshUrl,@"goods/searchGoodsSuggestion"]


//????????????
#define kURLWithGetDeleteFootProint [NSString stringWithFormat:@"%@%@",ymshUrl,@"collect/delete"]







#define KaiFa @"0" //1????????????0?????????


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
