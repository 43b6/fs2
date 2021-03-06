//written by acelan...../u/a/acelan/room/wood17.c

inherit ROOM;

void create()
{
        set("short", "神秘的地道");
        set("long", @LONG
在你面前有一个闪烁着耀眼光芒的水晶转盘 (wheel), 藉着火把
的反射, 正散发着诡异光芒。除此之外, 地道内除了自己的身影外,
已无他物了。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "north" : "/open/killer/mon/room/wood25.c",
   ]));
   set("no_clean_up", 0);
   set("light_up", 1);
   set("item_desc", ([ /* sizeof() == 1 */
       "wheel" : "这是个使用水晶所打造的转盘, 正闪烁着诡异的光芒, 它看起来\n似乎是可以旋转(turn)的\n",
   ]));
   set("search_desc", ([ /* sizeof() == 1 */
       "wheel" : "你仔细看过转盘之后发现它不但可以旋转, 而且还发现了一个按\n钮(button),你可以试着按下(press)它\n",
   ]));

   setup();
}

void init()
{
   add_action("do_turn_wheel", "turn");
   add_action("do_press_wheel", "press");
}

int do_turn_wheel( string arg)
{
   object user;
   user= this_player();
   if( arg == "wheel")
   {
      tell_object( this_player(), "你将转盘转了两圈之后, 地板开始慢慢的上升, 把你送出了地道...\n");
      user->move("/open/killer/mon/room/wood13.c");
      return 1;
   }
   else
      tell_object( this_player(), "你想要旋转什么....\n");
   return 0;
}

int do_press_wheel( string arg)
{
   if( arg == "button")
   {
      tell_object( this_player(), "一按下按钮, 东侧的墙壁无声无息的打开了, 你赞叹这机关的巧妙..\n");
      set("exits/east", "/open/killer/mon/room/wood18.c");
      return 1;
   }
   tell_object( this_player(), "你想要按下什么....\n");
   return 0;
}

int valid_leave(object me, string dir)
{
  if (dir != "east")
  {
     this_object()->delete("exits/east");
     return 1;
  }
  return 0;
}
