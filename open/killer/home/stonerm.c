#include <room.h>
inherit ROOM;
void create ()
{
   set ("short","ˮ��");
   set ("long", @LONG
���ǵ���ˮ���ĵײ�,�������Ǻڰ��޹�
ֻ��������΢���Ĺ���(light)��������
 

�����ϱ���һ�Ŵ�ʯͷ(stone)��
LONG);
set("item_desc",([
  "light" : "�㾡�����뿴��������Ǵ��Ƕ���������,����̫����,�������,Ҫ��ȥ�Ļ�,��(pass) ��\n",
  "stone" : "������һ��ʯͷ���������,Ҫ�ſ���(swim)��\n",]));
  set("no_fight",1);
  set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  setup();
}
void init()
{
   add_action("do_swim",({"swim"}) );
   add_action("do_pass",({"pass"}) );
}
int do_swim(string arg)
{
   object me;
   if (!arg || arg=="" )  {
   me = this_player();
  tell_object(me,"ֻ����ڡ����ڡ����Ľ���������,����ַſ��˴�ʯ,��һ�εر�
ˮ������ ��\n");
  tell_object(me,"��������ڱ�ˮ�����׳����� ��\n");
  me->move("/open/ping/room/road8");
 return 1;
 }
return 1;
}
int do_pass(string arg)
{
  object who;
  who=this_player();
  if((arg="light") || (arg=="light")) {
  tell_object(who,"������������ߴ���ȥ,����С��,�����˲�֪���ĵط���\n");
  who->move(__DIR__"rb.c");
  return 1;
  }
   return 0;
}
