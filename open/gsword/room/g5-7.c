// Room: /open/gsword/room/gsword5-22.c
inherit ROOM;

void create ()
{
  set ("short", "�ͷ�");
  set ("long", @LONG
�����ɽ��������д�Զ��ס��֮�ͷ� ,�����ɽ�Ϊ��ʿ�������� ,��֮
��Ϊ���ֵ�һ���� ,���ÿ����кܶ�¿� ,���￴�����ɸɾ����� ,��
���� ,����һ��С�輸 ,һ�������������� ,���߿��˸����� ,���������
������� ,ʮ����� .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/g5-3.c",
]));

  set("light_up", 1);

  setup();
}
