#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "ͨ��С��һ¥");
  set ("long", @LONG

   ��������Ż�������Զ����������ˣ����˺�����ɵ�������
   ������ȥÿ�����䳤�Ķ�һ�����������Էֱ棬����Ҫ���ȥ���ߣ�

LONG);

  set("exits", ([ /* sizeof() == 3   */
     "west" : __DIR__"hr6.c",
     "down" : __DIR__"hr14.c",   
     "south" : __DIR__"hr15.c",   
     "north" : __DIR__"hr13.c",   
]));

 set("objects",([
  "/open/killer/npc/spy4.c":1,]));
  setup();
}

void init()
{
//
}

int do_look(string str)
{
  object me;

   if(str )
    return notify_fail("���뿴ʲô����������û���˾����𣿣��ÿ޵ıȽϿ�������\n");
   return 1;
}
