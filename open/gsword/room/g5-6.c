// Room: /open/gsword/room/gsword5-22.c
inherit ROOM;

void create ()
{
  set ("short", "�ͷ�");
  set ("long", @LONG
�����ɽ��������д�Զ��ס��֮�ͷ� ,�����ɽ�Ϊ��ʿ�������� ,��֮
��Ϊ���ֵ�һ���� ,���ÿ����кܶ�ÿ� ,���￴�����ɸɾ����� ,��
���� ,����һ��С�輸 ,һ�������������� ,���߿��˸����� ,���������
������� ,ʮ����� .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/g5-3.c",
]));

  set("objects",([
	"/open/gsword/npc/guest-1":1,
	]));
  set("light_up", 1);

  setup();
}
