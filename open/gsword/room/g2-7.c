// Room: /open/gsword/room/g2-12.c
inherit ROOM;

void create ()
{
  set ("short", "�㳡");
  set ("long", @LONG
�����ɽ����ڵ�����ƽʱ�����ĳ��� ,�㿴������λ�ɽ����������Ӻ����� ,
����һ�µĺ����� ,���ȫɽ ,�������ɽ����������ʢ ,�⿴������ ,���
���װ˾ų��� .

LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g2-8.c",
  "south" : "/open/gsword/room/g2-6.c",
]));

   set("objects",([
    "/open/gsword/npc/trainee-6.c":1,
   ]));

  setup();
}
