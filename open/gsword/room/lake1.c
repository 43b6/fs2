// Room: /open/gsword/room/lake1.c

inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
����ǰһƬ���⵴��,�������ɴ�Զ��,�ƺƝg�g,��������һƬ,
�����뻭ü�ĶԻ�,������������ӳ. �̲�,ˮ��,��֯������ 	
������������.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/visitor" : 1,
]));

  set("outdoors", "/open/gsword");

  set("exits", ([ /* sizeof() == 3 */
  "southeast" : "/open/gsword/room/lake2.c",
  "north" : "/open/gsword/room/froad0.c",
  "southwest" : "/open/gsword/room/lake0.c",
]));

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}
