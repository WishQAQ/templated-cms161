<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html  xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title><?php echo $cfg_webname; ?> - 留言本</title>
<link  type="text/css"  rel="stylesheet"  href="<?php echo $cfg_templeturl; ?>/default/css/global.css">
<link  type="text/css"  rel="stylesheet"  href="<?php echo $cfg_templeturl; ?>/default/css/probuy.css">
<link  type="text/css"  rel="stylesheet"  href="<?php echo $cfg_templeturl; ?>/default/css/style.css">
<link  type="text/css"  rel="stylesheet"  href="<?php echo $cfg_templeturl; ?>/default/css/easyDialog.css">
<script  type="text/javascript"  src="<?php echo $cfg_templeturl; ?>/default/js/jquery-1.8.3.min.js"></script>
<script  type="text/javascript"  src="<?php echo $cfg_templeturl; ?>/default/js/template-global.js"></script>
<script  type="text/javascript"  src="<?php echo $cfg_templeturl; ?>/default/js/ShoppingCart.js"></script>
<script  type="text/javascript"  src="<?php echo $cfg_templeturl; ?>/default/js/base.js"></script>
</head>
<body  id="body">
<div  id="Layout_890"  class="">

  
<?php
  pasterTempletDiy("default/head.htm");
?>  
  
  
  
  <div  class="sub-bannerOut clearfix">
    <div  class="sub-bannerInner">
      <div  class="sub-bannerbox">
        <div  style="width:1920px;float:left;height:320px;"><img  src="<?php echo $cfg_templeturl; ?>/default/images/6351796651544263357206.jpg"  style="width:1920px;height:320px;"> </div>
      </div>
    </div>
  </div>
  <div  class="wrap mt20 clearfix">
    <div  class="wrap-left fl">
      <div  id="Panel_172"  class="sidebar-wrap"  style="clear:both;overflow:hidden;">
        <p  class="sidebar-title"> 在线留言</p>
        <ul  class="sidebar-navlist"  id="J_sidebar-navlist">
          <li  class="oncurr"><a  href="">留言信息</a>
            <div  class="sidebar-navSub"> </div>
          </li>
        </ul>
        <script  type="text/javascript">
      $(function () {
      $("#J_sidebar-navlist").sidebar()
      })
      </script> 
      </div>
    </div>
    <div  class="wrap-right fr">
      <div  id="Panel_290"  class=""  style="clear:both;overflow:hidden;">
        <div  class="sub-page clearfix">
          <div  class="sub-page-h fl">
            <h2>留言信息</h2>
          </div>
          <div  class="bread fr"> 您当前的位置：<a  href="<?php echo $cfg_basehost;?>">首页</a> &gt; <a  href="#"  class="">在线留言</a> &gt; <a  href="#"  class="last">留言信息</a> </div>
        </div>
        <div  class="main-body">
          <div  class="main-body">
            <div  class="leavmsg-listbox">
              <div  class="leavmsg-listInner">
                <ul  class="leavmsg-list">
                
        
                  
                  <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
                  <li>
                    <div  class="leavmsg-list-con clearfix">
                      <div  class="leavmsg-list-l fl">
                        <p><img  src="<?php echo $cfg_templeturl; ?>/default/images/user.png"></p>
                        <span  class="user"><?php echo $fields['uname']; ?></span>
                        <p  class="time"><?php echo MyDate('m-d H:i',$fields['dtime']); ?></p>
                        </div>
                      <div  class="leavmsg-list-r fr">
                        <div  class="txt"><?php echo $fields['msg']; ?></div>
                        
                            <?php if($g_isadmin) { ?>
                          [邮件]：<?php echo $fields["email"]?>&nbsp;
                          [电话]：<?php echo $fields['homepage']?>&nbsp;
                          [QQ]：<?php echo $fields['qq']?>&nbsp;
                           <a href='guestbook.php?action=admin&id=<?php echo $fields['id']; ?>'><img src='guestbook/images/quote.gif' border=0 height=16 width=16 />[回复/编辑]</a>&nbsp;
                      <a href='guestbook.php?action=admin&id=<?php echo $fields['id']; ?>&job=del'><img src='guestbook/images/del.gif' border=0 height=16 width=16 />[删除]</a>&nbsp;
                     <?php }  ?> 
                     
                        
                        
                      </div>
                    </div>
                  </li>
                  
                  <?php
}
}?>
                  
                </ul>
                
                <div class="dede_pages" >
                   <ul class="pagelist" >
                    <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listitem'] = 'pre,next,pageno';
$atts['listsize'] = '4';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

					
                   </ul>
                </div>
                
              </div>
            </div>
          </div>
          <form  method="post"  action="guestbook.php"  id="form1">
          <input type='hidden' name='action' value='save' />
          
            <input  name="postName"  type="hidden"  value="addMessage">
            <div  class="leavmsg-formbox">
              <div  class="leavmsg-formtip">尊敬的客户，您好！如果您在使用过程中遇到任何问题或者您对我们有什么建议，您可以在线提交您的问题，将有专业服务人员给您及时反馈，谢谢！</div>
              <div  class="leavmsg-form">
                <div  class="clearfix">
                  <div  class="form-item fl">
                    <label  class="para-tit"><em  class="reqstar">*</em>姓&nbsp;&nbsp;&nbsp;&nbsp;名：</label>
                    <input  type="text"  class="leavmsginput lm-usrname"  name="uname"  value="">
                  </div>
                  
                </div>
                <div  class="clearfix">
                  <div  class="form-item fl">
                    <label  class="para-tit"><em  class="reqstar">*</em>邮&nbsp;&nbsp;&nbsp;&nbsp;箱：</label>
                    <input  type="text"  class="leavmsginput lm-email"  name="email"  value="">
                  </div>
                  
                </div>
                <div  class="clearfix">
                  <div  class="form-item fl">
                    <label  class="para-tit">手机号码：</label>
                    <input  type="text"  class="leavmsginput lm-phone"  name="homepage"  value="">
                  </div>
                  
                </div>
                <div  class="form-item clearfix">
                  <label  class="para-tit"><em  class="reqstar">*</em>留言内容：</label>
                  <textarea  class="lm-content"  name="msg"></textarea>
                </div>
                <div  class="form-item clearfix">
                  <label  class="para-tit">验证码：</label>
                  <input  type="text"  class="leavmsginput lm-writeyzm"  name="validate">
                  <img src='../include/vdimgck.php'/>
                </div>
                <div  class="form-item clearfix">
                  <label  class="para-tit"></label>
                  <input  type="submit"  class="form-customSubBtn"  value="提交留言">
                </div>
              </div>
            </div>
          </form>
        </div>
      </div>
    </div>
  </div>
  <?php
  pasterTempletDiy("default/footer.htm");
?> 
</div>
</body>
</html>