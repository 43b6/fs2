//written by acelan...../u/a/acelan/ghost/room/ghost10.c

inherit ROOM;

void create()
{
        object me;
        me= this_player();
        set("short", "坟墓");
        set("long", @LONG
这是一个很大很华丽的坟墓, 四周有围墙围住, 墓穴是由石材所
做成的, 围起来的面积很大, 最少可容纳十多人, 看来这个墓穴内住
的人必定是大有来头的人物, 可是墓碑(gravestone)上却是一个字都
没写, 看起来挺古怪的。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "west"  : __DIR__"ghost9.c",
   ]));
   set("item_desc", ([ /* sizeof() == 1 */
       "gravestone" : "一块什么字都没写的墓碑\n",
   ]));
   set("search_desc", ([ /* sizeof() == 1 */
       "gravestone" : "你仔细观察这块墓碑后, 发现它的上面有写着几个字, 好像是「芝麻开门”。\n",
   ]));
   set("no_clean_up", 0);

   setup();
}

void init()
{
   add_action("do_say", "say");
}

int do_say( string arg)
{
   object me;
   me= this_player();
   if( arg != "芝麻开门")
   {
      message_vision("你在念什么ㄚ, 没看过阿里巴巴与四十大盗吗...\n", me);
      return 0;
   }
   message_vision("突然间轰的一声, 只见墓碑缓缓升起, 在你前方出现了一条路。\n", me);
   set("exits/north", __DIR__"ghost16.c");
   return 1;
}

int valid_leave(object me, string dir)
{
   if (dir != "north")
   {
      message_vision("突然间轰的一声, 只见墓碑掉了下来, 又将洞口堵住了。\n", me);
      this_object()->delete("exits/north");
   }
   return 1;
}
