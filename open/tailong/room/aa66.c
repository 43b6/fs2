inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
�������䲻�������������ڶ���׼ҵ���,���ô�������Ҳ
�Ǵ������ѧ����,�μ���ǰ����������Ҳ����Ҫ���������µ�
����,��������¶����ڴ�ѵ�����ڵ�ɮͽ,�Ա���ʱ֮�衣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"aa65",
  "east" : __DIR__"aa67",
]));
  set("objects", ([ /* sizeof() == 2 */
"/open/tailong/npc/monkf1.c":2,
"/open/tailong/npc/yi.c":1,
]));

  setup();
  replace_program(ROOM);
}
