// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
  set ("short", "ѧ��");
  set ("long", @LONG
�����Ƿ��ָ�һ���ľ߹�ģ��ѧ�� . ���ѧ���ǹ��ҵ� , 
Ϊ�����ʷ���������� . �����ֵľ������ڴ˽��ܹ�����
���� .  

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r3-3",
]));

  setup();
}
int valid_leave(object me, string dir)
{
if(dir == "up")
if (me->query("id") != "guilty")
     return notify_fail("�Ǹ�����ֻ�����ŵ��Ӳ��ܽ�ȥ��\n");
     return :: valid_leave(me, dir);
}
