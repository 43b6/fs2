// Room: /open/gsword/room/wghouse.c
inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
�������ɽ��ĺ��� ,�������ɽ��Ĳؽ��� ,���ϱ����ɽ�������λ�� , һ������
�ǲ���������˵� ,Ϊ�˱����鷳 ,���Ǿ����뿪Ϊ�� 
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/g5-5.c",
  "southeast" : "/open/gsword/room/g5-4.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/npc/swordman" :1,
]));

  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="west" && present("han toung",environment(me)))
   return notify_fail(" ����˵�� :�������ɽ��ص� ,�㻹�ǿ��뿪��!!!\n");
return ::valid_leave(me,dir);
}
