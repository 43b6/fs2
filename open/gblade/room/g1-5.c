// ��������������-by nike-
inherit ROOM;
#include <ansi.h>
  int i=0;
void create ()
{
  set ("short", "�����");
  set ("long", @LONG

�����м���������æ��׼����ϯ�������ӽ������������Ҫ�Ŀ���Ҫ��
�ˣ����߽�����һ�����Թԣ������ǻ������ʯ��������ͷ������������
���ꡢ���������ʮ�����ű�(cup)�������ݺ�������Ҫ������(take)
����������ȥ�������ͷ�����

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"gblade.c",
]));
  set("objects", ([ /* sizeof() == 1 */
	"/open/gblade/npc/wang-fu" : 1,
]));
  set("light_up", 1);

  setup();
}
void init()
 {
     add_action("do_take","take");
 }
int do_take(string str)
{
    object me, who;
    me=this_player();
    who=present("wang fu", environment(me));

    if(!me->query("doctor/find_cup")==1)
	return notify_fail("������ʲô������\n");
    if(!str || str!="cup")
	return notify_fail("������ʲô������\n");
    if(i>=1)
	return notify_fail("��ϧ�����Ͽտ���Ҳ \n");
    if(!who)
{
	message_vision(sprintf("$N͵͵���˹�ȥ , ������һֻ"+HIC+"ʮ�����ű�\n"NOR),me);
	new("/open/gblade/obj/cup")->move(me);
	i=i+1;
    if(who && random(100) < 50)
{
	message_vision(sprintf("$N͵͵���˹�ȥ , ������һֻ"+HIC+"ʮ�����ű�\n"NOR),me);
	new("/open/gblade/obj/cup")->move(me);
	i=i+1;
   return 1;
}
	message_vision("$N��Ҫ����ʱ ,����ͻȻת������ \n",me);
	message_vision("������$N��� : �������� !!\n",me);
	who->kill_ob(me);
	return 1;
}
	message_vision(sprintf("$N����û��ע�� , ������һֻ"+HIC"ʮ�����ű�\n"NOR),me);
	new("/open/gblade/obj/cup")->move(me);
	me->delete("doctor/find_cup");
	me->set("doctor/get_cup",1);
	i=i+1;
	return 1;
}

