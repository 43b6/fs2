// open/killer/ninja/find/9block.c
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short","�Ź��������");
  set ("long", @LONG
  
    ������������һ����ֵĵط���һ����һ����ʾ��
    ����Ϊ�Ź��������㣬��������ʽ�����Թ�
      ������Թ��з����κδ��󣬽����˻ص���㡯
    
LONG);
 
  set("exits", ([ /* sizeof() == 1   */
      "north" : __DIR__"9block2.c",   ]));
  set("no_transmit",2);
  setup();
}

void init()
{
    this_player()->delete_temp("wrongway");
}
