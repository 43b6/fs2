

inherit ROOM;
void create()
{
  set ("short", "����");
  set ("long","
    ��һ��������Ϳ��һ·����ȥ���ǽ������������
Ҫͨ���ĸ���Ҫ�ĵط���һ·�϶��Ǵ��������װ��Ʒ��
�����й��Ļ��Ķ���Ī�������������ν��ս��Ʒ��??
������ȥ̽̽������!!

 ");
   set("exits", ([
   "north"       :__DIR__"r17.c",
   "south"       : __DIR__"r24.c",
   "west"       : __DIR__"r32.c",   
  ]));      
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/ma2":1,
]));
  set("light_up", 1);
  setup();
} 

