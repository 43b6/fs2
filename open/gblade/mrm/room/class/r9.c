// Room: /open/gsword/room/wghouse.c
inherit ROOM;

void create ()
{
set("short","ħ����");
  set ("long", @LONG

������ħ��������һ�㣬һ̤��������ܵĿ������������������
����������һ˿��������������Ϊ�Լ���˫����ʧȥ�����ˣ���Ŭ����
�����Ĺˣ����ϸ���һ�㱡���Ļҳ�����ʾ��������������

LONG);
set("no_plan",1);
  set("exits", ([ /* sizeof() == 2 */
     "north" : __DIR__"r10.c",
]));
set("no_transmit",1);
  set("objects", ([ /* sizeof() == 1 */
"/open/gblade/npc/mou.c":1,
]));

  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="north" && present("degu mou",environment(me)))
   return notify_fail(" ����˵�� :�������ɽ��ص� ,�㻹�ǿ��뿪��!!!\n");
return ::valid_leave(me,dir);
}
