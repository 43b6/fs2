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
   "south" :__DIR__"g2-4.c",
   "west" :__DIR__"g3-2.c",
   "north" : __DIR__"g3-1-1.c",
]));

  setup();
}

