inherit ROOM;

void create ()
{
  set ("short", "ˮ��ͼ���");
  set ("long", @LONG
�����Ǵ�Ŵ���Ȼ���й�ˮ֮���ص��鷿������ҽѧ����������
ѧ���߼������ȣ�����֪���������������⣬�������ƺ���������
������Ĵ𰸣�������ŵ���Ҳ�����˷����鼮�������鼮����˵�
�ֶַ����������ã��Ա�Ѱ�顣
LONG);

  set("exits", ([ /* sizeof() == 5 */
  "northeast" : __DIR__"r23.c",
  "north" : __DIR__"water_n.c",
  "south" : __DIR__"water_s.c",
  "west" : __DIR__"water_w.c",
  "east" : __DIR__"water_e.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar3.c" : 1,
]));

  setup();
}
