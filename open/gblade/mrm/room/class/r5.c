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

  set("exits", ([ /* sizeof() == 2 */
   "north" : __DIR__"r6.c",
   "out":"/open/snow/room/back",
]));
set("no_transmit",1);
  set("objects", ([ /* sizeof() == 1 */
"/open/gblade/npc/gud.c":1,
]));

  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if((dir=="out"||dir=="north")&& present("run mou",environment(me)))
   return notify_fail(" ����˵�� :�������ɽ��ص� ,�㻹�ǿ��뿪��!!!\n");
return ::valid_leave(me,dir);
}
