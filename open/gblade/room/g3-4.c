inherit ROOM;

void create ()
{
  set ("short", "��Ժ�ߵ�");
  set ("long", @LONG

�����ǽ�����լ����Ժ����Ժ��һ�������ͣ��м���һ����԰����԰��
������Ԫ�ԼҾ��ס�����㿴�����ܷ��䣬������������ϸ��ʱ�»�����
�������Ϳ�Ρ�


LONG);

   set("light_up", 1);
   set("exits", ([ /* sizeof() == 3 */
   "south" :__DIR__"g3-5.c",
   "north" : __DIR__"g3-3.c",
   "east" : __DIR__"g3-8.c",
]));

  setup();
}

