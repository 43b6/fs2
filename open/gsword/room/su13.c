// Room: /open/gsword/room/su13.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ����");
  set ("long", @LONG
���ڿ�����ʯ������,�����������гǵ�����,���гǵ�һ���
�񶼾�ס�ڴ�,����Ըо������гǵ�����������,���������ľ���
���ڽ���,����һ��ƽ���ĳ���.
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/woman" : 1,
   "/open/gsword/mob/bochen" : 1,
]));
  set("light_up", 1);
  set("outdoors", "/open/gsword");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"su4",
  "east" : __DIR__"su12",
]));

  setup();
}
