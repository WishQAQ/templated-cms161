<div id="Panel_910"  class="panel-h-box" style="margin-top:20px;margin-right:20px;margin-left:20px;width:320px;float:left;overflow:hidden;">
    <div class="index-hd1">
      <h2 class="tit">{dede:field name='typename'/}</h2>
      <a class="more fr" href="{dede:field name='typeurl'/}">more</a> </div>
    <div class="panel-h-bdbox">
      <ul class="index-news-list clearfix">
      {dede:arclist titlelen='120' row='6'}
        <li><a href="[field:arcurl /]" title="[field:title /]">[field:title /]</a><span>[[field:pubdate function="MyDate('y-m-d',@me)"/]]</span></li>
        {/dede:arclist}
      </ul>
    </div>
  </div>