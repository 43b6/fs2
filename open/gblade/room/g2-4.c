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
   set("exits", ([ /* sizeof() == 4 */
   "south" :__DIR__"g3-7.c",
   "east" :__DIR__"g2-3.c",
   "west" :__DIR__"g3-8.c",
   "north" : __DIR__"g3-1.c",
]));

  setup();
}

