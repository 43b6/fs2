// Room: /open/gsword/room/suroom0.c

inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG
һ����ͨ����,ƽ���İ���,Ȼ��ȴ��ɨ�ɾ�,һ�����������
��ס����˻�����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/gsword/room/su7",
]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/man" : 1,
  "/open/gsword/mob/woman" : 1,
]));

  set("light_up", 1);

  setup();
}
