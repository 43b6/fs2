inherit ROOM;

void create ()
{
  set ("short", "����ͼ���");
  set ("long", @LONG
�����Ǵ�Ŵ���Ȼ���й���֮���ص��鷿������ҽѧ����������
ѧ���߼������ȣ�����֪���������������⣬�������ƺ���������
������Ĵ𰸣�������ŵ���Ҳ�����˷����鼮�������鼮����˵�
�ֶַ����������ã��Ա�Ѱ�顣
LONG);

  set("exits", ([ /* sizeof() == 5 */
  "north" : __DIR__"land_n.c",
  "south" : __DIR__"land_s.c",
  "west" : __DIR__"land_w.c",
  "east" : __DIR__"land_e.c",
  "northwest" : __DIR__"r25.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar4.c" : 1,
]));

  setup();
}
