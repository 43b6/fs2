#include <room.h>

inherit ROOM;

void create()
{
           set("short","����");
         set("long",@LONG
���ﵽ���������أ��ڰ����������Կ������ܣ���������һ��Ƥ���
����������ԼԼ֮���ƺ����������������֪���ǲ����Լ��ۻ��ˣ�
��ʱ���ܵ��Ѿ���գ������ƺ�û�г�·���������ƺ�����ͨ��Ү����������
һ�Եı�ʯ���ţ�
      ���ٻ���,���ǰ�����
 
LONG);
        set("exits", ([
          "up":__DIR__"rbd",
        ]) );
        set("objects",([
          "/open/killer/npc/doctor.c":1,]));
  set("no_transmit", 2);
        setup();
}

void init()
{
      add_action("do_look","look");
      add_action("do_write","dagger");
}
int do_look(string str)
{
      if(str!="��ʯ") return 0;
      tell_object(this_player(),"��ʯ�ϻ���һ�п���(table)��\n");
       return 1;
}
int do_write(string str)
{
  object me;

  me=this_player();
  if( str != "һʧ��,��ǧ�ź� on table" )   return 0;
  tell_object(me,"����ذ���ڿ��п��¡�һʧ��,��ǧ�źޡ���\n");
  tell_object(this_player(),"ͻȻ���������壬����������С���\n");
  me->move(__DIR__"boxrm.c");
  return 1;
}

