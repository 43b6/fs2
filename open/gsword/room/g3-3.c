// Room: /open/gsword/room/g3-3.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����ɽ��ɶѷ�����Ĵ����� ,�㿴��һ��������������ŷ��ڷ�
������ ,���Ӽ�����������һ����Ļҳ� ,�ƺ����������� .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/g3-2",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/obj/map1" : 1,
]));
	set("light_up",1);

  setup();
}
