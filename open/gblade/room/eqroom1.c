#include "/open/open.h"
inherit ROOM;
void create ()
{
set ("short", "ħ����Ϣ��");
set ("long", @LONG

��������Ǹ�ħ�������е�����Ϣ����ƨ���Ȳ裬����ĵط���
Ҳ���԰� EQ ����ڴˣ�����ħ�����ˣ������˶�û�취������
ħ�����ӻ����ڴ˴�(secret)����ֱ��ȥƽ�ϳ�ม�
ħ�����������ڴ˴�(fly)����ֱ��ȥ����������ม�

ħ�������Ĺ涨 :

1. pkla �Ͻ��� bell_ring
2. horse ���ܸ� name (�����Ҫ��Ҫ���Լ� name һ��)
3. Ҫѹ�������ɱ��
4. ��Ҫ���� order
5. ���н⵽а�� pkla ʱ�벻Ҫ�� ������
6. pkla ����������

����������������  ����Υ���߽�"����һ��" 

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"secret",
]));
  set("light_up", 1);
  set("no_magic", 1);
  set("no_kill", 1);
  set("no_fight", 1);
  setup();
call_other("/obj/board/evblade_b","???");
}
 void init()
{
  add_action("do_secret","secret");
  add_action("do_fly","fly");
}
int do_secret()
{
  object me;
  me = this_player();
  if(me->query("class")!="blademan")
 return notify_fail("ֻ��ħ����ͽ���á�\n");
 me->move("/open/ping/room/road3");
  return 1;
}
int do_fly()
{
object me;
me=this_player();
if(me->query("family/family_name")!="ħ��Ī��")
return notify_fail("ֻ��ħ�������������á�\n");
me->move("/open/gblade/room/room26.c");
return 1;
}
