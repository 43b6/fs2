// Room: /open/gsword/room/suroom1.c

inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG
һ����ͨ����,ƽ���İ���,Ȼ��ȴ��ɨ�ɾ�,һ�����������
��ס����˻�����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/su6",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/man" : 1,
]));

  setup();
}
