// Room: /u/d/dhk/questsfan/rm28
inherit ROOM;
#include </open/open.h>
#include <ansi.h>
void create ()
{
  set ("short", "��[1;35m�ɹ�[2;37;0m");
  set ("long", @LONG
��������ɽ�������ģ���ɽ˫�ȡ�֮һ�����š����˹��硯����
�ƵĲ��ɹȡ���һЩ����ҥ���������޵�֮���ڽ����õ�����֮ǰ��
ǰ���˹����С���סһ��ʱ�ձ��������õ����ɡ���������ϸ������
����һ���������˵�ֻ������һ����ͨ��ɽ�ȣ������ǻ�����Ϊ����
������һ����ˣ�ʵ�ڿ����������ر��ںδ���ʵ����������ѽ��

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"rm33",
  "west" : __DIR__"rm35",
]));

  setup();
}
int valid_leave(object who,string dir)
{
        if(dir=="west"&&present("mountain god",environment(who))||dir=="west"&&!present(environment(who)))
  {
        if(who->query_temp("meetgod_4")!=1)
        {
//       tell_object(who,""HIM"������ŭ��:�������Ӿ�Ȼ�Ҵ����ɹȣ�����������ȥ��"NOR"\n");
        return notify_fail("������ŭ��:�������Ӿ�Ȼ�Ҵ����ɹȣ�����������ȥ��\n");
        }
        return :: valid_leave(who,dir);
  }
  return :: valid_leave(who,dir);
}
void init()
{
call_out("dhk",1,this_player()); 
}
void dhk(object who)
{
  object god=new(__DIR__"npc/god.c");
    if(who->query_temp("meetgod_4")!=1 && !present("mountain god",environment(who)))
    {
       god->move(__DIR__"rm34.c");
       remove_call_out("dhk");
    }
}
