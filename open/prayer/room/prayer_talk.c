inherit ROOM;

void create ()
{
  set ("short", "ʥ�����ܼ�������");
  set ("long", @LONG

    ������ʥ������Ǽ���ĳ���,������,������ܵ�����
��û�е��������ɼ�����ȫ,ͬʱ��Ҳ�ɽ��ռ�����eq��
������,�������һЩ���ĵĹػ�..:)

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" :"/open/prayer/room/punch1.c",
]));

  set("light_up", 1);
  set("no_clean_up",1);
  set("no_fight",1);
  setup();
  call_other("/obj/board/prayersss_b","????");
}
