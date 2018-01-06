<li class="nav-sub clearfix"> <a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>
            <ul class="nav-sub clearfix">
              {dede:channel type='son' noself='yes'}
              <li><a href="[field:typelink/]">[field:typename/]</a></li>
              {/dede:channel}
            </ul>
          </li>