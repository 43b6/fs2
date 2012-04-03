
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "锁妖塔一楼--");
  set ("long", @LONG
这儿是锁妖塔的一楼正厅，你发觉这儿空荡荡的，什么都没有，唯一你感觉得到
的是那一阵阵的妖气。你看到的大厅的中梁上悬着一个牌匾(tablet)。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"road4",
  "north" : __DIR__"tower1-2",
]));
set("objects", ([ /* sizeof() == 2 */
"/open/tendo/room/tower/npc/genies.c" : 2,
]));

        set("no_transmit",1);
  set("light_up", 1);
  set("item_desc", ([ /* sizeof() == 2 */
  "tablet" : @LONG
         牌匾上写着四个大字  --  「锁妖塔” -- 
              不遵约祭祀或误时者杀 !
              衣冠不整执礼不恭者杀 !
              言行倨傲存心不虔者杀 !
              胸怀诡谋偷袭暗算者杀 !
              擅入塔内阴谋不轨者杀 !
              以众击寡乘人之危者杀 !
              横蛮跋扈黩武好斗者杀 !

                             
LONG,
 ]));
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="out" )
        message("system",
 HIW"\n\t武林之中传来一道消息 : 非常遗憾～"HIY""+this_player()->name()+""HIW"因胆怯而退出了"HIR"锁妖塔"HIW" !!\n"NOR,users());
        return ::valid_leave(me, dir);
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 6,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"～鬼影幢幢～你觉得胸中一阵翻滚，忽然一道血箭从你的嘴里喷了出来。\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 6,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}




