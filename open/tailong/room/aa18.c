inherit ROOM;

void create ()
{
  set ("short", "Ĳ��Ժ");
  set ("long", @LONG
�߽�Ĳ��Ժ��,��ʱ�е�ѹ������,��ǰ���������е������ɮ"�ۡ�
�ࡢ��",��������������������Ҳ������һ�����ĸ���,������˶�����
��,�����¹�Ȼ��һ���Ի�����֮�ء�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"aa17",
]));
  set("objects", ([ /* sizeof() == 3 */
"/open/tailong/npc/chian.c":1,
"/open/tailong/npc/guan.c":1,
"/open/tailong/npc/shian.c":1,
]));

  setup();
  replace_program(ROOM);
}
