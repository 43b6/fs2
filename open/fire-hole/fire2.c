#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIR"��������"NOR);
  set ("long", @LONG
�����ǻ����ý��ͳ����--����������ס�ĵط�, ���۵Ļ��������
����һ��ȼ���Ŵ˵�, �㻹�ڳ����Ż���������Ӱʱ, ���ԵĻ�ͻȻ���
�Ҵܶ���, �ּ��г�һ����������ֱ����, ����������������ǿ֧����
����, ����ϸһ��, ��������������Ǵ�˵�еĻ�������
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
           message_vision(HIR"$Nû�д����ɫ�����������ͻ���㣡\n"NOR,me);
           me->move(me->query("startroom"));
           me->set( "clan/out","/open/center/room/inn");
        }    
}