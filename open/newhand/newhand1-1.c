#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIW"����ռ�ָ�����ŷ���"NOR);
  set ("long","����ռ��ָ��ֳɶ���ϵͳ!!!
  1.һ��ָ��ϵͳ(help cmds)       (���е���Ҷ�����ʹ��)
  2.����ָ��ϵͳ(help clancmds)   (�����п��Ÿ�һ�����,����֮���޶����ɲ���ʹ��)
  ����Դ�help cmds�ͻ��г�����ָ�!!!
  ����Ը�ָ��в��˽�ĵط�,����Դ�help <ָ��>
  ����::
         �� help look
  �ͻ����
  ָ���ʽ : look [<��Ʒ>|<����>|<����>]
  ָ��˵�� :
             ���ָ������鿴�����ڵĻ�����
             ĳ����Ʒ��������Ƿ���
  ps:ָ�����������!!���������������ʱһ��Ҫ��ָ����!!
  \n");
  set("exits", ([
  "north" : __DIR__"newhand",
  "south" : __DIR__"newhand",
               ]));
  set("light_up", 1);
  setup();
}

