// Room: /open/dancer/room/roomse1.c :cgy

inherit ROOM;

void create ()
{
  set ("short", "��԰С��");
  set ("long", @LONG
����һ��С�������Գ����˸�ʽ���ʻ�������Ŀ��Ͼ����
�ҷ��Ļ������������������������ʻ����˲��������������
��������ˮ�ض������������賡��


LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/dancer/room/rooms3.c",
  "east" : "/open/dancer/room/roomse2.c",
]));

  set("light_up", 0);

  setup();
}
