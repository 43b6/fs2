#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[1;37m����[0m");
  set ("long", @LONG
��������İ�����Ȼ�Ѿ���Ū���ˣ��������Ծɿ��Ըо��ĳ�����䷿�����
��Ʒζʮ�ֵĸ��У���ɴ��ɢ���ټ���һЩ�򵥵ķ���װ��Ʒ����·���Կ�����
����ǰ���ڴ���Ϣģ��������ϸһ����ɢ�����Ʒ�У���������һЩŮ�졢�����
����������ǰ����߹Ǻ���ǰӦ���Ǹ�Ů�ġ�
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/corpse02" : 1,
]));
  set("no_fight", 1);
  set("no_kill", 1);
  set("no_magic", 1);
  set("no_quit", 1);
  set("no_spell", 1);
  set("no_recall", 1);

  setup();
}
void init()
{
add_action("do_search","search");
}
int do_search()
{
object me;
me=this_player();
if(me->query_temp("get_amulet") >= 1)
{
tell_object(me,"��ʲôҲû�з��֡�\n");
return 1;
}
else
{
tell_object(me,"���ʬ�ǵ����Ϸ�����һ���������\n");
me->set_temp("get_amulet",1);
new(__DIR__"obj/amulet")->move(me);
return 1;
}
}
