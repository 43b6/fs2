// Room: /open/gsword/room/gsword1-5.c
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�������ɽ��ɵ����������� ,����һ�ų��ܰ����˸�ʽ�����Ľ� :���� ,
�̽� ,ϸ�� ,�� ...�� ,һӦ��ȫ ,��ֻ��û�б��� .���׵ĳ��������
��������ʽ���������� ,�����Ǵ� ,���� ,���� ,��ذ ,���� ,�����뱸.

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/g1-6.c",
]));
  set("objects", ([ /* sizeof() == 3 */
  "/open/gsword/obj/woodsword" : 1,
  "/open/gsword/obj/chusword" : 2,
  "/open/gsword/npc/trainee-4" : 1,
]));

  setup();
}
