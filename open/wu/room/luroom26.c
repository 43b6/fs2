// Room: /open/wu/room/luroom28.c
// ��ɽ�γ���������
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
  "south" : __DIR__"luroom25",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/sun_jen.c" : 1,
]));
  set("light_up", 1);
  setup();
}
