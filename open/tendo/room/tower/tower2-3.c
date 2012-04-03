
inherit ROOM;
#include <ansi.h>
void create()
{
  set ("short", "锁妖塔二楼--");
  set ("long", @LONG
来到这儿，由于有小气窗的关系，兀自吱吱作响，偶尔还会落下一两片破砖
碎瓦，一切显得是那么萧瑟，惨淡。这里有个通往锁妖塔三楼的的楼梯。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"tower3-1",
  "east" : __DIR__"tower2-2",
]));
        set("no_transmit",1);
  setup();
}
int valid_leave(object me, string dir)
{
        if( dir=="up" )
        message("system",
 HIW"\n\t武林之中传来一道消息 : "HIY""+this_player()->name()+""HIW"勇闯"HIR"锁妖塔"HIW"第三层了 !!\n"NOR,users());
        return ::valid_leave(me, dir);
}
void init()
{
        if( !previous_object()
        ||      !userp(previous_object()) )
                return;
      call_out( "fire_wound", 3,previous_object());
}

void fire_wound(object ob)
{
        if( !ob || !present(ob) ) return;
       tell_object(ob,HIR"～鬼影幢幢～你觉得胸中一阵翻滚，忽然一道血箭从你的嘴里喷了出来。\n"NOR);
       ob->add("kee",-100);
       call_out("fire_wound", 3,ob);
}


void reset()
{
        ::reset();
        delete("go_north");
}


