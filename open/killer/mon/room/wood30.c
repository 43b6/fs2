//written by acelan...../u/a/acelan/room/wood30.c
#include <room.h>
#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "岩顶");
        set("long", @LONG
岩顶大雾迷漫, 伸手不见五指, 四周一片沈寂, 连鸟叫蝉鸣亦听
不到, 只能隐约的看到前方有着几棵树, 而地上开放着不知名的小花
, 颜色艳丽, 颇为奇特。
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "down" : "/open/killer/mon/room/wood26.c",
   ]));

        set("no_clean_up", 0);

        setup();
}
void init()
{
   add_action("do_search", "search");
   add_action("do_pull", "pull");
}
int do_search( string str)
{
   if( str != "dagger")
   {
      message_vision("你找来找去, 什么都没有找到...\n");
      return 0;
   }
   if( present("god dagger", this_player()))
   {
      message_vision("岩壁又开始崩塌.......你从岩壁上摔下去了...\n");
      this_player()->add("kee", -100);
      this_player()->move("/open/killer/mon/room/wood26.c");
      return 0;
   }
   if( this_player()->query("quest/rain")==1)  //再检查一次, 避免当官的杀手带人来
   {
      message_vision("经过你仔细的搜索之后, 赫然发现地上插着一只匕首(dagger)...\n");
      message_vision("它看起来就像是失落已久的"HIW"灭神匕首"NOR"....\n");
      message_vision("你可以试着将它拔起(pull)。\n");
      return 1;
   }
}
int do_pull(string str)
{
   object ob_dagger;
   if( str == "dagger")
   {
      if( present("god dagger", this_player()))
      {
         message_vision("岩壁又开始崩塌.......你从岩壁上摔下去了...\n");
         this_player()->add("kee", -100);
         this_player()->move("/open/killer/mon/room/wood26.c");
         return 0;
      }
      if( this_player()->query("quest/rain")!=1)
      {
         message_vision("哪来的 dagger 给你拉..............\n");
         return 0;
      }
      message_vision("..........................................\n");
      message_vision("你很用力的将"HIW"灭神匕首"NOR"拔了起来....\n");
      message_vision("突然间山摇地动, 刚才的举动似乎引起了山崩。\n");
      message_vision("果然....你从岩壁上摔下去了................\n");

      ob_dagger= new("/open/killer/obj/dagger.c");
      ob_dagger->move(this_player());
      this_player()->move("/open/killer/mon/room/wood26.c");
      return 1;
   }
   else
   {
      message_vision("你要拉什么...........\n");
      return 0;
   }
}
