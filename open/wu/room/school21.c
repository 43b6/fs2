// Room: /open/wu/room/school21
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
��һ�߽����䣬һ��Ũ��ľ�ζ�˱Ƕ����������ʱͷ���ۻ���������
�������������������ϰ����˾ƺ���һ�����ʹ������ڵ��Ϻ�����˯��ǽ
�Ϲ���һ������д�ţ��ش�������ھ����㲻������....�ѵ��������˲�¶��?
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"school20",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/trainer1.c" : 1,
]));
  set("light_up", 1);

  setup();
}
