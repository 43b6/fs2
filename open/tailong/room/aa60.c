inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
�������䲻�������������ڶ���׼ҵ���,���ô�������Ҳ
�Ǵ������ѧ����,�μ���ǰ����������Ҳ����Ҫ���������µ�
����,��������¶����ڴ�ѵ�����ڵ�ɮͽ,�Ա���ʱ֮�衣
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"aa16",
  "north" : __DIR__"aa63",
  "east" : __DIR__"aa61",
]));
  set("objects", ([ /* sizeof() == 1 */
"/open/tailong/npc/monkf4.c":2,
]));

  setup();
  replace_program(ROOM);
}
