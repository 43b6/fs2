// Room: /open/gsword/room/g2-2.c
inherit ROOM;

void create ()
{
  set ("short", "ҩ��");
  set ("long", @LONG
����һ��СС��ҩ�� ,һ��̴��ľ���ɵĴ�ľ����ڶ��� ,ľ�񻭷�
�������� ,�ֱ����Ÿ���ҩ�� ,����֮��ȫ ,����զ�� ,������ȸ��
С ,�����ȫ .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/g2-4",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 2 */
   "/open/gsword/npc/boy-1":1,
   "/open/gsword/npc/doctor":1,
]));

  setup();
}
