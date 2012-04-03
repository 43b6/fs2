#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIR"火龙王窟"NOR);
  set ("long", @LONG
这里是火龙幻界的统治者--火龙王所居住的地方, 雄雄的火焰好像有
生命一样燃烧着此地, 你还在迟疑着火龙王的踪影时, 身旁的火突然疯狂
乱窜而出, 又集中成一个形体向你直扑来, 你运用深厚的内力勉强支撑了
下来, 你仔细一看, 看来此形体这就是传说中的火龙王。
LONG);

  set("objects", ([ /* sizeof() == 1 */
      "/open/fire-hole/npc/fire-dragon" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"fire1.c",
]));
  set("no_transmit", 1);

  setup();
}
void init()
{
  set("no_reset",1);
  call_out("do_check",1,this_player()); 
}
void do_check(object me)
{ 
        if (( me->query_temp("ko_y")!=1 || me->query_temp("ko_g")!=1 
              || me->query_temp("ko_r")!=1 || me->query_temp("ko_b")!=1 
              || me->query_temp("ko_p")!=1 || me->query_temp("ko_w")!=1)
              &&  userp(me) && living(me)) 
        {
           message_vision(HIR"$N没有打败六色龙，被天神传送回起点！\n"NOR,me);
           me->move(me->query("startroom"));
           me->set( "clan/out","/open/center/room/inn");
        }    
}