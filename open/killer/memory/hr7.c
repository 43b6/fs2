#include </open/open.h>
#include "ansi.h"
inherit ROOM;

void create ()
{
  set ("short", "ͨ��С��");
  set ("long", @LONG

   ��������Ż�������Զ����������ˣ����˺�����ɵ�������
   ������ȥÿ�����䳤�Ķ�һ�����������Էֱ棬����Ҫ���ȥ����
   ������ȥ���Ͽ��BACK�˳�ȥ��........................
   ��һ����������һ����ʾ��(sign)
   

LONG);
  set("exits", ([ /* sizeof() == 3   */
     "north" : __DIR__"hr9.c",
     "back" : __DIR__"hr5.c",   
]));
  set("item_desc", ([ /* sizeof() == 2 */
        "sign":"�����ɱ�ֹ���Ļ�����������ɱ����������ϴ���� meet black\n",
]));
 set("objects",([
  "/open/killer/npc/spy4.c":2,]));
  setup();
}

void init()
{
	add_action("do_meet","meet");
//	add_action("do_look","look");
}

int do_look(string str)
{
  object me;

   if(str )
    return notify_fail("���뿴ʲô����������û���˾����𣿣��ÿ޵ıȽϿ�������\n");
//::look();
}

int do_meet(string str)
{
  object me=this_player();

   if( str != "black" )
    return notify_fail("����ȥ���˭ѽ����\n");

if(me->query("class") != "killer")
{
	 if(me->query("class"))
		return notify_fail("����Ϊ����˭ѽ��Ҳ��Ҫȥ�������Լ���·�ɣ���\n");
	//��ʾ����ɱ����Ϊƽ����Ҫ����ɱ����
	if (me->query("quest/rain") != 1)
	message_vision(HIG"ͻȻ��һ�Գ���һλ��ϼ��ĸ��֣�����\n"NOR,me);
	message_vision(HIG"һ��Ұ������Ȼ�����˹����ϴ���ǰ........��\n"NOR,me);
	me->move(__DIR__"hru2.c");
	return 1;

}
	//��ʾ��ɱ�֣���Ҫȥ�������ϴ��ߣ���û�н��ħ��ɱ֮����
  if (me->query("quest/rain") != 1)
	return notify_fail("���ӣ�����������㣬Ҳ��Ҫȥ����������Ҫ�Լ���·Ŷ����\n");
	//�н��ħ��ɱ��ɱ��
  message_vision(HIG"ͻȻ��һ�Գ���һλ��ϼ��ĸ��֣�����\n"NOR,me);
  message_vision(HIG"һ��Ұ������Ȼ�����˹����ϴ���ǰ........��\n"NOR,me);
  me->move(__DIR__"hru1.c");
  return 1;
}
