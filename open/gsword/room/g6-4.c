// Room: /open/gsword/room/g6-4.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������һƬС�㳡������һƬ��ͺͺ���ͱڣ������ɽ��ɵ�˼���£�
��˼����Ҳ������θߣ�ֻ�ǵ��ƶ��ͣ�����ʮ�����գ�����������С��
���ƿɵ������£���������С����ͨ��δ֪�ĵط�����˵�������ż�����
�ϸߵĵ��ɽ������⣬�������ӽԲ������롣
 
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 4 */
  "northeast" : "/open/gsword/room/g6-5.c",
  "southeast" : "/open/gsword/room/g6-3",
  "west" : "/open/gsword/room/g6-8.c",
  "northwest" : "open/gsword/room/h-2.c",
]));

  setup();
}
