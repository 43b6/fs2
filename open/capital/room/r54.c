// Room: /open/capital/room/r54.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����￪ʼ�����Ǵ�ٹ����ǵ�ס���ˣ��������ӵ����ǲ����ڴ�
�����ģ��ڴ˽����Ķ���Щ��Ȩ���Ƶ��ˡ��������Ե��������, ����
�в���ʮ�������ٵ�����������

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/capital/room/r19",
  "east" : "/open/capital/room/r55",
]));

  set("outdoors", "/open/capital");

  setup();
}
