#include <room.h>

inherit ROOM;

void create()
{
           set("short","ͨ��С����¥ǰͥ");
         set("long",@LONG
	������ǰ����һ��޴��ʯ�ţ�һ���и����ƻ��صĶ�����
	�ڻ�������д���ǣ�ׯ������Ϊ��ħ����������ɣ���������ʽ�ǣ�
	������һ�����ĸ�(�ո�)��������Ҫ����������
 
LONG);
        set("exits", ([
          "down":__DIR__"hr7.c",
        ]) );
        set("objects",([
          "/open/killer/npc/magnpc2.c":2,]));
        setup();
}

void init()
{
      add_action("do_look","look");
	add_action("do_write","cut");
}

int do_look(string str)
{
      if(str!="�ո�") 
	return 0;
      tell_object(this_player(),"��ʯ�ϻ���һ�п���(table)��\n");
      tell_object(this_player(),"����ʹ��ָ���ʽ cut XXXX on table) \n");
       return 1;
}

int do_write(string str)
{
  object me;

  me=this_player();
if (str !="������ָ on table")
	return 0;
  tell_object(me,"����ذ���ڿո���¡�������ָ��\n");
  tell_object(this_player(),"������ǰ��ʯ�Ŵ���.........\n");
  me->move(__DIR__"hru1.c");
  return 1;
}
