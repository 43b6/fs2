inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����Ƕ����������������� ,����һ�ų��ܰ����˸�ʽ�����Ĵ�����
�� ,����� ,���� ,��Ѩ��..�� ,һӦ��ȫ ,���׵ĳ����������������
�������� ,�����Ǵ� ,���� ,���� ,��ذ ,���� ,�����뱸��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northwest" : __DIR__"np2.c",
]));
  set("light_up", 1);
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/obj/fan-2" : 2,
]));

  setup();
}
