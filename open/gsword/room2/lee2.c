inherit ROOM;

void create ()
{
  set ("short", "�ٲ���");
  set ("long", @LONG
�ɽ�ǰɽ���ٲ�����ﵽ����Ţ�������޷��������ﾹȻ������
����һ��������ǰ���˾��ǽ��ϸ��¥¥��--������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/open/gsword/room/pool",

]));

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc2/lee1.c" :1, ]));
  setup();
}
