// Room: /open/gsword/room/g2-16.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
һƬ���Ĳ��� ,�����˸�ʽ����������߲� ,��Ӧ���ɾ���
�ݵĲ�����Դ ,��Ƭ����ÿ��Ϊ�ɽ�����ʡ֮���� ,��Ϊһ�ȿɹ۵�
���� ,��Դ���� ,��ʡ��ʡ ,������ɽ��۲�֮�׵� .

LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc/oldfarmer" : 1,
  "/open/gsword/npc/farmer" : 2,
]));
  set("outdoors", "/open/gsword/room");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g2-15",
]));

  setup();
}
