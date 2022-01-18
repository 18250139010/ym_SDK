# 有美生活iOS开发文档

1，版本 V1.0.0
2，接入准备 开发环境xcode 12   iOS 9.0
3，账号 
前往http://merchant.ymlife.cn/mall-manage/platform?appId=1创建应用，获取相对应的APP_KEY
4，接入
目前只支持手动接入，暂不支持cocoapods
*将 YMSDK.framework  YMSDK.bundle文件拖入工程
*工程中第三方依赖采用cocoapods添加
pod 'Masonry'
  pod 'MJRefresh'
  pod 'AFNetworking'
  pod 'MJExtension'
  pod 'SDWebImage'
  pod 'WechatOpenSDK'
  pod 'AlibcTradeSDK','4.0.1.15'
  pod 'AliAuthSDK','1.1.0.42-BC3'
  pod 'mtopSDK','3.0.0.3-BC'
  pod 'securityGuard','5.4.191'
  pod 'AliLinkPartnerSDK','4.0.0.24'
  pod 'BCUserTrack','5.2.0.18-appkeys'
  pod 'UTDID','1.5.0.91'
  pod 'WindVane','8.5.0.46-bc11'
*白名单设置
<key>LSApplicationQueriesSchemes</key>
<array>
<string>tbopen</string>
<string>taobao</string>
<string>tmall</string>
<string>wechat</string>
<string>weixin</string>
<string>weixinULAPI</string>
<string>mqqapi</string>
<string>mqq</string>
<string>mqqOpensdkSSoLogin</string>
<string>mqqconnect</string>
<string>mqqopensdkdataline</string>
<string>mqqopensdkgrouptribeshare</string>
<string>mqqopensdkfriend</string>
<string>mqqopensdkapi</string>
<string>mqqopensdkapiV2</string>
<string>mqqopensdkapiV3</string>
<string>mqqopensdkapiV4</string>
<string>mqzoneopensdk</string>
<string>wtloginmqq</string>
<string>wtloginmqq2</string>
<string>mqqwpa</string>
<string>mqzone</string>
<string>mqzonev2</string>
<string>mqzoneshare</string>
<string>wtloginqzone</string>
<string>mqzonewx</string>
<string>mqzoneopensdkapiV2</string>
<string>mqzoneopensdkapi19</string>
<string>mqzoneopensdkapi</string>
<string>mqqbrowser</string>
</array>
*允许http连接的操作
在工程的 Info.plist 文件中，设置 App Transport Security Settings 选项下 Allow Arbitrary Loads 值为 YES，对应 plist 内容为:
<key>NSAppTransportSecurity</key>
<dict>
    <key>NSAllowsArbitraryLoads</key>
    <true/>
</dict>
5，代码
1、引用方式
#import <YMSDK/YouMeiLiftTabBarViewController.h>
2、使用
YouMeiLiftTabBarViewController *aa = [[YouMeiLiftTabBarViewController alloc]init];
aa.hidesBottomBarWhenPushed=YES;
("AppKey:商户应用Key、、thirdUserId：项目用户唯一id 、、mobileID：用户手机号" 、、 nickName：用户名称、、 avatarUrl：头像地址、、tbNumber：淘宝AppKey)
[aa setNetworkAppKey:@"appKey" thirdUserId:@"thirdID" mobileID:@"mobileID" nickName:@"nickName" avatarUrl:@"avatarUrl" tbNumber:@"tbKey"];
[self.navigationController pushViewController:aa animated:YES];
3、阿里百川接入指南
https://baichuan.taobao.com/docs/doc.htm?spm=a3c0d.7629140.0.0.264fbe48b3tiQX&treeId=129&articleId=118101&docType=1
