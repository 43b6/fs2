#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "ͨ��С����");
  set ("long", @LONG

	����ͨ��С��ͨ����ɽ��ɽ·��ǰ����һ�ζ��͵�����·�Σ�
	�ഫ�������µ�һ������Са��������������������µ�һ���ܹ�����
            ��ν���ܹ������ǲ������������⿿�����Ŀ����ƶ�������
	��Ҳ����������  ֻ��ϧ��Са����ʦ��ŷ���������Ѳ�֪ȥ��......

LONG);

  set("exits", ([ /* sizeof() == 3   */
     "north" : __DIR__"hr16.c",   
     "south" : __DIR__"hr7.c",   
]));

set("objects",([
  "/open/killer/npc/magnpc1.c":2,]));

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
