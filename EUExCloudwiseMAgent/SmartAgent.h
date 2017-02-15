//
//  SmartAgent.h
//  CloudwiseMAgent
//
//  Created by Alvin on 14/1/17.
//  Copyright (c) 2014 cloudwise. All rights reserved.
//

#import <Foundation/Foundation.h>

/************  user indentification configuration ************/
#define CWSA_USER_ID        @"cwsa_user_id" //required
#define CWSA_USER_NAME      @"cwsa_user_name"//optional
#define CWSA_USER_EMAIL     @"cwsa_user_email"//optional
#define CWSA_USER_TOKEN     @"cwsa_user_token"//optional

/************  private deploy configuration ************/
#define CWSA_DATA_HOST      @"cwsa_data_host"//required
#define CWSA_DATA_PATH      @"cwsa_data_path"//optional
#define CWSA_USER_INFO_HOST @"cwsa_user_info_host"//required
#define CWSA_USER_INFO_PATH @"cwsa_user_info_path"//optional
#define CWSA_SCHEME         @"cwsa_scheme"//optional


@interface SmartAgent : NSObject
/**
 * get smartagent(sdk) instance object
 */
+ (instancetype)sharedInstance;

/**
 * start sdk via appkey.
 * \param appKey：get appkey from portal.toushibao.com
 */
- (void)startOnCloudWithAppKey:(NSString *)appKey;

/**
 * set user identification info
 * \param properties: NSDictionary value
    example:    NSDictionary *properies = [NSDictionary
                dictionaryWithObjectsAndKeys:@"user's id",CWSA_USER_ID,//required
                                        @"user's name",CWSA_USER_NAME,//optional
                                        @"user's email",CWSA_USER_EMAIL,//optional
                                        @"user's token",CWSA_USER_TOKEN,//optional
                nil];
 
 */
- (void)setupUserIdentificationWithProperties:(NSDictionary *)properties;


/**
 * show sdk running log
 * \param show:BOOL value, YES to print log; NO not to print log. Default is NO.
 */
- (void)printLog:(BOOL)show;

/**
 *  will delete the colleted data when it sends failed after the "saveTime".
 *  \param saveTime：the time from data sends failed to delete
 */
-(void)setSaveTime:(unsigned int)saveTime;

/**
 *  process local NSData while using local data and request via  NSURLProtocol.
 *  \param localData: local html data
 *  \param response: the reponse header to process
 */
- (NSData *)htmlData:(NSData *)localData httpResponse:(NSURLResponse *)response;

/**
 * private deploy configuration. start sdk via appkey and private host info.
 * \param appKey：get appkey from portal.toushibao.com
 * \param configInfo: private host configuration info
            example：    NSDictionary *configInfo = [NSDictionary dictionaryWithObjectsAndKeys:
                                             @"the host of data will send to",CWSA_DATA_HOST,           //required
                                             @"data host uri path",CWSA_DATA_PATH,                      //optional
                                             @"the host of user info will send to",CWSA_USER_INFO_HOST, //required
                                             @"user info host uri path",CWSA_USER_INFO_PATH,            //optional
                                             @"http or https",CWSA_SCHEME,                              //optional, default is https
                                             nil];
 */
- (void)startOnCloudWithAppKey:(NSString *)appKey withConfig:(NSDictionary *)configInfo;


@end
