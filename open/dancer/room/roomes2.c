// Room: /open/dancer/room/roomes2.c :cgy

inherit ROOM;

void create ()
{
  set ("short", "��԰С��");
  set ("long", @LONG
����һ��С�������Գ����˸�ʽ���ʻ�������Ŀ��Ͼ����
�ҷ��Ļ������������������������ʻ����˲��������������
�ϱ߼�����ˮ�ء�


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : "/open/dancer/room/roomes1.c",
  "south" : "/open/dancer/room/roomse2.c",
]));

  set("light_up", 0);

  setup();
}
