// Room: /open/gsword/room/school.c

inherit ROOM;

void create ()
{
  set ("short", "˽��");
  set ("long", @LONG
������һ��˽��,������������ڴ�������ǵ�ѧҵ,������ѧͯ
���ʵĶ�����,Ҳ�������������ѧ����,��Ҳ��ô����,�ɰ�.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/su10",
]));

  set("objects",([
  "/open/gsword/npc/teacher" : 1,
   ]));
  set("light_up", 1);

  setup();
}
