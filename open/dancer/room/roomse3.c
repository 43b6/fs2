// Room: /open/dancer/room/roomse3.c :cgy

inherit ROOM;

void create ()
{
  set ("short", "��԰С��");
  set ("long", @LONG
����һ��С�������Գ����˸�ʽ���ʻ�������Ŀ��Ͼ����
�ҷ��Ļ������������������������ʻ����˲��������������
��������ͤ�ض�����������ˮ�ء�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/dancer/room/roomse2.c",
  "east" : "/open/dancer/room/roomse4.c",
]));

  set("light_up", 0);

  setup();
}
