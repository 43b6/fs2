// Room: /open/poison/room/road6
inherit ROOM;

void create ()
{
  set ("short", "԰��С��");
  set ("long", @LONG
������һ��С���ϣ����Ծ��Ǵ��̵����֣���Ҷ�����
�裬����ɳɳ�����죬���Ϸ���һСС��ɽ����
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"path11.c",
  0 : __DIR__"path2",
  "northwest" : __DIR__"road17",
]));
  set("outdoors", "/open/poison");

  setup();
}
