inherit ROOM;

void create ()
{
  set ("short", "С����");
  set ("long", @LONG
  ������ؤ���½��������������ĵط�������һ������ߺ
  �������㲻����Ѫ���ڣ�ԾԾ���ԣ�׼����������һ�㡣
  
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/u/l/list/npc/trainee/trainee1.c" : 3,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"room14.c",
]));

  setup();
}