// Room: /open/gsword/room/g1-8.c
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
�������ɽ��ɵķ�����, ѧ��֮�˱��Ͳ���Ҫɶ����, ������䷿��ֻ����һЩ���, 
���ľ�֮��ķ���, ͻȻ����۹ⱻһ��ҫ�۵��·�������, ����һ��, ԭ����������
֣ʿ��ר�õ�������, ��˵�о��е�ǹ�����ǿ�Ͷȡ�
LONG);

  set("light_up", 1 );

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g1-6",
]) );

  set("objects", ([ /* sizeof() == 3 */
  "/open/gsword/npc/boy.c" :1,]));
  
  setup();
}
