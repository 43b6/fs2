// Room: /u/m/moner/tree/room16.c
inherit ROOM;

void create ()
{
  set ("short", "ɽ��");
  set ("long", @LONG

���������ص�·���������������ֵĳ��ڣ�����������һ������ʱ��
���㷢��ǰ����һ��ɽ����һ˿˿�Ĺ��ߴӶ��д������������ȥ������
      ������������������Ĺ�������ǿ�ܿ��巽��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room17.c",
  "north" : __DIR__"room15.c",
]));
  set("outdoors", "wind");
set("no_plan",1);
  setup();
}
int valid_leave(object me, string dir)
{
if(dir=="west")
if((me->query("family/family_name")!="ħ��Ī��")&&me->query("family/family_name"
)!="ħ����")
return notify_fail("ֻ��ħ���ſɽ���\n");
  return ::valid_leave(me,dir);
}
