inherit ITEM;
#include <ansi.h>

int i=3;
void create()
{
        set_name("一棵百年老树",({"tree"}));
                
                set("unit", "棵");
                set("long",
                "一棵将近百年的树木，树上结实累累。长了一些奇特的果实。\n");
                set("no_get","1");
}

void init()
{
  add_action("do_shake","shake");
}


int do_shake(string arg)
{
 object obj;
 
 if(arg!="tree")
    return 1;
 i--; 
 if( i>1) {
   obj=new("/open/tendo/obj/fruit");
   obj->move("/open/tendo/kunlun/g2");
   message_vision("
一堆果实掉了下来....劈哩啪啦k的你头晕眼花。
......"HIC"★........"HIW"＊....  "HIB"☆..
.... "MAG"※ .....     "HIY"★"NOR"..........
哇!!....天上繁星点点......
......@&#%#
\n",this_object());
} else {

message_vision("你摇了老半天，只掉下了几片树叶。\n",this_object());
} 

 return 1;
}