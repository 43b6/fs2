// Room: /open/gsword/room/g6-5.c
inherit ROOM;

void create ()
{
  set ("short", "���±�");
  set ("long", @LONG
������˼���µı�Ե�������ɽ�ڽ�Ϊ���ͣ�����һ����С����ֱ
ͨ�¶�������Ϊ���ͣ���������˵���ƺ��㲻��ʲô��
 
LONG);

  set("light_up", 1);
  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
   "westup" : "/open/gsword/room/g6-6.c",
  "southwest" : "/open/gsword/room/g6-4",
]));

  setup();
}
