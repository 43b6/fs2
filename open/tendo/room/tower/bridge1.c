#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�ϻ���");
  set ("long", @LONG
�����ұڶ��ͣ�ԭ����һ���ţ�����֪Ϊ�����������ƻ���ã�
�˴��ٿ������ɣ����ӽ��£�������״����ע�⵽�߿մ���һ������
��������һ�˰���һ���ʯͷ�ϣ�����ɽ�ַ��٣��Ӵ���ʯ�����¾�
�ﾡ���۵ס�
LONG);

  set("exits", ([
  //"south" : "/open/tendo/room/g5-1.c",
  ]));
  set("light_up", 1);
  set("outdoors",1);

  setup();
}
void init()
{
        add_action("do_search", "search");
        add_action("do_fly","fly");
}

int do_fly(string str){
 int exp;
 object me;
 string name;
 me = this_player();
 exp=me->query("combat_exp",1);
 name=me->query("name");
  if(!str || str != "line"){
        tell_object(me,HIC"�㻹�����Ϊ����ٿշɶɰ�!!����������Ծ�أ�\n"NOR);
        return 1;
                           }
  if(exp < 1500000){
        tell_object(me,HIC"�����ѧ��Ϊ�����������ܻ�ɲ���ȥ������ม�\n"NOR);
        return 1;
                  }
  tell_object(me,HIC"ֻ�������ʹ����һ��̤�ڳ�����,˳�ƶ�����\n"NOR);
  tell_object(users(),HIW"
         ������ԡѪ��־�ߣ�ǧ�ﶨ�������壻

                ��������ǹ��ڣ��ٴ�����˭�빲����

      "+HIY+name+HIW"�ٿշɶ���"HIR"�ϻ�֮��"NOR"����Ȼ�ز�����������֮;��\n"NOR);
  me->move("/open/tendo/room/tower/tree1");
  return 1;
}
int do_search()
{
object me;
 me = this_player();
 tell_object(me,HIW"һ���������õĳ���(line)��������ҡҡ��׹������㵨�ӹ���Ļ������������ٿշɶɶ���(fly)��\n"NOR);
 return 1;
}
