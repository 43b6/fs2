// Room: /open/gsword/room/suroom4.c

inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG
һ����ͨ����,ƽ���İ���,Ȼ��ȴ��ɨ�ɾ�,һ�������
���񶼾�ס����˻�����.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/gsword/room/su11",
]));

  set("light_up", 1);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/woman" : 1,
]));

  setup();
}
