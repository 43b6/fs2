// Room: /u/r/ranko/vil1.c
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
�����Ǹ�����Ĵ�ڣ��˴����ڵش�ƫƧ���Ҵ������Ը���
�㣬�������������ʹ�������˴˵�����������ã������ǹ�����
�������������Ҳ�Ǵ˴�������������ɡ�
 
LONG);

  set("light_up", 1);
  set("outdoors", "/u/r/ranko");
  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"road9.c",
  "west" : __DIR__"v2-1.c",
]));

  setup();
}
