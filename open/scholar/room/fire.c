inherit ROOM;

void create ()
{
  set ("short", "����ͼ���");
  set ("long", @LONG
�����Ǵ�Ŵ���Ȼ���йػ�֮���ص��鷿������ҽѧ����������
ѧ���߼������ȣ�����֪���������������⣬�������ƺ���������
������Ĵ𰸣�������ŵ���Ҳ�����˷����鼮�������鼮����˵�
�ֶַ����������ã��Ա�Ѱ�顣
LONG);

  set("exits", ([ /* sizeof() == 5 */
  "southeast" : __DIR__"r10.c",
  "north" : __DIR__"fire_n.c",
  "south" : __DIR__"fire_s.c",
  "west" : __DIR__"fire_w.c",
  "east" : __DIR__"fire_e.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar2.c" : 1,
]));

  setup();
}
