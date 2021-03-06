//written by acelan...../u/a/acelan/ghost/room/ghost12.c
//2001.12.11 Modify by Wataru for 幻之忍杀
//载此处增加，八卦迷阵

inherit ROOM;
void create()
{
 object me=this_player();

        set("short", me->query("name")+"之墓");
        set("long", "什么....这里竟是我的坟墓, 再仔细看看墓碑(gravestone), \n"+
"上面果然是写着「"+me->query("name")+"之墓”, 看得你吓出了一身冷汗,\n"+
" 只听见坟墓内传来阵阵的哭声。哇....妈呀....还不快走。\n\n");
   set("exits", ([ /* sizeof() == 1 */
       "north" : __DIR__"ghost19.c",
       "south" : __DIR__"ghost6.c",
       "east"  : __DIR__"ghost13.c",
   ]));
   set("item_desc", ([ /* sizeof() == 1 */
       "gravestone" : "上面写着几个大字「"+me->query("name")+"之墓”\n",
   ]));
   set("search_desc", ([ /* sizeof() == 1 */
       "gravestone" : "你仔细看过自己的墓碑后发现, 它的底部有摩擦过的痕迹, 看来似乎是可以推(pull)的。\n",
   ]));
 set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/empty.c" : 1,
]));
   setup();
}

void init()
{
        object me=this_player();
//避免光create会使后到的人，看不到是自己的墓
        set("short", me->query("name")+"之墓");
        set("long", "什么....这里竟是我的坟墓, 再仔细看看墓碑(gravestone), \n"+
"上面果然是写着「"+me->query("name")+"之墓”, 看得你吓出了一身冷汗,\n"+
" 只听见坟墓内传来阵阵的哭声。哇....妈呀....还不快走。\n\n");
   set("item_desc", ([ /* sizeof() == 1 */
       "gravestone" : "上面写着几个大字「"+me->query("name")+"之墓”\n",
   ]));
   set("search_desc", ([ /* sizeof() == 1 */
       "gravestone" : "你仔细看过自己的墓碑后发现, 它的底部有摩擦过的痕迹, 看来似乎是可以推(pull)的。\n",
   ]));

   add_action("do_pull", "pull");
   add_action("do_intone", "intone");
}

int do_pull( string arg)
{
   object me=this_player();
   if( arg != "gravestone")
   {
      message_vision("你要推什么.........\n", me);
      return 0;
   }
   message_vision("你使劲的将你的墓碑推开后, 赫然发现在墓碑之后竟然还有个通道。\n", me);
   set("exits/west", __DIR__"ghost11.c");
   return 1;
}

int do_intone( string arg)
{
   object me=this_player();
   
   if (me->query_temp("firstpart") !=9)
   	return 0;
   if( arg != "耶西西凹安肮")
   {
      message_vision("你到底在吟唱什么呀？很吵耶........\n", me);
      return 0;
   }
   message_vision("当$N将老祖所教的咒文吟唱了一下后，墓碑上出现了一个罗盘\n", me);
   message_vision("$N将罗盘取下，瞬时一道光芒拢罩$N......\n", me);
   new("/open/killer/ninja/find/gmap.c")->move(me);
   me->set_temp("firstpart",10);
   me->move("/open/killer/ninja/find/9block.c");
   return 1;
}


int valid_leave(object me, string dir)
{
   if (dir != "west")
   {
      this_object()->delete("exits/west");
      return 1;
   }
   return 1;
}

