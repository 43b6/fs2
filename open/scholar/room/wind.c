inherit ROOM;

void create ()
{
  set ("short", "����ͼ���");
  set ("long", @LONG
�����Ǵ�Ŵ���Ȼ���йط�֮���ص��鷿������ҽѧ����������
ѧ���߼������ȣ�����֪���������������⣬�������ƺ���������
������Ĵ𰸣�������ŵ���Ҳ�����˷����鼮�������鼮����˵�
�ֶַ����������ã��Ա�Ѱ�顣
LONG);

  set("exits", ([ /* sizeof() == 5 */
  "north" : __DIR__"wind_n.c",
  "south" : __DIR__"wind_s.c",
  "west" : __DIR__"wind_w.c",
  "east" : __DIR__"wind_e.c",
  "southwest" : __DIR__"r11.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar5.c" : 1,
]));

  setup();
}
