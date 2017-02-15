#Smart SDK说明文档
#概述

云智慧移动应用性能监控工具，能够轻松实现基于真实用户行为的业务流程性能分析、错误及崩溃分析、移动端到服务端的关联诊断、区域分析、设备及版本分析、运营商和接入点分析、移动端代码分析、实时告警等功能。只需要一行启动代码，就能完成以上所有的工作。

#接口说明
<a href="#a1">startAgentWithAppKey</a>



#注册透视宝账户

请访问[透视宝首页](http://portal.toushibao.com)免费申请账号

![申请注册账号](image/1.png)

#获取App key

##Step1：创建应用
登录透视宝选择新建-->移动，创建应用。

![创建应用](image/2.png)

##Step2: 获取APP Key
输入应用名称点击保存生成APP key，复制APP key准备配置程序文件。

![获取APP Key](image/3.png)

##Step３: 接口调用
<div id="a1"></div>

```uexCloudwiseMAgent.startAgentWithAppKey("此处粘贴APP Key"); 
```

#查看数据
安装部署完成稍等片刻，点击按钮进入移动列表或在移动列表中选择创建的应用查看数据了。具体使用帮助文档[详见操作指南](http://portal.toushibao.com/help/help_operation)
![移动应用列表](image/4.png)


#补充说明
首先访问透视宝首页-->申请注册-->创建应用-->获取APP Key-->调用接口-->登录透视宝查看数据

#可用性
支持IOS 5.0以上版本