// Room: /open/poison/room/v5.c
inherit ROOM;

void create ()
{
  set ("short", "�峤�ļ�");
  set ("long", @LONG
�����Ǵ峤�ļң��峤�Ǵ����������ϵ��ˣ�������Ҫ������
��ִ��������ô���ܽ�����£�������Űݷ�����峤��Э������
�峤Ҳ�����岻�ݴǵĽ���������ǽ�����⣬�Ž���ף������
�������ǵľ��硣
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"v2-6.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/vleader.c" : 1,
]));
  set("light_up", 1);

  setup();
}
